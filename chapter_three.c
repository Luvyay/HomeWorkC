/*
chapter_three.c - ���� � ����������� �������� ������� �� 3 ����� ����� "���� ���������������� �. ������ � ����������"
*/

#include <stdio.h>
#include <locale.h>

int main(void)
{
    // ��������� ��� �������� ����� � �������
    setlocale(LC_ALL, "Russian");

    float weight;
    float value;

    printf("������ ������ ���� ��� � ���������� �����������?\n");
    printf("������� ����������.\n");
    printf("����������, ������� ���� ���, ���������� � ������: ");

    scanf("%f", &weight);

    value = 1700.0 * weight * 14.5833;
    printf("��� ��� � ���������� ����������� ���������� $%.2f.\n", value);
    printf("�� ����� ������ ����� ��������� �����! ���� ���� ������� ������,\n");
    printf("����� ������ ��� ����������� ����� ���������.\n");

    // ������� �� �������� ����������� ���� (������� ����� ������ �������)
    getchar();
    getchar();

    return 0;
}