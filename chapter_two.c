/*
chapter_two.c - ���� � ����������� �������� ������� �� 2 ����� ����� "���� ���������������� �. ������ � ����������"
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
    // ��������� ��� �������� ����� � �������
    setlocale(LC_ALL, "Russian");

    // ������ �������
    printText();

    // ������ �������
    printNameAndAdress();

    // ������ �������
    int age = 26;
    int daysOfYears = convertAgeforDay(age);
    printf("��� %d ���, � � ���� ���: %d\n", age, daysOfYears);

    // ��������� �������
    jolly();
    jolly();
    jolly();
    deny();

    // ����� �������
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");

    // ������ �������
    workWtithToes(10);

    // ������� �������
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    // ������� �������
    printf("��������:\n");
    one_three();
    printf("�������!\n");

    // ������� �� �������� ����������� ���� (������� ����� ������ �������)
    getchar();

    return 0;
}

/*
������� �� ������ ������������� ������� � �������
������������ �� ���� ����� ������� � ����� � ������ �������
*/
void printText(void)
{
    printf("����� ������\n");
    printf("������\n");
    printf("�����\n");
    printf("����� ������\n");
}

/*
������� � ������� ���������� � ���������� ������������
*/
void printNameAndAdress(void)
{
    printf("����� ������, �. ����, ��. �����������, �. 46, ��. 108\n");
}

/*
����������� ���������� �������� (���) � ��� (��� ����� ����������� ����)
*/
int convertAgeforDay(int age)
{
    return age * 365;
}

/*
����� ������������� ����� � �������
*/
void jolly(void)
{
    printf("�� ������� �������!\n");
}

/*
����� ������������� ����� � �������
*/
void deny(void)
{
    printf("����� �� ����� ��� ��������!\n");
}

/*
����� ������������� ����� � �������
*/
void br(void)
{
    printf("��������, ������");
}

/*
����� ������������� ����� � �������
*/
void ic(void)
{
    printf("�����, �����");
}

/*
�������, ������� ��������� ����� � ������� � ������� ���������
� ��������� ��������������� � ������
*/
void workWtithToes(int value)
{
    int toes = value;
    int toesSquad = toes * toes;
    printf("�������� ���������� toes=%d; ��������� �������� toes=%d; ������� toes=%d\n", toes, toes*2, toesSquad);
}

/*
����� ������������� ����� � �������
*/
void smile(void)
{
    printf("��������!");
}

/*
����� ������������� ����� � �������
*/
void one_three(void)
{
    printf("����\n");
    two();
    printf("���\n");
}

/*
����� ������������� ����� � �������
*/
void two(void)
{
    printf("���\n");
}