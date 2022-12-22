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

AncetaStud::AncetaStud(char f[N], int nomerG, int nomerS, int r, int t) //����������� �� ����� �����������
{
    strcpy(fio, f);
    nomerGrup = nomerG;
    nomerStud = nomerS;
    reiting = r;
    type = t;

};

void AncetaStud::setfio(char fio[N]) //��������� �������� ���������� fio
{
    strcpy(this->fio, fio);
};

char* AncetaStud::getfio() //��������� �������� ���������� fio 1
{
    return fio;
};

void AncetaStud::getfio(char fio[N]) //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(fio, this->fio);
    //��������� ��� ��������
    //char fio[30] ������ ��������� ����������
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

void AncetaStud::inputstud() //���� - ���� ������ � ���������
{   //gets_s(a//��� this ��� �����������//->fio);
    printf(" ���: ");
    char fio[N];
    gets_s(fio);
    a->setfio(fio);

    int nomerGrup;
    do {
        printf(" ����� ������:(������� � ������� 5 ���� '22091')\n");
        while (scanf("%d", &nomerGrup) != 1) //�������� ����� ���� ������������ ������ �� �����
        {
            while (getchar() != '\n');
            printf("������. ������� ����� �� ��� �������� � ������� : ");
        }
    } while (nomerGrup < 10000 || nomerGrup >99999);
    a->setnomerGrup(nomerGrup);

    int nomerStud;
    do {
        printf(" ����� �������������(������� � ������� 7 ���� '2111851')\n");
        while (scanf("%d", &nomerStud) != 1) //�������� ����� ���� ������������ ������ �� �����
        {
            while (getchar() != '\n');
            printf("������. ������� ����� ��� �������� � �������: ");
        }
    } while (nomerStud < 1000000 || nomerStud >9999999);
    a->setnomerStud(nomerStud);

    int reiting;
    do {
        printf(" ������� ��������:(�� 0 �� 100) ");
        while (scanf("%d", &reiting) != 1) //�������� ����� ���� ������������  ������ �� �����
        {
            while (getchar() != '\n');
            printf("������. ������� ����� ��� �������� � �������: ");
        }
    } while ((reiting < 0) || (reiting > 100));
    a->setreiting(reiting);

    AncetaStud uch;
    a->setuch(uch);
    printf("\n");
    while (getchar() != '\n');
}

void AncetaStud::outputstud(AncetaStud* a) //���� - ����� ������ � ���������
{
    char fio[N];
    a->getfio(fio);
    printf(" %s ", fio);

    int nomerGrup;
    nomerGrup = a->getnomerGrup();
    printf(" %d ", nomerGrup);

    int nomerStud;
    nomerStud = a->getnomerStud();
    printf(" %d ", nomerStud);

    int reiting;
    reiting = a->getreiting();
    printf(" %d ", reiting);

    int type;
    type = a->gettype();
    if (type == 1)
    {
        char dopstependia[30];
        int razmer1;

        razmer1 = a->getuch1(dopstependia);
        printf(" %s ", dopstependia);
        printf(" %d ", razmer1);
    }
    if (type == 2)
    {
        char stependia[30];
        int razmer2;

        razmer2 = a->getuch2(stependia);
        printf(" %s ", stependia);
        printf(" %d ", razmer2);
    }
    if (type == 3)
    {
        char stependia[30];

        a->getuch3(stependia);
        printf(" %s ", stependia);

    }
    if (type == 4)
    {
        char adres[30];
        char telephone[30];

        a->getuch4(adres, telephone);
        printf(" %s ", adres);
        printf(" %s ", telephone);

    }
    printf("\n");
}
