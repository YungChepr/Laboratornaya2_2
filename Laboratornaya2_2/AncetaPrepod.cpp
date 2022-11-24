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



void AncetaPrepod::setfio(char fio[30]) //��������� �������� ���������� fio
{
    strcpy(this->fio, fio);
};

void AncetaPrepod::getfio(char* fio) //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(fio, this->fio);
};



void AncetaPrepod::setfakul(char fakul[30]) //��������� �������� ���������� fio
{
    strcpy(this->fakul, fakul);
};

void AncetaPrepod::getfakul(char* fakul) //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(fakul, this->fakul);
};



void AncetaPrepod::setpredmet(char predmet[30]) //��������� �������� ���������� fio
{
    strcpy(this->predmet, predmet);
};

void AncetaPrepod::getpredmet(char* predmet) //��������� �������� ���������� fio 2
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(predmet, this->predmet);
};



void AncetaPrepod::setauditor(int auditor) //��������� �������� ���������� auditor
{
    this->auditor = auditor;
};

int AncetaPrepod::getauditor() //��������� �������� ���������� auditor
{
    return auditor;
};

void AncetaPrepod::setstage(int stage) //��������� �������� ���������� stage
{
    this->stage = stage;
};

int AncetaPrepod::getstage() //��������� �������� ���������� stage
{
    return stage;
};

void AncetaPrepod::settype(int type) //��������� �������� ���������� type
{
    this->type = type;
};

int AncetaPrepod::gettype() //��������� �������� ���������� type
{
    return type;
};


void AncetaPrepod::setpre(AncetaPrepod pre) //��������� �������� ���������� uch
{
    //strcpy(this->fio, fio);
    if (stage >= 30)
    {
        type = 1;
        strcpy(this->pre.dol.zvanie, "��������� ");
        printf("������� ������ ��������\n");
        scanf("%d", &this->pre.dol.zarplata);

        do {
            printf(" ���� �� � ���������� ���������� ������ 1 - ��, 2 - ���:)\n");
            while (scanf("%d", &this->pre.dol.doctorskaya) != 1) //�������� ����� ���� ������������ ������ �� �����
            {
                while (getchar() != '\n');
                printf("������. ������� ����� �� ��� �������� � ������� : ");
            }
        } while ((this->pre.dol.doctorskaya < 1) || (this->pre.dol.doctorskaya > 2));

    }
    else
    {
        if (stage >= 20)
        {
            type = 2;
            strcpy(this->pre.sre.zvanie, "������ ");
            printf("������� ������ ��������\n");
            scanf("%d", &this->pre.sre.zarplata);

            do {
                printf(" ���� �� � ������� ���������� 1 - ��, 2 - ���:)\n");
                while (scanf("%d", &this->pre.sre.monograthiya) != 1) //�������� ����� ���� ������������ ������ �� �����
                {
                    while (getchar() != '\n');
                    printf("������. ������� ����� �� ��� �������� � ������� : ");
                }
            } while ((this->pre.sre.monograthiya < 1) || (this->pre.sre.monograthiya > 2));

        }
        else
        {
            if (stage >= 10)
            {
                type = 3;
                strcpy(this->pre.kor.zvanie, "������� ������������� ");
                printf("������� ������ ��������\n");
                scanf("%d", &this->pre.kor.zarplata);

                do {
                    printf(" ������� ���������� �����:(�� ������ 10)\n");
                    while (scanf("%d", &this->pre.kor.kolgrup) != 1) //�������� ����� ���� ������������ ������ �� �����
                    {
                        while (getchar() != '\n');
                        printf("������. ������� ����� �� ��� �������� � ������� : ");
                    }
                } while ((this->pre.kor.kolgrup < 0) || (this->pre.kor.kolgrup > 11));

            }
            else
            {
                type = 4;
                strcpy(this->pre.ochkor.zvanie, "������������� ");
                printf("������� ������ ��������\n");
                scanf("%d", &this->pre.ochkor.zarplata);

                do {
                    printf(" ������� ���������� �����:(�� ������ 40)\n");
                    while (scanf("%d", &this->pre.ochkor.kolchasov) != 1) //�������� ����� ���� ������������ ������ �� �����
                    {
                        while (getchar() != '\n');
                        printf("������. ������� ����� �� ��� �������� � ������� : ");
                    }
                } while ((this->pre.ochkor.kolchasov < 0) || (this->pre.ochkor.kolchasov > 40));

              
            };
        };
    }
};

int AncetaPrepod::getpre1(char* zvanie, int* doctorskaya) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(zvanie, this->pre.dol.zvanie);
    *(doctorskaya) = this->pre.dol.doctorskaya;
    return pre.dol.zarplata;
};

int AncetaPrepod::getpre2(char* zvanie, int* monograthiya) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(zvanie, this->pre.sre.zvanie);
    *(monograthiya) = this->pre.sre.monograthiya;
    return pre.sre.zarplata;
};

int AncetaPrepod::getpre3(char* zvanie, int* kolgrup) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(zvanie, this->pre.kor.zvanie);
    *(kolgrup) = this->pre.kor.kolgrup;
    return pre.kor.zarplata;
};

int AncetaPrepod::getpre4(char* zvanie, int* kolchasov) //��������� �������� ���������� uch
//������������ �������� �������� ��������� ������� ������ ��� ���� ���������
{
    strcpy(zvanie, this->pre.ochkor.zvanie);
    *(kolchasov) = this->pre.ochkor.kolchasov;
    return pre.ochkor.zarplata;
};


