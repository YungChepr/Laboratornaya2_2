#pragma once
#include <stdio.h>
#include <string.h>
class AncetaPrepod
{
private:
    char fio[30];    //Переменная хранит имя преподователя
    char fakul[30];  //Переменная хранит название факультета
    char predmet[30];//Переменная хранит предмет преподователя
    int auditor;     //Переменная хранит номер аудитории
    int stage;       //Переменная хранит стаж преподователя
    int type;        //Переменная хранит метку активного компонента
    union
    {
        struct    //Структура хранит данные для профессора
        {
            char zvanie[30];
            int zarplata;
            int doctorskaya;

        } dol;
        struct    //Структура хранит данные для доцента
        {
            char zvanie[30];
            int zarplata;
            int monograthiya;

        } sre;
        struct    //Структура хранит данные для старшего преподователя
        {
            char zvanie[30];
            int zarplata;
            int kolgrup;

        } kor;
        struct    //Структура хранит данные для преподователя
        {
            char zvanie[30];
            int zarplata;
            int kolchasov;

        } ochkor;
    }pre;
public:
    AncetaPrepod(); //Конструктор без параметров
    AncetaPrepod(int type); //Конструктор с одним параметром
    AncetaPrepod(char fio[30], char fakul[30], char predmet[30], int auditor, int stage,  int type); //Конструктор со всеми параметрами

    void setfio(char fio[30]); //Установка значений переменной fio
    void setfakul(char fakul[30]); //Установка значений переменной fakul
    void setpredmet(char predmet[30]); //Установка значений переменной predmet

    void setauditor(int auditor); //Установка значений переменной auditor
    void setstage(int stage); //Установка значений переменной stage
    void settype(int type); //Установка значений переменной type

    void setpre(AncetaPrepod pre); //Установка значений переменной pre */

    void getfio(char* fio); //Получение значений переменной fio
    void getfakul(char* fakul); //Получение значений переменной fakul
    void getpredmet(char* predmet); //Получение значений переменной predmet

    int getauditor(); //Получение значений переменной auditor
    int getstage(); //Получение значений переменной stage
    int gettype(); //Получение значений переменной type

    int getpre1(char* zvanie, int* doctorskaya); //Получение значений переменной pre */
    int getpre2(char* zvanie, int* monograthiya); //Получение значений переменной pre */
    int getpre3(char* zvanie, int* kolgrup); //Получение значений переменной pre */
    int getpre4(char* zvanie, int* kolchasov); //Получение значений переменной pre */



    
};

