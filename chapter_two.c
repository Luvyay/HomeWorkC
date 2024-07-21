/*
chapter_two.c - файл с выполненной домашней работой по 2 главе книги "Язык программирования С. Лекции и упражнения"
*/

#include <stdio.h>
#include <locale.h>

void printText(void);
void printNameAndAdress(void);
int convertAgeforDay(int age);
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void workWtithToes(int value);
void smile(void);
void one_three(void);
void two(void);

int main(void)
{
    // кодировка для русского языка в консоли
    setlocale(LC_ALL, "Russian");

    // первое задание
    printText();

    // второе задание
    printNameAndAdress();

    // третье задание
    int age = 26;
    int daysOfYears = convertAgeforDay(age);
    printf("Мне %d лет, а в днях это: %d\n", age, daysOfYears);

    // четвертое задание
    jolly();
    jolly();
    jolly();
    deny();

    // пятое задание
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    // шестое задание
    workWtithToes(10);

    // седьмое задание
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    // восьмое задание
    printf("начинаем:\n");
    one_three();
    printf("порядок!\n");

    // функция по задержке консольного окна (ожидает ввода любого символа)
    getchar();

    return 0;
}

/*
Функция по выводу фиксированных данныйх в консоль
Представляют из себя вывод фамилии и имени в разном порядке
*/
void printText(void)
{
    printf("Попов Андрей\n");
    printf("Андрей\n");
    printf("Попов\n");
    printf("Попов Андрей\n");
}

/*
Функция с выводом информации о конкретном пользователе
*/
void printNameAndAdress(void)
{
    printf("Попов Андрей, г. Орел, ул. Металлургов, д. 46, кв. 108\n");
}

/*
Конвертация указанного возраста (лет) в дни (без учета весокосного года)
*/
int convertAgeforDay(int age)
{
    return age * 365;
}

/*
Вывод фиксированной фразы в консоль
*/
void jolly(void)
{
    printf("Он веселый молодец!\n");
}

/*
Вывод фиксированной фразы в консоль
*/
void deny(void)
{
    printf("Никто не может это отрицать!\n");
}

/*
Вывод фиксированной фразы в консоль
*/
void br(void)
{
    printf("Бразилия, Россия");
}

/*
Вывод фиксированной фразы в консоль
*/
void ic(void)
{
    printf("Индия, Китай");
}

/*
Фукнция, которая принимает число и выводит в консоль сообщение
о различных преобразованиях с числом
*/
void workWtithToes(int value)
{
    int toes = value;
    int toesSquad = toes * toes;
    printf("Значение переменной toes=%d; Удвоенное значение toes=%d; Квадрат toes=%d\n", toes, toes*2, toesSquad);
}

/*
Вывод фиксированной фразы в консоль
*/
void smile(void)
{
    printf("Улыбайся!");
}

/*
Вывод фиксированной фразы в консоль
*/
void one_three(void)
{
    printf("один\n");
    two();
    printf("три\n");
}

/*
Вывод фиксированной фразы в консоль
*/
void two(void)
{
    printf("два\n");
}