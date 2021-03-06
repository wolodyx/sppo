# История развития вычислительной техники

## Введение

Необходимость в расчетах у человечества была всегда.
По мере развития цивилизации, их объемы только увеличивались.
Они были нужны при измерении площади земельного участка, начислении и учета налогов, слежении за астрономическими циклами, обработке данных переписи населения, создании логарифмических и тригонометрических таблиц, в военной сфере, в бухгалтерском учете и финансово-статистическом анализе.
Для удовлетворения потребностей в вычислениях, были разработаны различные устройства.
Сложность этих устройств со временем возрастала, достигнув сегодня физических пределов — скорости света и размера атома.

## Появление числа

Простейшим приспособлением для облегчения счета можно назвать пальцы на руках.
Дети используют их при складывании и вычитании чисел от одного до десяти.
Количество пальцев ограничено и не хватит посчитать богатый улов.
Для счета использовали легкодоступные небольшие однотипные предметы — камешки, ракушки, зарубки на палке, узелки на веревке.
Они наглядно показывали количество скота, мешков с зерном, одолженных денег и позволяли планировать хозяйственную деятельность.
Про унарную систему счисления.

Про позиционную систему счисления.
Сложение, вычитание и умножение многозначных чисел можно выполнить в уме или на бумаге.
Индусы использовали десятичную систему счисления и им были известны быстрые методы умножения.
От индусов эти знания передались арабам, а от них — европейцам.
Если человек знаком с составом числа, знает таблицу умножения и приемы сложения и умножения, то он может в уме выполнить арифметические операции.
Для облегчения счета промежуточные значения выписывали на бумаге (песке, пергаменте, глиняной или восковой табличке).

## Первые вычислительные устройства

### Абак

С увеличением объемов хозяйственной деятельности камешки перестали быть удобным средством для учета и планирования.
Оперирование в уме многозначными числами утомительно и подвержено ошибкам, а бумага была недоступна или стоила немалых денег.
Появление абака решило проблему устного счета.
Абак — это доска с параллельными углублениями и перемещающимися камешками в них.
Предполагают, что он впервые появился в III тысячелетии до н.э. в Древнем Вавилоне.
Оттуда он попал в другие страны — Китай, Японию, Римскую Империю, Египет, Западную Европу и известен под разными названиями.
Ближним родственником абака в России являются русские счеты, появившиеся в XV-XVI веках.

```{figure} ../_images/abacus.jpg
Римский абак
```

В абаке для представления числа используется позиционная пятеричная система счисления, а для кодирования цифр — унарная.
На нем легко и быстро складывают и вычитают многозначные числа, но сложно и неочевидно — деление и умножение.
Русские счеты в СССР использовались в торговле вплоть до конца XX века, пока их не вытеснили ставшие доступными карманные калькуляторы.

### Палочки Непера

В научных вычислениях, особенно в астрономии, приходилось часто умножать, делить, извлекать квадратные и кубические корни из многозначных чисел, что неудобно выполнять на абаке.
Шотландский математик Джон Непер предложил специальные счетные палочки, упрощающие умножение.

```{figure} ../_images/nepers-sticks.png
Палочки Непера
```

Каждому числу от 0 до 9 соответствовала палочка, разделенная поперечными чертами на 9 квадратов.
Каждый квадрат разделялся на два треугольника.
Палочки вместе составляли таблицу умножения.
Результат умножения записывался в квадрат — в верхний треугольник помещались десятки, а в нижний — единицы.
Многозначное число складывалось из палочек, а его произведение на однозначное число считывалось из соответствующей строки.

### Логарифмическая линейка

Палочки Непера были в основном развлечением и не распространились широко.
Но наибольшую популярность получило обнаружение Непером логарифмов и их свойств, которые позволили значительно ускорить умножение и деление многозначных чисел.
Он обнаружил, что если величины образуют геометрическую прогрессию, то их логарифмы — арифметическую.
Это позволило умножение приводить к более простому сложению, а деление — к вычитанию.
Соответственно, извлечение квадратного и кубического корней приводились к делению на 2 и 3.
В 1614 году он опубликовал свою работу — определение логарифма, описание его свойств и таблицу значений логарифмов тригонометрических функций.
Его работы позволили значительно упростить астрономические вычисления.

Для умножения чисел x и y используется свойство логарифмов log(xy)=log(x)+log(y).
То есть, умножение чисел приводится к сложению их логарифмов.
С использованием логарифмических таблиц, алгоритм умножения выглядел следующим образом.
В таблицах ищутся логарифмы умножаемых чисел, которые затем складываются.
По полученному значению — логарифму произведения, ищется в таблице само произведение.

В 1620-х годах Эдмунд Уингейт и Уильям Отред предложили другой способ вычислений, но без таблиц, с использованием двух скользящих линеек, которая известна как логарифмическая линейка.
Долгое время, до середины XX века, она служила основным инструментом для вычисления у инженеров.
Числа на линейку нанесены в логарифмическом масштабе.
[Умножение с помощью линейки].
Линейка позволяет не только умножать и делить, но и возводить в степень и извлекать корни, вычислять тригонометрические функции.

```{figure} ../_images/slide-rule.jpg
Логарифмическая линейка
```

Линейка относится к аналоговым вычислительным устройствам.
Точность вычислений в ней ограничена тремя разрядами после запятой.
Для точных вычислений используются цифровые устройства.
Номограммы — аналоговые вычисления.

### Механическая счетная машина Шиккарда

Вильгельм Шиккард в 1623 г. придумал первое механическое счетное устройство для умножения с накоплением.
Для умножения использовался метод столбиком, последовательно суммируя частичные произведения.
Первый множитель устанавливался в верхних окошках, используя цилиндрические палочки Непера.
Задвижки по бокам открывали окошки с результатами частичных произведений.
Их суммирование с результатом выполнялось прокручиванием ручек снизу.
Перенос разряда при переполнении происходил автоматически за счет системы шестеренок.
Результаты умножения накапливались в нижнем суммирующем устройстве.

```{figure} ../_images/schickard-mechanical-calculator.jpg
Механическая счетная машина Шиккарда
```

Изобретение Шиккарда долгое время не было известно, пока в середине XX века не обнаружили чертежи из его писем Кеплеру.
Неизвестно, изготовил ли изобретатель прототип.
Но действующая модель собрана по чертежам и сейчас находится в доме-музее Кеплера.

### Суммирующая машина Паскаля

В 1642 году 19-летний Блез Паскаль создал суммирующую машину, также известную как “Паскали́на”.
Паскалина позволяла складывать и вычитать десятичные числа до 8 разрядов.
Механизм представлял обычный счетчик оборотов, составленный из связанных 10-зубчатых колес.
Провернутое на полный оборот колесо зацепляло соседнее и проворачивало его на один зубец, реализуя таким образом перенос разряда при переполнении.
Колеса поворачивались только в одном направлении, что позволяло только суммировать.
Поэтому для вычитания использовался дополнительный код — первое слагаемое в дополнительном коде складывалось со вторым слагаемым.
Для сброса счетчики устанавливали на число 99999999 и к нему прибавляли 1.

```{figure} ../_images/pascaline.jpg
Суммирующая машина Паскаля
```

```{figure} ../_images/pascaline-internal-device.png
Внутреннее устройство машины Паскаля
```

Своим устройством Паскаль хотел облегчить работу отца, занимавшегося учетом собранных налогов.
Паскаль изготовил около 50 устройств и смог продать несколько из них.
Устройства не получили распространения в силу того, что денежная система Франции того времени имела недесятичную систему — один ливр состоял из 20 су, а один су из 12 денье.
Но несмотря на это конструкция из связанных шестерен будет основой механических сумматоров будущего.

### Арифмометр Лейбница

В 1673 году Готфрид Вильгельм Лейбниц изобрел конструкцию арифмометра, который был лучше, чем у Паскаля.
Позволяла умножать, делить, складывать и вычитать в десятичной системе счисления.
В его арифмометре использовался шаговый барабан, который долгое время стал основным элементом в более поздних арифмометрах.

Лейбниц создал свое устройство, чтобы облегчить расчеты Христиану Гюйгенсу (астроном).

Эти механические устройства не имели коммерческого успеха из-за сложности изготовления и слабых вычислительных способностей.
Первым арифмометром, имевший успех, было выпущено в 1820 году французским изобретателем Тома.
Его устройство продавалось в течение 90 лет.

В России первый арифмометр разработал Чебышев в 1850 году.
В СССР с 1929 по 1978 гг. выпускался арифмометр Феликс.
Он применялся в расчетах, для проекта разработки атомного оружия — до того, как были созданы первые электрические вычислительные машины.

Принцип действия арифмометра основан на механических элемента — зубчатых колесах и шаговом барабане.
С их помощью умножение выполнялось как поразрядное сложение и сдвиг суммы частных производных.
Для приведения в действие необходимо было вращать ручку.
Для удобства, в некоторых моделях могли быть электромоторы.

### Перфокарты Жаккарда

Изобретение перфокарт Жаккардом (1808 г.) позволило создавать программируемые устройства.

Арифмометры не были программируемыми устройствами.
Первую попытку создать аналог современного ЭВМ была предпринята Чарльзом Бэббиджем в 1822 году.
Его задачей была автоматизировать рутинные вычисления.
Работа продолжалась до 1838 года и не увенчалась успехом.
Аналитическая машина Бэббиджа стала прообразом современных компьютеров.

## Электромеханические вычислительные устройства

Следующий шаг — это электромеханические устройства, использующие вместо вращающихся устройств электромеханические реле.

С появлением электричества появились табуляторы — программируемые электромеханические устройства для суммирования и категоризации.
Использовались для автоматической обработки данных переписи населения, бухгалтерских и экономико-статистических расчетов.
Табулятор Холлерита (1888=1890 гг.) — первое успешное коммерческое устройство.
Производитель этого устройства далее будет переименован в IBM.

Машина Z1 (1938 г.) немецкого изобретателя Конрада Цузе — первая программируемая вычислительная машина.
Программа читалась из перфокарт, память вычислителя организована из конденсаторов, ввод осуществлялся с клавиатуры, для вывода использовалась панель из лампочек.
тактовая частота 1 Гц, умножение выполнялось за 5 секунд.
Далее были выпущены машины Z2, Z3.

Марк I — машина разработки IBM по контракту с ВМС США во главе с Говардом Эйкеном.
В обоих машинах отсутствовали циклы и условные переходы.
В Марк 1 была использована гарвардская архитектура — программа и данные хранились отдельно.
Машина заменяла труд 20 вычислителей.

## Электронные вычислительные устройства

### Электронные лампы
Если в электромеханических устройствах использовались реле с его подвижными элементами, то на следующем уровне произошел переход на вакуумные лампы.

ЭНИАК (1945 г.) — ЭВМ на базе вакуумных ламп.
Разрабатывался для расчета баллистических таблиц — поправок к прицелу с учетом различных факторов (скорости ветра, снаряда, угла стрельбы и т.п.).
Но также использовался при разработке термоядерного оружия, предсказания погоды, инженерных расчетов.
Вычислительная мощность — 357 операций умножения, 5000 операций сложения в секунду.
Ввод и вывод осуществлялся через перфокарты.
Вычисления проводились в десятичной системе.
На его разработку было потрачено 17468 ламп, 7200 кремниевых диодов, 1500 реле, 70 тыс. резисторов, 10 тыс. конденсаторов.
Проблемой был частый отказ ламп, что приводило к остановке машины.
Среднее время наработки лампы было 2500 часов, и сгорало их 2-3 штуки в неделю.
Безотказно машина работала 20 часов, что составляло месячный объем механических вычислений.
К проекту ЭНИАК был подключен Джон фон Нейман.
Он предложил принцип совместного хранения данных и команд программы в памяти компьютера, использование двоичной системы для хранения чисел, адресации памяти нумерованными ячейками, программа в виде последовательности команд, порядок следования которых зависит от результатов вычислений.

Впервые архитектуру фон Неймана была реализована в машине EDSAC (1949 г.), созданную в Кембриджском университете.

IBM Systems/360 (1964 г.) — линейка компьютеров (мейнфреймов) от IBM различной производительности.
В этой линейке были введены 8-битный байт как минимально адресуемая ячейка памяти, шестнадцатеричная система счисления, совместимость ПО между разными моделями машин, технология микрокода.
IBM разделила архитектуру и реализацию, и не стала патентовать идеи.
Сторонние производители могли создавать дополнительные устройства к продукции IBM.

Первые ЭВМ ЭНИАК была разработана на электронных лампах, которые заменили электромеханические реле.
Устройства на лампах имели большое энергопотребление (15-150 кВт), малый ресурс наработки на отказ (несколько часов) и большие объемы.
ЭВМ на лампах относятся к первому поколению.

<!-- Изобретение транзистора -->
Изобретенный в 1947 году транзистор стал заменой ламп.
Транзисторы имели меньшие размеры, чем лампы и со временем становились еще меньше.

<!-- Надежность транзисторов -->
Несмотря на это не решилась проблему надежности.
Наоборот, было сложно обнаружить неисправность из-за миниатюризации компонент.

<!-- БЭСМ-6 -->
В СССР лучшей ЭВМ второго поколения считается БЭСМ-6.
Несмотря на уменьшение размеров и стоимости ЭВМ, они оставались доступны малому кругу лиц.
Так как для их обслуживания все равно нужны были отдельные помещения с подготовленным персоналом.

<!-- Изобретение интегральной схемы -->
Компьютеры стали доступными только после изобретения интегральной схемы (1958-1959 года).
Проблемы ЭВМ первого и второго поколения была в надежности.
Они часто выходили из строя, не досчитав задачу.
Большая часть времени тратилась в поисках ошибки в аппаратуре.
Поэтому исследования были направлены на уменьшение количества элементов.
И это было достигнуто интегральными схемами.
ИС позволяет на одной подложке кремния объединить десятки и сотни, соединенных между собой транзисторов, резисторов и конденсаторов.

<!-- Предпосылки появления персонального компьютера -->
Толчком к появлению персонального компьютера стало появление на рынке коммерческих процессоров, реализованных в виде интегральной микросхемы.
Не только процессор, но и остальные блоки компьютера стали размещать на микросхемах -- генератор синхросигналов, контроллер монитора, управление последовательным интерфейсом и многое другое.
Замена цифровых узлов компьютера на микросхемы резко повысила надежность и понизила стоимость компьютера.
Компания Intel освоила в 1971 году выпуск первого микропроцессора i4004.
Но успех пришел на третьем микропроцессоре -- i8080, изготовленном в апреле 1974 года.
Он имел успешный набор инструкций, позволяющий писать универсальные программы.
16-битная шина данных позволяла адресовать до 64 Кб памяти, что было роскошью для того времени.
Память была общей как для программы, так и для команд.
Стек также размещался в общей памяти, позволяя составлять программы с рекурсивным вызовом функций.

<!-- Ориентация персональных компьютеров на бизнес -->
Цены на персональный компьютер были высокими, поэтому их могли позволить себе только компании.
Для домашнего использования они были недоступными.

<!-- Intel 4004-->
```{figure} ../_images/Intel-c4004.jpg
:height: 300
Микропроцессор Intel 4004
```

<!-- Микропроцессоры i4004, i8008, i8080 -->
В 1971 году компания Intel разработала первый микропроцессор.
Это был i4004 -- микросхема с 46 инструкциями и внутренней 4-битной шиной данных.

Следующим шагом стал 8-битный микропроцессор i8008.
Но успех пришел на 8-битном микропроцессоре i8080, выпущенном в апреле 1974 года.
Интегральная схема содержала в себе 4758 транзисторов.
16-разрядная шина данных адресовывала до 64 Кб памяти.
В этой памяти размещались и программа и данные.
Стек также размещался в этой памяти, что позволял в программах выполнять рекурсивные вызовы функций.
Микропроцессор содержал 80 инструкций, которые оказались удобными для написания универсальных программ.

```{figure} ../_images/Intel-c8080.jpg
:height: 300
Микропроцессор Intel 8080
```

<!-- Комплекты для сборки компьютера -->
На основе микропроцессора Intel 8080 разработали дешевый и получивший успех миникомпьютер Altair 8800.
Его распространяли в виде комплекта для сборки.
Благодаря этому компьютеру, обычные люди могли прикоснуться к компьютерам.
В городах появлялись компьютерные клубы.
Altair не имел ни клавиатуры, ни монитора.
Ввод данных осуществлялся через тумблеры, а вывод считывался по лампочкам на передней панели.

```{figure} ../_images/Altair-8800.jpg
Компьютер Altair 8800
```

<!-- Фирменные компьютеры -->
Первым доступным персональным компьютером стал Altair 8800, появившийся в 1975 году.
Он распространялся в готовом виде за 621 доллар, а также как комплект для сборки за 439 долларов.

Первые массовые компьютеры появились в 1977 году.
Это Apple II, Commodore PET.

1983 год. Персональный компьютер с графическим интерфейсом. Apple Lisa, Apple Macintosh.

<!-- IBM PC (IBM 5150) -->
<!-- История создания IBM 5150 -->
https://www.crn.ru/numbers/reg-numbers/detail.php?ID=11621
Рынок был готов к персональным компьютерам. Снижение цены из-за конкуренции. Заполнили весь мир.

<!-- Используемые стандарты -->
Интерфейсы PCI, 
BIOS (UEFI), PCI-шина, x86-совместимый процессор.
Форм-фактор ATX.
Совместимость аппаратного обеспечения.
Совместимость программного обеспечения.
Отраслевой стандарт для персональных компьютеров.

```{figure} ../_images/IBM-PC.png
:height: 300
Персональный компьютер IBM 5150 (IBM PC)
```

<!-- Новая бизнес-модель -->


Четвертое поколение компьютеров появилось после создания центрального процессора на одном кристалле — микропроцессор.
Микропроцессор объединил в себе множество ИС.
Количество компонент уменьшилось еще больше.
Intel выпустил первый микропроцессоров в 1971 году под названием Intel 4004.
Такой микропроцессор позволили создать компьютер, помещающийся на письменном столе.

При высокой стоимости ЭВМ его могли себе приобрести только государственные и финансовые структуры.
Научно-исследовательские институты для решения уравнений математической физики, конструкторские бюро для инженерных расчетов, государственные хозяйственные структуры для обработки данных переписи населения, финансовых и статистических расчетов.
Но по мере удешевления стоимости компьютера за счет массового выпуска комплектующих, взаимозаменяемости частей, она становилась доступным широкому кругу населения.
Появляется потребность в различном ПО.
Это стимулирует его разработку.

В 1960-х годах компьютеры стали доступнее за счет работы на них в режиме разделения времени.
К компьютерам могли получать доступ учащиеся и специалисты, не являющиеся подготовленными программистами, но нуждающиеся в решении на компьютере своих задач.

Распространение персональных компьютеров уменьшило спрос на мейнфреймы IBM/ Компания решила попробовать свои силы в производстве ПК.
Она разработала устройство на тогда новом микропроцессоре Intel 8088.
Его 16-разрядная адресация позволила работать с 1 Мб памяти, что превосходило 64 Кб у конкурентов.
Для уменьшения себестоимости, в компьютере были использованы комплектующие других производителей.
пО было поручено разработать фирме Microsoft.
Новый компьютер был продемонстрирован в 1981 году под шифром IBM 5150.
Она приобрела большую популярность и стала стандартом персонального компьютера (совместимые с IBM PC).

## Развитие программного обеспечения

Программа в машину заносилась через перфорированную ленту (в Z3, Mark I) или перекоммутацией проводов (на ранней версии Эниак).
Такая программа не позволяла организовать условные переходы и циклы.
Если была необходимость в цикле, то перфолента просто замыкалась.

Преимущество перфорированных карт между лентой была в возможности перестановки информации, редактировании только части информации.
Карты объединялись вместе и образовывали перфоленту.
По сравнению с картами, лента часто рвалась.
Далее перфорированные ленты были заменены магнитными, у которых уже был более высокая скорость ввода-вывода.
Запись была механической — пробиванием отверстий и имела скорость до 80-150 байт в секунду.
Считывание было оптическим и имело скорость до 1500 байтов в секунду.

Раздельное хранение программы и данных задачи, а также физическое разделение каналов их передачи называется гарвардской архитектурой и была впервые применена в Марк 1 Говардом Эйкеном.
Преимущество такой архитектуры — более высокая скорость выполнения программы за счет независимой загрузки данных и программы.

На основе анализа недостатков ранней версии Эниак, разработчики Эккерт и Мокли предложили хранить программу вместе с данными.
Джон фон Нейманом опубликовал отчет, в котором предложил другой принцип организации машины.
Это будут называть архитектурой фон Неймана.

Использование компьютерного терминала позволило получать удаленный доступ к вычислительной машине.
В терминале были соединены устройство ввода и вывода.
Для ввода данных использовалась клавиатура, а для вывода — дисплей.
На стороне машины нужна была вспомогательная программа, которая бы обрабатывала команды от пользователя.
Таким программами стали операционные системы.

Разработка программ в машинных кодах было неэффективным занятием.
Изначально программа представляла собой двоичные символы, набираемые перфорацией.
Для упрощения написания программ, целочисленные коды команд начали заменять символьными обозначениями.
Транслятор преобразовывал их в машинные коды.
Так появился язык ассемблера.
Далее начали появляться языки программирования высокого уровня, некоторые из которых дошли до наших дней.

## Использованные источники

* [История персональных компьютеров](https://ru.wikipedia.org/wiki/История_персональных_компьютеров)
* [История вычислительной техники](https://ru.wikipedia.org/wiki/История_вычислительной_техники)
* [Хронология развития вычислительной техники](https://ru.wikipedia.org/wiki/Хронология_развития_вычислительной_техники)
* [Решетчатое умножение](https://www.nkj.ru/archive/articles/19204/)
* [Пролог. Книги и алгоритмы](https://alexanderskulikov.github.io/files/algorithms_printable.pdf)
* https://www.youtube.com/watch?v=3h71HAJWnVU
* [How the Pascaline Works](https://www.youtube.com/watch?v=3h71HAJWnVU)
