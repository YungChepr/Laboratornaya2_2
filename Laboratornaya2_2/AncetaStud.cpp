#define _CRT_SECURE_NO_WARNINGS
#include "AncetaStud.h"

AncetaStud::AncetaStud() //����������� ��� ����������
{
    strcpy(fio, "");
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = 0;
    //this->nomerGrup=0;
};

AncetaStud::AncetaStud(int t) //����������� � ����� ����������
{
    strcpy(fio, "");
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = t;
  
};

AncetaStud::AncetaStud(char f[30], int nomerG, int nomerS, int r, int t) //����������� �� ����� �����������
{
    strcpy(fio, f);
    nomerGrup = nomerG;
    nomerStud = nomerS;
    reiting = r;
    type = t;

};

void AncetaStud::setfio(char fio[30]) //��������� �������� ���������� fio
{
    strcpy(this->fio, fio);
};



char* AncetaStud::getfio() //��������� �������� ���������� fio 1
{
    return fio;
};

void AncetaStud::getfio(char* fio) //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(fio, this->fio);
};

int AncetaStud::getnomerGrup() //��������� �������� ���������� nomerGrup
{
    return nomerGrup;
};