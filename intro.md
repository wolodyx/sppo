# Введение в учебный предмет

Учебный предмет, которому посвящен собранный здесь электронный материал, называется "Системное и прикладное программное обеспечение".
Предмет проходят учащиеся IV курса кафедры "Прикладная математика и информатика" СарФТИ за осенний семестр.

## О предмете

В зависимости от того для решения чьих задач (пользователя или компьютера) расчитана программа, она входит в одну из двух групп -- системных или прикладных программ.
Разделение программ по этому признаку и составляет название нашего предмета.
Количество программ огромно, даже если ограничиться теми, что потребуется на практике.
Это различные редакторы и просмотрщики, интегрированные среды разработки, веб-браузер, офисные пакеты, мессенджеры, игры.
Все они широко известны, справедливо заслужили популярность и стали стандартом в своей области.
Разобраться в их работе не составит труда.
Работа с ними начинается сразу, без изучения руководства пользователя.

```{tip}
В конкурентной борьбе за внимание пользователя выживают только удобные программы.
```

В этом предмете программное обеспечение разбирается с точки зрения не обычного пользователя, для которого компьютер -- это инструмент для общения, поиска информации, развлечения; а с точки зрения разработчика программ.
Интересы, цели, инструменты этих пользователей диаметрально противоположны.

<!--
Объектом для изучения станет программное обеспечение, которое будет рассмотрено с разных сторон.

Программы на компьютере взаимодействуют с операционной системой для доступа к оборудованию.
Это взаимодействие скрыто от разработчика в недрах системных библиотек и языков программирования.
Разработка прикладных программ не требует особых знаний о системе.
Но они нужны для разработки системных и эффективных программ.
Поэтому мы повторно изучим оперционную систему, но в контексте программного обеспечения.
-->

<!--
Сложно не согласиться, что за популярной программой стоит качество.
Пользователи не вкусовые сосочки, которых можно обмануть усилителем вкуса.
Поэтому популярные программы интересны со стороны применяемых в них технических решений, которые позволили достичь высоких показателей.
Эти решения доказали свою эффективность на многих пользователях и разных сценариях применений.
По этой причине в книге приводятся описания внутреннего строения и логики работы составляющих частей операционной системы, ... .
Описания приведены без подробностей, чтобы не потеряться в деталях.
Технические решения с адаптацией могут быть применены в ваших разработках.
-->

<!--
Структура лекционного материала не иерархическая, а плоская.
Это означает, что тема поделена только на разделы, но не подразделы.
-->

Собранный здесь материал не является уникальным.
Он добывался из книг, научных статей, сетевых публикаций (блогов), форумах типа [вопрос-ответ](https://stackoverflow.com).
При его отборе принимались во внимание следующее обстоятельство.
Специализация "Прикладная математика и информатика" основной упор делает на математику и информатику -- теоретические составляющие программирования.
Для превращения теоретических идей в программный код используют языки программирования Си, С++, Python.
Этого опыта вполне достаточно, чтобы написать простую программу.
Но современная программа -- это не просто исполняемый файл, а сложная настраиваемая динамическая система, взаимодействующая с различным окружением.
Новый сотрудник, начиная свою профессиональную деятельность, столкнется с ворохом разнообразных задач, которые не связаны ни с математикой, ни с информатикой.
Это решения вопросов о вводе и выводе данных, конфигурации программы, декомпозиции на модули, тестировании, взаимодействии с пользователем, ОС, программой, программной библиотекой.
Выбор способа решения каждой такой задачи формирует будущее программы и вместе с ней его создателя.

```{tip}
Есть два пути развития ученика в научного сотрудника.
Выбор между ними зависит от того, какую работу ему предложат в момент прихода на работу.
Если идет срочная работа над сложной программой, то ученика бросят на исправление ошибок, улучшению программы.
Этот путь сформирует *универсального сотрудника*.
Универсальный сотрудник быстро разбирается в принятых ранее решениях и вносит в них изменения.
Если работа над программой только начинается, а опытных сотрудников в коллективе не достаточно, то ученику дадут обособленную задачу.
Он будет ответственным за все этапы решения задачи.
Это воспитает *уникального сотрудника*.
Уникальный сотрудник держит в голове всю структуру проекта, принятые решения, потенциальные проблемы, выбирает путь развития программы.
```

% Задача предмета

% Чему научится студент
Мы поверхностно приобщимся к виртуальной машине VirtualBox, UNIX-подобной операционной системе Ubuntu на ядре Linux, системным утилитам, командной строке и интерпретатору bash, терминальному мультиплексору tmux, компилятору gcc, отладчику gdb и заново вспомним язык программирования Си.
<!-- В конечном счете мы приобретем уверенность при работе с UNIX-подобными ОС. -->

## Про учебник

% Состав обучающего материала
Обучающие материалы поделены на три части:
* тексты лекций;
* презентации лекций;
* разбор практических задач.

% Вопросы для самоконтроля
В конце лекционного материала предпоследним разделом, до списка источников, размещаются вопросы для самоконтроля.

% Что рассматривается в предмете.

% Введение в компьютеры.
Во введении излагается понятие компьютера, его внутреннее устройство и составляющие части.
Как так получилось, что машина подступила близко к человеческому мышлению и научилась проводить вычисления и анализировать информацию.
Почему компьютер электронный и двоичный?
Рассматривается его внутреннее устройство -- электронные узлы, программные элементы и как они взаимодействуют.
Как можно зашифровать любое интересующее нас знание алфавитом, состоящего только из двух символов -- нуля и единицы.

% История компьютерной техники
Разбираем историю появления компьютерной техники -- от умения считать до современных дней.
Как эволюционирова техника.

% Операционная система и ее внутреннее устройств
Устройство ОС и ее связь с программами.
Программы анализируются в связи с ОС -- в основном с UNIX, но иногда и Windows.

% Связь программ с ОС.

% Связь программ с другими программами.

% Связь программ с людьми

% Состав и структура ПО, его функции

% Разработка ПО

## О занятиях

% Как проходят учебные занятия
Предмет запланирован на прохождение в течение осеннего семестра.
Семестр состоит из 17 учебных недель по два занятия на каждой неделе.
На первом занятии проходят лекции, а на втором практические занятия.

% Что необходимо для лекций
Тексты лекций, как и остальные материалы, доступны [онлайн](https://wolodyx.github.io/sppo), поэтому конспектировать их не нужно.

% Что необходимо для практических занятий
Для практических занятий нужны машины с подготовленной ОС Ubuntu.
Подробнее о подготовке машины и ОС обсуждается в [первом практическом материале](labour/create-virtual-machine.md).

<!-- К материалам прилагаются исходные данные -- исходные коды программы, логи для анализа, структура каталогов, ... . -->

% Требования к студенту
От студента требуется умение читать технический английский и быстро печатать на клавиатуре.

% Знание технического английского языка
Программирование стало глобальной деятельностью.
Алгоритмы, языки программирования, операционные системы, парадигмы программирования не привязаны к регионам и законодательствам стран.
Удачные идеи распространяются по всему миру и становятся популярными.
Созданный в результате продукт не материален.
Он может быть мгновенно передан в любую точку планеты и склонирован бесконечное количество раз.
Чтобы все люди понимали друг друга, обмен знаниями происходит на английском языке.
Чтобы быть частью этого процесса, нам также понадобится знать этот язык.

% Что делать, если не знаешь английского языка
Обойтись без понимания английского языка можно двумя способами.
Во-первых, воспользоваться переводными текстами.
В системе UNIX можно установить пакеты локализации.
Но не все тексты переведены на национальные языки.
Исходные тексты часто обновляются, а переводы не поспевают за этим.
Поэтому, чтобы быть в курсе дела, нужно уметь читать исходный текст, который в большинстве случаев написан на английском.
Во-вторых, воспользоваться сервисами автоматического перевода текстов.
Качество таких сервисов достаточно высокое.

% Умение печатать на клавиатуре
Второе умение, без которого не обойтись -- это быстрая печать на клавиатуре.
Данный навык приходит со временем.
Но практика показывает, что современные студенты, даже на IV курсе, печатают неуклюже.
При плохой печати энергия и внимание вместо обучения тратится на набор текста, последующий поиск опечаток и неумелую навигацию по символам.

% Проверка успеваемости студента

% Проходить самостоятельно практические материалы
Надо быть подготовленными.
Иметь собой подготовленную [виртуальную машину](labour/create-virtual-machine.md).

## Обратная связь

Автор будет благодарен любым замечаниям и помощи в составлении учебных материалов.
Это могут быть:
* указание на ошибки или неточности;
* отсутствие важной информации;
* оформление учебника графическими материалами;
* дополнительные вопросы для самоконтроля;

Буду рад, если предложите другую структуру, примеры чтобы донести знания.
Замечания присылайте на электронную почту `wolodyx@yandex.ru`.
