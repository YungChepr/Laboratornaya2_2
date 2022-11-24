#define _CRT_SECURE_NO_WARNINGS
#include "AncetaPrepod.h"

AncetaPrepod::AncetaPrepod() //Конструктор без параметров
{
    strcpy(fio, "");
    strcpy(fakul, "");
    strcpy(predmet, "");
    auditor = 0;
    stage = 0;
    type = 0;
};

AncetaPrepod::AncetaPrepod(int t) //Конструктор с одним параметром
{
    strcpy(fio, "");
    strcpy(fakul, "");
    strcpy(predmet, "");
    auditor = 0;
    stage = 0;
    type = t;
};

AncetaPrepod::AncetaPrepod(char f[30], char fa[30], char pred[30], int audi, int sta, int t) //Конструктор со всеми параметрами
{
    strcpy(fio, f);
    strcpy(fakul, fa);
    strcpy(predmet, pred);
    auditor = audi;
    stage = sta;
    type = t;
};



void AncetaPrepod::setfio(char fio[30]) //Установка значений переменной fio
{
    strcpy(this->fio, fio);
};

void AncetaPrepod::getfio(char* fio) //Получение значений переменной fio 2
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(fio, this->fio);
};



void AncetaPrepod::setfakul(char fakul[30]) //Установка значений переменной fio
{
    strcpy(this->fakul, fakul);
};

void AncetaPrepod::getfakul(char* fakul) //Получение значений переменной fio 2
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(fakul, this->fakul);
};



void AncetaPrepod::setpredmet(char predmet[30]) //Установка значений переменной fio
{
    strcpy(this->predmet, predmet);
};

void AncetaPrepod::getpredmet(char* predmet) //Получение значений переменной fio 2
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(predmet, this->predmet);
};



void AncetaPrepod::setauditor(int auditor) //Установка значений переменной auditor
{
    this->auditor = auditor;
};

int AncetaPrepod::getauditor() //Получение значений переменной auditor
{
    return auditor;
};

void AncetaPrepod::setstage(int stage) //Установка значений переменной stage
{
    this->stage = stage;
};

int AncetaPrepod::getstage() //Получение значений переменной stage
{
    return stage;
};

void AncetaPrepod::settype(int type) //Установка значений переменной type
{
    this->type = type;
};

int AncetaPrepod::gettype() //Получение значений переменной type
{
    return type;
};


void AncetaPrepod::setpre(AncetaPrepod pre) //Установка значений переменной uch
{
    //strcpy(this->fio, fio);
    if (stage >= 30)
    {
        type = 1;
        strcpy(this->pre.dol.zvanie, "Профессор ");
        printf("Введите размер зарплаты\n");
        scanf("%d", &this->pre.dol.zarplata);

        do {
            printf(" Есть ли у профессора докторская работа 1 - да, 2 - нет:)\n");
            while (scanf("%d", &this->pre.dol.doctorskaya) != 1) //Проверка ввода если пользователь введет не цифру
            {
                while (getchar() != '\n');
                printf("Ошибка. Введите число от как показано в примере : ");
            }
        } while ((this->pre.dol.doctorskaya < 1) || (this->pre.dol.doctorskaya > 2));

    }
    else
    {
        if (stage >= 20)
        {
            type = 2;
            strcpy(this->pre.sre.zvanie, "Доцент ");
            printf("Введите размер зарплаты\n");
            scanf("%d", &this->pre.sre.zarplata);

            do {
                printf(" Есть ли у доцента монография 1 - да, 2 - нет:)\n");
                while (scanf("%d", &this->pre.sre.monograthiya) != 1) //Проверка ввода если пользователь введет не цифру
                {
                    while (getchar() != '\n');
                    printf("Ошибка. Введите число от как показано в примере : ");
                }
            } while ((this->pre.sre.monograthiya < 1) || (this->pre.sre.monograthiya > 2));

        }
        else
        {
            if (stage >= 10)
            {
                type = 3;
                strcpy(this->pre.kor.zvanie, "Старший Преподователь ");
                printf("Введите размер зарплаты\n");
                scanf("%d", &this->pre.kor.zarplata);

                do {
                    printf(" Введите количество групп:(Не больше 10)\n");
                    while (scanf("%d", &this->pre.kor.kolgrup) != 1) //Проверка ввода если пользователь введет не цифру
                    {
                        while (getchar() != '\n');
                        printf("Ошибка. Введите число от как показано в примере : ");
                    }
                } while ((this->pre.kor.kolgrup < 0) || (this->pre.kor.kolgrup > 11));

            }
            else
            {
                type = 4;
                strcpy(this->pre.ochkor.zvanie, "Преподователь ");
                printf("Введите размер зарплаты\n");
                scanf("%d", &this->pre.ochkor.zarplata);

                do {
                    printf(" Введите количество часов:(Не больше 40)\n");
                    while (scanf("%d", &this->pre.ochkor.kolchasov) != 1) //Проверка ввода если пользователь введет не цифру
                    {
                        while (getchar() != '\n');
                        printf("Ошибка. Введите число от как показано в примере : ");
                    }
                } while ((this->pre.ochkor.kolchasov < 0) || (this->pre.ochkor.kolchasov > 40));

              
            };
        };
    }
};

int AncetaPrepod::getpre1(char* zvanie, int* doctorskaya) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(zvanie, this->pre.dol.zvanie);
    *(doctorskaya) = this->pre.dol.doctorskaya;
    return pre.dol.zarplata;
};

int AncetaPrepod::getpre2(char* zvanie, int* monograthiya) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(zvanie, this->pre.sre.zvanie);
    *(monograthiya) = this->pre.sre.monograthiya;
    return pre.sre.zarplata;
};

int AncetaPrepod::getpre3(char* zvanie, int* kolgrup) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(zvanie, this->pre.kor.zvanie);
    *(kolgrup) = this->pre.kor.kolgrup;
    return pre.kor.zarplata;
};

int AncetaPrepod::getpre4(char* zvanie, int* kolchasov) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(zvanie, this->pre.ochkor.zvanie);
    *(kolchasov) = this->pre.ochkor.kolchasov;
    return pre.ochkor.zarplata;
};


