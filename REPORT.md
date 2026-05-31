# Отчет по лабораторной работе №5

## Тема

Модульное тестирование C++-проекта с использованием GoogleTest.

## Цель работы

Добавить тесты к CMake-проекту и настроить запуск тестов через CTest.

## Выполненные действия

1. В проект добавлена библиотека `print`.
2. Добавлен тестовый файл `tests/test1.cpp`.
3. В `CMakeLists.txt` добавлена опция `BUILD_TESTS`.
4. Добавлена цель `check` для сборки теста.
5. Тест зарегистрирован через `add_test`.
6. Travis CI настроен на сборку проекта и запуск тестов.

## Команды сборки и тестирования

```sh
cmake -S . -B _build -DBUILD_TESTS=ON
cmake --build _build
cmake --build _build --target test
```

## Ожидаемый вывод тестов

При успешной сборке цель `check` компилируется, а команда тестирования завершается без ошибок.

Пример результата:

```text
Running tests...
Test project .../_build
    Start 1: check
1/1 Test #1: check ............................   Passed
100% tests passed, 0 tests failed out of 1
```

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab5
