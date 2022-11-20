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

AncetaStud::AncetaStud(char f[30], int nomerG, int nomerS, int r, int t) //Конструктор со всеми параметрами
{
    strcpy(fio, f);
    nomerGrup = nomerG;
    nomerStud = nomerS;
    reiting = r;
    type = t;

};

void AncetaStud::setfio(char fio[30]) //Установка значений переменной fio
{
    strcpy(this->fio, fio);
};



char* AncetaStud::getfio() //Получение значений переменной fio 1
{
    return fio;
};

void AncetaStud::getfio(char* fio) //Получение значений переменной fio 2
//Обязательным условием является выделение области памяти под этот указатель
{
    strcpy(fio, this->fio);
};

int AncetaStud::getnomerGrup() //Получение значений переменной nomerGrup
{
    return nomerGrup;
};