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

void AncetaStud::setnomerGrup(int nomerGrup) //��������� �������� ���������� nomerGrup
{
    this->nomerGrup = nomerGrup;
};

int AncetaStud::getnomerGrup() //��������� �������� ���������� nomerGrup
{
    return nomerGrup;
};

void AncetaStud::setnomerStud(int nomerStud) //��������� �������� ���������� nomerStud
{
    this->nomerStud = nomerStud;
};

int AncetaStud::getnomerStud() //��������� �������� ���������� nomerGrup
{
    return nomerStud;
};

void AncetaStud::setreiting(int reiting) //��������� �������� ���������� reiting
{
    this->reiting = reiting;
};

int AncetaStud::getreiting() //��������� �������� ���������� nomerGrup
{
    return reiting;
};

void AncetaStud::settype(int type) //��������� �������� ���������� type
{
    this->type = type;
};

int AncetaStud::gettype() //��������� �������� ���������� nomerGrup
{
    return type;
};

void AncetaStud::setuch(AncetaStud uch) //��������� �������� ���������� uch
{
    //strcpy(this->fio, fio);
    if (reiting >= 75)
    {
        type = 1;
        strcpy(this->uch.otl.dopstependia, "������� �������� ��������� ");
        printf("������� ������ �������������� ���������\n");
        scanf("%d", &this->uch.otl.razmer);
    }
    else
    {
        if (reiting >= 50)
        {
            type = 2;
            strcpy(this->uch.hor.stependia, "�������  �������� ��������� ");
            printf("������� ������ ������� ���������\n");
            scanf("%d", &this->uch.hor.razmer);
        }
        else
        {
            if (reiting >= 25)
            {
                type = 3;
                strcpy(this->uch.hor.stependia, "������� �� �������� ��������� ");
            }
            else
            {
                type = 4;
                while (getchar() != '\n');
                printf("������� �������� ����� ��������\n");
                gets_s(this->uch.dvo.adres);
                printf("������� Enter\n");
                while (getchar() != '\n');
                printf("������� ������� ��������\n");
                gets_s(this->uch.dvo.telephone);
                printf("������� Enter\n");
            };
        };
    }
};

int AncetaStud::getuch1(char* dopstependia) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(dopstependia, this->uch.otl.dopstependia);
    return uch.otl.razmer;
};

int AncetaStud::getuch2(char* stependia) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(stependia, this->uch.hor.stependia);
    return uch.hor.razmer;
};

void AncetaStud::getuch3(char* stependia) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(stependia, this->uch.tro.stependia);

};

void AncetaStud::getuch4(char* adres, char* telephone) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(adres, this->uch.dvo.adres);
    strcpy(telephone, this->uch.dvo.telephone);
};