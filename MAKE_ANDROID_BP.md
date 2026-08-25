# Details about making Android.bp build rules in Glib project

## The goal

The goal is to make this project compile for Android flawlessly
in AOSP source tree using Android's native Android.bp build rules.

This project originally uses meson build system.

## Guidelines

- If it's very unclear about what to do for a specific thing, put it on TODO list and wait for the user's decision.
- We shall handle the conversion for all feasible modules, options, and configurations.
- Try to analyze everything by only just reading. If non-read behaviors would be required during analyze, ask the user before proceed.
- Do NOT try to forcibly convert any mechanism that are apparently infeasible in Android.
- Do NOT try to compile and verify by yourself, the user will do it, and report issues to you if exist.
- We currently only want to make this project build for the target Android device, not for anything else. Ignore build rules for irrelevant targets.
- We currently ignore test related modules.

## Android.bp syntax

C/C++ module types are named `cc_*`.
Check out the test cases on `build/soong/cc/cc_test.go` in AOSP for its syntax.
Note that you can actively use the `cc_defaults` module type where appropriate.

To expose C/C++ include directory for other modules, use `cc_library_headers` module type.
Check out the test cases on `build/soong/cc/library_headers_test.go` in AOSP for its syntax.

To install plain files, use `prebuilt_etc` and its derivatives module types.
Check out the test cases on `build/soong/etc/prebuilt_etc_test.go` in AOSP for its syntax.

To handle conditions, check out the test cases on `build/soong/android/selects_test.go`
in AOSP for examples.

Modules on different Android.bp files can rely on each other,
load sequence of Android.bp files does not matter.

## Handle conversion from meson.build

### General

Avoid all kinds of dynamic generation of the values on build rules,
especially for meson logics like `if cc.compiles()` and `if cc.has_header_symbol()`,
because Android.bp does not support it.
Such values should be hardcoded while being converted.

To get meson build options, just follow the defaults on `meson.options` file.

C/C++ library modules shall use one of module type in
`cc_library{,_static,_shared}`,
and the module names shall begin with `lib`.

Handle architecture-specific differences for all modules,
do not assume we only want to support a single architecture.

All modules shall be available to `vendor` partition.
You can specify it in a defaults module,
and then include that defaults module in each modules.

Ignore install directory customizations, follow standard Android directory structure.

Compilation of Android modules will be done in a sandboxed environment,
there are restrictions of accessing host tools in such environment.

Every pieces of content written to Android.bp shall come with a comment telling
where the content was converted from. Android.bp supports `// ` form of comments.

Modules converted to Android.bp form shall stay
on Android.bp file in the (sub)directory
same as the where the original build rules is in.

### Dependencies

- Assume that all optional dependencies does not exist by default, optional dependencies can be handled under a condition (disabled by default).
- `pkgconfig` does not have alternative in Android. Try to get rid of `pkgconfig` logic.

### Dynamically generated C defines

These needs to be made static anyways.

If the original build rules saves these to a header file,
you make a header file containing such defines,
save the header file in a dedicated include directory,
and expose the include directory to modules via header library module.

If the original build rules sets these on compiler parameters,
you can define a `cc_defaults` module and
put the result parameters on `cflags` field,
finally let the modules which wants it include that module.

### Compiler related

Android uses a recent clang version for the compiler.

GCC toolchain has been deprecated in Android.

Assume that the compiler has every features that the project wants.

### C library related

We will not use any C libraries other than Bionic which is bundled with Android.

Bionic source code is available at `bionic` directory in AOSP.
There contains a `README.md` for some informations.

libc headers are available in `bionic/libc/include` directory in AOSP.

If you're unsure whether if the C library supports a feature, assume it's supported.
