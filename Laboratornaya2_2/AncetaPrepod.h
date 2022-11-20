#pragma once
#include <stdio.h>
#include <string.h>
class AncetaPrepod
{
private:
    char fio[20];    //���������� ������ ��� �������������
    char fakul[20];  //���������� ������ �������� ����������
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
    AncetaPrepod InitializationPrepod(AncetaPrepod b);
    AncetaPrepod InputPrepod(AncetaPrepod b);
    AncetaPrepod OutputPrepod(AncetaPrepod b);
    int SearchByNamePrepod(AncetaPrepod b, AncetaPrepod d);
};

