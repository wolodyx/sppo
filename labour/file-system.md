# Работа с файловой системой

<!--
http://heap.altlinux.org/alt-docs/textbooks/linux_intro/Filesystem_use.html
-->

% basename, dirname

## Перемещение по каталогам

Обозначения каталогов:
* `.` текущий;
* `..` родительский;
* `~` домашний;
* `/` корневой.

cd (**c**hange **d**ir)
pwd (**p**rint **w**orking **d**irectory)
ls

## Изменение файлов и каталогов

mkdir (**m**a**k**e **dir**)
rm
cp
mv

## Создание ссылок на файлы

```bash
ln -s target-file ref-file
```

## Вопросы для самоконтроля

1. Создайте следующую иерархию каталогов в домашнем каталоге:
```
a1
|-b1
|  |-c1
|  |-c2
|-b2
|  |-c3
|  |-c4
|-b3
   |-c5
   |-c6
```
