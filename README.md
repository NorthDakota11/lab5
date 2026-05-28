# lab05

Laboratory work V: unit testing with GoogleTest.

The task is based on `tp-labs/lab05`: copy the lab04 CMake project, add GoogleTest, create a unit test, build with `BUILD_TESTS`, and run tests through CMake.

## Files

- `include/print.hpp` - public header.
- `sources/print.cpp` - library implementation.
- `tests/test1.cpp` - GoogleTest test.
- `CMakeLists.txt` - base CMake build.
- `.travis.yml` - Travis CI placeholder.

## Basic build

```sh
cmake -S . -B _build
cmake --build _build
```

Full GoogleTest and Travis snippets are stored in `docs/gtest-cmake.md` and `docs/travis.md`.
