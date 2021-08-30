# sppo
Электронный учебник по курсу "Системное и прикладное программное обеспечение"
Превращение исходного кода проекта в учебник в формате html выполняет скрипт `build.sh` в корневом каталоге проекта.

## Настройка системы для сборки учебника

Учебник создан на базе [jupyter-book](https://jupyterbook.org/intro.html).

Для его установки выполните команду
```bash
pip install jupyter-book
```

Преобразования md-файла в презентацию выполняется через [marp-cli](https://github.com/marp-team/marp-cli).
Для него нужны Node.js не ниже версии 12.
А для установки Node.js будет нужен `curl`.

```bash
sudo apt-get install curl
curl -fsSL https://deb.nodesource.com/setup_12.x | sudo -E bash -
sudo apt-get install -y nodejs
```
