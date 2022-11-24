#pragma once
#include <stdio.h>
#include <string.h>
class AncetaStud
{
private:
    char fio[30];  //Переменная хранит имя студнта
    int nomerGrup; //Переменная хранит номер группы студнта
    int nomerStud; //Переменная хранит номер студенческого студнта
    int reiting;   //Переменная хранит рейтинг студнта
    int type;      //Переменная хранит метку активного компонента
    union          //Объединение хранит переменные компонент который различается в зависимости от рейтинга студента
    {
        struct     //Структура хранит данные для студента отличника
        {
            char dopstependia[30];
            int razmer;
        } otl;
        struct     //Структура хранит данные для студента хорошиста 
        {
            char stependia[30];
            int razmer;
        } hor;
        struct     //Структура хранит данные для студента троечника 
        {
            char stependia[30];
        } tro;
        struct     //Структура хранит данные для студента двоечника
        {
            char adres[30];
            char telephone[30];
        } dvo;
    }uch;
public:
    AncetaStud(); //Конструктор без параметров
    AncetaStud(int type); //Конструктор с одним параметром
    AncetaStud(char fio[30], int nomerGrup, int nomerStud, int reiting, int type); //Конструктор со всеми параметрами

    void setfio(char fio[30]); //Установка значений переменной fio
    void setnomerGrup(int nomerGrup); //Установка значений переменной nomerGrup
    void setnomerStud(int nomerStud); //Установка значений переменной nomerStud
    void setreiting(int reiting); //Установка значений переменной reiting
    void settype(int type); //Установка значений переменной type
    void setuch(AncetaStud uch); //Установка значений переменной uch */

    char* getfio(); //Получение значений переменной fio
    void getfio(char* fio); //Получение значений переменной fio
    int getnomerGrup(); //Получение значений переменной nomerGrup
    int getnomerStud(); //Получение значений переменной nomerStud
    int getreiting(); //Получение значений переменной reiting
    int gettype(); //Получение значений переменной type
    int getuch1(char* dopstependia); //Получение значений переменной uch */
    int getuch2(char* stependia); //Получение значений переменной uch */
    void getuch3(char* stependia); //Получение значений переменной uch */
    void getuch4(char* adres, char* telephone); //Получение значений переменной uch */
};

