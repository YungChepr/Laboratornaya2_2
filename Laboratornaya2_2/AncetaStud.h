#pragma once
#include <stdio.h>
#include <string.h>
class AncetaStud
{
private:
    char fio[30];  //���������� ������ ��� �������
    int nomerGrup; //���������� ������ ����� ������ �������
    int nomerStud; //���������� ������ ����� ������������� �������
    int reiting;   //���������� ������ ������� �������
    int type;      //���������� ������ ����� ��������� ����������
    union          //����������� ������ ���������� ��������� ������� ����������� � ����������� �� �������� ��������
    {
        struct     //��������� ������ ������ ��� �������� ���������
        {
            char dopstependia[30];
            int razmer;
        } otl;
        struct     //��������� ������ ������ ��� �������� ��������� 
        {
            char stependia[30];
            int razmer;
        } hor;
        struct     //��������� ������ ������ ��� �������� ��������� 
        {
            char stependia[30];
        } tro;
        struct     //��������� ������ ������ ��� �������� ���������
        {
            char adres[30];
            char telephone[30];
        } dvo;
    }uch;
public:
    AncetaStud(); //����������� ��� ����������
    AncetaStud(int type); //����������� � ����� ����������
    AncetaStud(char fio[30], int nomerGrup, int nomerStud, int reiting, int type); //����������� �� ����� �����������

    void setfio(char fio[30]); //��������� �������� ���������� fio
    /*void setnomerGrup(); //��������� �������� ���������� nomerGrup
    void setnomerStud(); //��������� �������� ���������� nomerStud
    void setreiting(); //��������� �������� ���������� reiting
    void settype(); //��������� �������� ���������� type
    void setuch(); //��������� �������� ���������� uch */

    char* getfio(); //��������� �������� ���������� fio
    void getfio(char* fio); //��������� �������� ���������� fio
    int getnomerGrup(); //��������� �������� ���������� nomerGrup
    /*void getnomerStud(); //��������� �������� ���������� nomerStud
    void getreiting(); //��������� �������� ���������� reiting
    void gettype(); //��������� �������� ���������� type
    void getuch(); //��������� �������� ���������� uch */

    

};

