Занятие 4

04.10.2024

**ОПЕРАТОРЫ**

Операция с int - это 1 ассмеблерная операция (=очень быстро), поэтому что постфиксный инкремент, что префиксный - не столь важно. Однако, если речь идет о более сложных ситуациях, принято использовать префиксный инкремент для повышения эффективности кода (не создается extra copy).

Даже в некоторых кодстайлах описано, что стоит использовать префиксный инкремент

**СКОУПЫ - области видимости**

Если создать переменную в скоупе - за его пределами она будет не видна. Поэтому, чтобы обратиться к такой пременной, нам необходимо явно прописать из какого namespace мы хотим ее взять:


Глобальные переменные(переменные вне каких-либо скоупов) - зло, так как мы можем допустим создать глобальную и обычную переменную с одинаковыми названиями, и логика кода сломается. Вообще использование глобальных переменных зачастую говорит о неграммотном проектировaнии кода. 

**ССЫЛКИ И ФУНКЦИИ**

**Overloading** - перегрузка функции (разные определения одной функции с разными типами данных на входе)
При вызове функции будет выбрана та перегрузка, которая наиболее подходит по типу данных на вход
Соответсвенно, если передать аргумент с типом, которого нет ни в одной перегрузке, произойдет либо неявный каст, либо warning (что то, что другое - не очень)

bool неявно кастится к int

**true --> 1**
**false --> 0**

Перегрузки существуют и для функций с двумя переменными. Помимо этого, один из аргументов функции может быть дефолтным (заданным при определении функции).

**ССЫЛКИ**
Если мы определим переменную в одном скоупе, передадим ее в другой скоуп и там проведем с ней какие-то операции - оригинальная переменная в первом скоупе никак не изменится.
Так происходит, потому что в С++ по дефолту переменная передается в виде копии.

Если мы хотим передать переменную по ссылке, то должны поставить постфикс & для типа переменной. Если передаем переменную по ссылке --> оригинал меняется, потому что мы обращаемся к оригиналу, а не к копии

**ССЫЛКА - ЭТО НОВОЕ ИМЯ ДЛЯ УЖЕ СУЩЕСТВУЮЩЕГО ОБЪЕКТА**
