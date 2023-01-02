#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <clocale>
#include <string.h>
#include <locale.h>
//Константа хранит количество элементов массива преподователей
const int N = 30;
class otlichnik    //Структура хранит данные для студента отличника
{
public:
    char dopstependia[N];
    int razmer;
};
class horoshist    //Структура хранит данные для студента хорошиста 
{
public:
    char stependia[N];
    int razmer;
};
class troechnik    //Структура хранит данные для студента троечника 
{
public:
    char stependia[N];
};
class dvoechnik    //Структура хранит данные для студента двоечника
{
public:
    char adres[N];
    char telephone[N];
};
enum typchik
{
    OTL,
    HOR,
    TRO,
    DVO
};
class AncetaStud
{
private:
    char fio[30];  //Переменная хранит имя студнта
    int nomerGrup; //Переменная хранит номер группы студнта
    int nomerStud; //Переменная хранит номер студенческого студнта
    int reiting;   //Переменная хранит рейтинг студнта
    typchik type;      //Переменная хранит метку активного компонента
    union          //Объединение хранит переменные компонент который различается в зависимости от рейтинга студента
    {
        otlichnik otl;
        horoshist hor;
        troechnik tro;
        dvoechnik dvo;
    }uch;
public:
    AncetaStud(); //Конструктор без параметров
    AncetaStud(typchik type); //Конструктор с одним параметром
    AncetaStud(char fio[N], int nomerGrup, int nomerStud, int reiting, typchik type); //Конструктор со всеми параметрами

    void setfio(char fio[N]); //Установка значений переменной fio
    void setnomerGrup(int nomerGrup); //Установка значений переменной nomerGrup
    void setnomerStud(int nomerStud); //Установка значений переменной nomerStud
    void setreiting(int reiting); //Установка значений переменной reiting
    void settype(typchik type); //Установка значений переменной type
    void setuch(AncetaStud uch); //Установка значений переменной uch */

    char* getfio(); //Получение значений переменной fio
    void getfio(char fio[N]); //Получение значений переменной fio
    int getnomerGrup(); //Получение значений переменной nomerGrup
    int getnomerStud(); //Получение значений переменной nomerStud
    int getreiting(); //Получение значений переменной reiting
    typchik gettype(); //Получение значений переменной type
    int getuch1(char* dopstependia); //Получение значений переменной uch */
    int getuch2(char* stependia); //Получение значений переменной uch */
    void getuch3(char* stependia); //Получение значений переменной uch */
    void getuch4(char* adres, char* telephone); //Получение значений переменной uch */

    void inputstud(); //Блок - ввод данных о студентах
    void outputstud(); //Блок - вывод данных о студентах

};
int searchbynamestud(AncetaStud* spisokstud[N], char с[N]);
int searchbyreiting(AncetaStud* spisokstud[N], int d);
