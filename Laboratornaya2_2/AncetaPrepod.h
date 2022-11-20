#pragma once
#include <stdio.h>
#include <string.h>
class AncetaPrepod
{
private:
    char fio[20];    //Переменная хранит имя преподователя
    char fakul[20];  //Переменная хранит название факультета
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
    AncetaPrepod InitializationPrepod(AncetaPrepod b);
    AncetaPrepod InputPrepod(AncetaPrepod b);
    AncetaPrepod OutputPrepod(AncetaPrepod b);
    int SearchByNamePrepod(AncetaPrepod b, AncetaPrepod d);
};

