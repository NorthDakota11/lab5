# GoogleTest CMake notes

To complete the lab05 tutorial, extend `CMakeLists.txt` with a `BUILD_TESTS` option.

The test target should be named `check`, use `tests/test1.cpp`, link the `print` library with GoogleTest, and be registered with CTest through `add_test`.

Typical commands:

cmake -S . -B _build -DBUILD_TESTS=ON
cmake --build _build
cmake --build _build --target test
