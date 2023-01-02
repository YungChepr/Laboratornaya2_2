#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <clocale>
#include <string.h>
#include <locale.h>
//��������� ������ ���������� ��������� ������� ��������������
const int N = 30;
class otlichnik    //��������� ������ ������ ��� �������� ���������
{
public:
    char dopstependia[N];
    int razmer;
};
class horoshist    //��������� ������ ������ ��� �������� ��������� 
{
public:
    char stependia[N];
    int razmer;
};
class troechnik    //��������� ������ ������ ��� �������� ��������� 
{
public:
    char stependia[N];
};
class dvoechnik    //��������� ������ ������ ��� �������� ���������
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
    char fio[30];  //���������� ������ ��� �������
    int nomerGrup; //���������� ������ ����� ������ �������
    int nomerStud; //���������� ������ ����� ������������� �������
    int reiting;   //���������� ������ ������� �������
    typchik type;      //���������� ������ ����� ��������� ����������
    union          //����������� ������ ���������� ��������� ������� ����������� � ����������� �� �������� ��������
    {
        otlichnik otl;
        horoshist hor;
        troechnik tro;
        dvoechnik dvo;
    }uch;
public:
    AncetaStud(); //����������� ��� ����������
    AncetaStud(typchik type); //����������� � ����� ����������
    AncetaStud(char fio[N], int nomerGrup, int nomerStud, int reiting, typchik type); //����������� �� ����� �����������

    void setfio(char fio[N]); //��������� �������� ���������� fio
    void setnomerGrup(int nomerGrup); //��������� �������� ���������� nomerGrup
    void setnomerStud(int nomerStud); //��������� �������� ���������� nomerStud
    void setreiting(int reiting); //��������� �������� ���������� reiting
    void settype(typchik type); //��������� �������� ���������� type
    void setuch(AncetaStud uch); //��������� �������� ���������� uch */

    char* getfio(); //��������� �������� ���������� fio
    void getfio(char fio[N]); //��������� �������� ���������� fio
    int getnomerGrup(); //��������� �������� ���������� nomerGrup
    int getnomerStud(); //��������� �������� ���������� nomerStud
    int getreiting(); //��������� �������� ���������� reiting
    typchik gettype(); //��������� �������� ���������� type
    int getuch1(char* dopstependia); //��������� �������� ���������� uch */
    int getuch2(char* stependia); //��������� �������� ���������� uch */
    void getuch3(char* stependia); //��������� �������� ���������� uch */
    void getuch4(char* adres, char* telephone); //��������� �������� ���������� uch */

    void inputstud(); //���� - ���� ������ � ���������
    void outputstud(); //���� - ����� ������ � ���������

};
int searchbynamestud(AncetaStud* spisokstud[N], char �[N]);
int searchbyreiting(AncetaStud* spisokstud[N], int d);
