#define _CRT_SECURE_NO_WARNINGS
#include "AncetaPrepod.h"

AncetaPrepod::AncetaPrepod() //����������� ��� ����������
{
    strcpy(fio, "");
    strcpy(fakul, "");
    strcpy(predmet, "");
    auditor = 0;
    stage = 0;
    type = 0;
};

AncetaPrepod::AncetaPrepod(int t) //����������� � ����� ����������
{
    strcpy(fio, "");
    strcpy(fakul, "");
    strcpy(predmet, "");
    auditor = 0;
    stage = 0;
    type = t;
};

AncetaPrepod::AncetaPrepod(char f[30], char fa[30], char pred[30], int audi, int sta, int t) //����������� �� ����� �����������
{
    strcpy(fio, f);
    strcpy(fakul, fa);
    strcpy(predmet, pred);
    auditor = audi;
    stage = sta;
    type = t;
};
