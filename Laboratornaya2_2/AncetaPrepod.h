#pragma once
#include <stdio.h>
#include <string.h>
class AncetaPrepod
{
private:
    char fio[30];    //���������� ������ ��� �������������
    char fakul[30];  //���������� ������ �������� ����������
    char predmet[30];//���������� ������ ������� �������������
    int auditor;     //���������� ������ ����� ���������
    int stage;       //���������� ������ ���� �������������
    int type;        //���������� ������ ����� ��������� ����������
    union
    {
        struct    //��������� ������ ������ ��� ����������
        {
            char zvanie[30];
            int zarplata;
            int doctorskaya;

        } dol;
        struct    //��������� ������ ������ ��� �������
        {
            char zvanie[30];
            int zarplata;
            int monograthiya;

        } sre;
        struct    //��������� ������ ������ ��� �������� �������������
        {
            char zvanie[30];
            int zarplata;
            int kolgrup;

        } kor;
        struct    //��������� ������ ������ ��� �������������
        {
            char zvanie[30];
            int zarplata;
            int kolchasov;

        } ochkor;
    }pre;
public:
    AncetaPrepod(); //����������� ��� ����������
    AncetaPrepod(int type); //����������� � ����� ����������
    AncetaPrepod(char fio[30], char fakul[30], char predmet[30], int auditor, int stage,  int type); //����������� �� ����� �����������



    
};

