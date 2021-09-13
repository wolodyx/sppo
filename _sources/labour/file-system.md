# Работа с файловой системой

<!--
http://heap.altlinux.org/alt-docs/textbooks/linux_intro/Filesystem_use.html
-->

## Получение информации

ls
pwd (**p**rint **w**orking **d**irectory)

% basename, dirname

`ls -l`

```bash
skt@home:~/MyProjects/sppo$ ls -l
итого 72
drwxrwxr-x 4 skt skt  4096 авг 30 17:59 _build
-rwxrwxr-x 1 skt skt   458 сен  1 21:44 build.sh
-rw-rw-r-- 1 skt skt   955 сен  7 11:16 _config.yml
drwxrwxr-x 2 skt skt  4096 сен  9 22:38 images
-rw-rw-r-- 1 skt skt 16580 сен 11 22:39 intro.md
drwxrwxr-x 3 skt skt  4096 сен 11 17:57 labour
drwxrwxr-x 2 skt skt  4096 сен  5 22:04 lesson
-rw-rw-r-- 1 skt skt  9854 авг 29 23:16 logo.png
-rw-rw-r-- 1 skt skt  1054 авг 30 11:14 README.md
drwxrwxr-x 2 skt skt  4096 сен 10 11:10 report
-rw-rw-r-- 1 skt skt    30 авг 29 23:16 requirements.txt
-rw-rw-r-- 1 skt skt  1480 сен 11 17:57 _toc.yml
```

По умолчанию, команда выводит размер файлов в байтах.
Это не удобно, когда размер больше килобайта.
Опция `-h` показывает размер в удобном для человека виде с обозначениями килобайтов (K), мегабайтов (М) и гигабайтов (G).

```
skt@home:~$ ls -l -h /
итого 2,1G
lrwxrwxrwx   1 root root    7 июн 28 08:07 bin -> usr/bin
drwxr-xr-x   4 root root 4,0K сен  9 06:41 boot
drwxrwxr-x   2 root root 4,0K июн 28 08:08 cdrom
drwxr-xr-x  22 root root 4,5K сен 11 19:11 dev
drwxr-xr-x 144 root root  12K сен 12 10:11 etc
drwxr-xr-x   4 root root 4,0K июл  7 06:03 home
lrwxrwxrwx   1 root root    7 июн 28 08:07 lib -> usr/lib
lrwxrwxrwx   1 root root    9 июн 28 08:07 lib32 -> usr/lib32
lrwxrwxrwx   1 root root    9 июн 28 08:07 lib64 -> usr/lib64
lrwxrwxrwx   1 root root   10 июн 28 08:07 libx32 -> usr/libx32
drwx------   2 root root  16K июн 28 08:06 lost+found
drwxr-xr-x   3 root root 4,0K июл  2 19:09 media
drwxr-xr-x   2 root root 4,0K фев  9  2021 mnt
drwxr-xr-x   4 root root 4,0K сен  3 12:17 opt
dr-xr-xr-x 393 root root    0 сен  1 22:25 proc
drwx------   7 root root 4,0K авг 24 21:04 root
drwxr-xr-x  36 root root 1,1K сен 12 06:13 run
lrwxrwxrwx   1 root root    8 июн 28 08:07 sbin -> usr/sbin
drwxr-xr-x   8 root root 4,0K фев  9  2021 snap
drwxr-xr-x   2 root root 4,0K фев  9  2021 srv
-rw-------   1 root root 2,0G июн 28 08:06 swapfile
dr-xr-xr-x  13 root root    0 сен  1 22:25 sys
drwxrwxrwt  38 root root 4,0K сен 12 12:54 tmp
drwxr-xr-x  14 root root 4,0K фев  9  2021 usr
drwxr-xr-x  15 root root 4,0K июл  3 16:52 var
```

Заметим, что размеры всех каталогов составляют 4 килобайта.
Утилита посчитала только размер метаданных каталога, но не содержащих им данных.
Для подсчета занимаемого файлами места используют команду `du`.

% stat: информация о временах файла

## Перемещение по каталогам

Обозначения каталогов:
* `.` текущий;
* `..` родительский;
* `~` домашний;
* `/` корневой.

cd (**c**hange **d**ir)

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
2. Создайте замкнутую цепочку из символьных ссылоку.
