#define _CRT_SECURE_NO_WARNINGS
#include "AncetaStud.h"

AncetaStud::AncetaStud() //Конструктор без параметров
{
    strcpy(fio, "");
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = 0;
    //this->nomerGrup=0;
};

AncetaStud::AncetaStud(int t) //Конструктор с одним параметром
{
    strcpy(fio, "");
    nomerGrup = 0;
    nomerStud = 0;
    reiting = 0;
    type = t;
  
};

AncetaStud::AncetaStud(char f[N], int nomerG, int nomerS, int r, int t) //Конструктор со всеми параметрами
{
    strcpy(fio, f);
    nomerGrup = nomerG;
    nomerStud = nomerS;
    reiting = r;
    type = t;

};

void AncetaStud::setfio(char fio[N]) //Установка значений переменной fio
{
    strcpy(this->fio, fio);
};

char* AncetaStud::getfio() //Получение значений переменной fio 1
{
    return fio;
};

void AncetaStud::getfio(char fio[N]) //Получение значений переменной fio 2
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(fio, this->fio);
    //непонятно что передали
    //char fio[30] только константу подставить
};

void AncetaStud::setnomerGrup(int nomerGrup) //Установка значений переменной nomerGrup
{
    this->nomerGrup = nomerGrup;
};

int AncetaStud::getnomerGrup() //Получение значений переменной nomerGrup
{
    return nomerGrup;
};

void AncetaStud::setnomerStud(int nomerStud) //Установка значений переменной nomerStud
{
    this->nomerStud = nomerStud;
};

int AncetaStud::getnomerStud() //Получение значений переменной nomerGrup
{
    return nomerStud;
};

void AncetaStud::setreiting(int reiting) //Установка значений переменной reiting
{
    this->reiting = reiting;
};

int AncetaStud::getreiting() //Получение значений переменной nomerGrup
{
    return reiting;
};

void AncetaStud::settype(int type) //Установка значений переменной type
{
    this->type = type;
};

int AncetaStud::gettype() //Получение значений переменной nomerGrup
{
    return type;
};

void AncetaStud::setuch(AncetaStud uch) //Установка значений переменной uch
{
    //strcpy(this->fio, fio);
    if (reiting >= 75)
    {
        type = 1;
        strcpy(this->uch.otl.dopstependia, "Студент получает степендию ");
        printf("Введите размер Дополнительной степендии\n");
        scanf("%d", &this->uch.otl.razmer);
    }
    else
    {
        if (reiting >= 50)
        {
            type = 2;
            strcpy(this->uch.hor.stependia, "Студент  получает степендию ");
            printf("Введите размер обычной степендии\n");
            scanf("%d", &this->uch.hor.razmer);
        }
        else
        {
            if (reiting >= 25)
            {
                type = 3;
                strcpy(this->uch.hor.stependia, "Студент НЕ получает степендию ");
            }
            else
            {
                type = 4;
                while (getchar() != '\n');
                printf("Введите домашний адрес студента\n");
                gets_s(this->uch.dvo.adres);
                printf("Нажмите Enter\n");
                while (getchar() != '\n');
                printf("Введите телефон студента\n");
                gets_s(this->uch.dvo.telephone);
                printf("Нажмите Enter\n");
            };
        };
    }
};

int AncetaStud::getuch1(char* dopstependia) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(dopstependia, this->uch.otl.dopstependia);
    return uch.otl.razmer;
};

int AncetaStud::getuch2(char* stependia) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(stependia, this->uch.hor.stependia);
    return uch.hor.razmer;
};

void AncetaStud::getuch3(char* stependia) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(stependia, this->uch.tro.stependia);

};

void AncetaStud::getuch4(char* adres, char* telephone) //Получение значений переменной uch
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(adres, this->uch.dvo.adres);
    strcpy(telephone, this->uch.dvo.telephone);
};

void AncetaStud::inputstud() //Блок - ввод данных о студентах
{   //gets_s(a//Тут this уже определенен//->fio);
    printf(" ФИО: ");
    char fio[N];
    gets_s(fio);
    a->setfio(fio);

    int nomerGrup;
    do {
        printf(" Номер группы:(Введите в формате 5 цифр '22091')\n");
        while (scanf("%d", &nomerGrup) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число от как показано в примере : ");
        }
    } while (nomerGrup < 10000 || nomerGrup >99999);
    a->setnomerGrup(nomerGrup);

    int nomerStud;
    do {
        printf(" Номер студенческого(Введите в формате 7 цифр '2111851')\n");
        while (scanf("%d", &nomerStud) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число как показано в примере: ");
        }
    } while (nomerStud < 1000000 || nomerStud >9999999);
    a->setnomerStud(nomerStud);

    int reiting;
    do {
        printf(" Рейтинг студента:(от 0 до 100) ");
        while (scanf("%d", &reiting) != 1) //Проверка ввода если пользователь  введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число как показано в примере: ");
        }
    } while ((reiting < 0) || (reiting > 100));
    a->setreiting(reiting);

    AncetaStud uch;
    a->setuch(uch);
    printf("\n");
    while (getchar() != '\n');
}

void AncetaStud::outputstud(AncetaStud* a) //Блок - вывод данных о студентах
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
