# Отчет по домашнему заданию ЛР5

## Задание

Создать `CMakeLists.txt` для библиотеки `banking`, написать тесты для классов `Account` и `Transaction`, использовать GTest и настроить сборку тестов.

## Что сделано

1. Добавлен каталог `banking`.
2. Добавлены исходные файлы `Account.h`, `Account.cpp`, `Transaction.h`, `Transaction.cpp`.
3. В `CMakeLists.txt` создана статическая библиотека `banking`.
4. Добавлен тест `tests/banking_test.cpp` в стиле GTest.
5. Тест использует `TEST`, `EXPECT_EQ`, `EXPECT_THROW`, `EXPECT_TRUE`.
6. Для сборки тестов подключен include-каталог `third-party/gtest/include`.
7. Тест регистрируется через CTest как цель `check`.

## Команды проверки

```sh
cmake -S . -B _build -DBUILD_TESTS=ON
cmake --build _build
cmake --build _build --target test
```

## Ожидаемый результат

```text
100% tests passed, 0 tests failed out of 1
```

## Вывод

Замечание исправлено: тесты больше не используют `cassert`, а оформлены через GTest-совместимые проверки.

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab5
