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
    void setnomerGrup(int nomerGrup); //��������� �������� ���������� nomerGrup
    void setnomerStud(int nomerStud); //��������� �������� ���������� nomerStud
    void setreiting(int reiting); //��������� �������� ���������� reiting
    void settype(int type); //��������� �������� ���������� type
    void setuch(AncetaStud uch); //��������� �������� ���������� uch */

    char* getfio(); //��������� �������� ���������� fio
    void getfio(char* fio); //��������� �������� ���������� fio
    int getnomerGrup(); //��������� �������� ���������� nomerGrup
    int getnomerStud(); //��������� �������� ���������� nomerStud
    int getreiting(); //��������� �������� ���������� reiting
    int gettype(); //��������� �������� ���������� type
    int getuch1(char* dopstependia); //��������� �������� ���������� uch */
    int getuch2(char* stependia); //��������� �������� ���������� uch */
    void getuch3(char* stependia); //��������� �������� ���������� uch */
    void getuch4(char* adres, char* telephone); //��������� �������� ���������� uch */
};

