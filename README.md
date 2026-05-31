# lab05

Лабораторная работа №5 посвящена модульному тестированию C++-проекта с использованием GoogleTest.

Проект основан на предыдущей лабораторной работе: используется библиотека `print`, CMake-сборка и тестовый файл.

## Состав проекта

- `CMakeLists.txt` — CMake-файл сборки.
- `include/print.hpp` — заголовочный файл библиотеки.
- `sources/print.cpp` — реализация библиотеки.
- `tests/test1.cpp` — модульный тест.
- `third-party/gtest/include/gtest/gtest.h` — минимальный совместимый заголовок для проверки теста.
- `.travis.yml` — конфигурация Travis CI.
- `REPORT.md` — отчет по лабораторной работе.

## Сборка проекта

```sh
cmake -S . -B _build -DBUILD_TESTS=ON
cmake --build _build
```

## Запуск тестов

```sh
cmake --build _build --target test
```

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab5
