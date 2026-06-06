# Отчет по домашнему заданию ЛР5

## Задание

Создать `CMakeLists.txt` для библиотеки `banking`, написать тесты для классов `Account` и `Transaction`, настроить сборку и запуск тестов.

## Что сделано

1. Добавлен каталог `banking`.
2. Добавлены исходные файлы `account.h`, `account.cpp`, `transaction.h`, `transaction.cpp`.
3. В `CMakeLists.txt` создана статическая библиотека `banking`.
4. Добавлен тест `tests/banking_test.cpp`.
5. Тест регистрируется через CTest как цель `check`.

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

Домашнее задание выполнено для библиотеки `banking`: проект собирается через CMake, библиотека подключается к тесту, тест проверяет основные сценарии работы счета и транзакции.

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab5
