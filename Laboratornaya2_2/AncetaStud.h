#pragma once
#include <stdio.h>
#include <string.h>
//��������� ������ ���������� ��������� ������� ��������������
const int N = 30;
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
            char dopstependia[N];
            int razmer;
        } otl;
        struct     //��������� ������ ������ ��� �������� ��������� 
        {
            char stependia[N];
            int razmer;
        } hor;
        struct     //��������� ������ ������ ��� �������� ��������� 
        {
            char stependia[N];
        } tro;
        struct     //��������� ������ ������ ��� �������� ���������
        {
            char adres[N];
            char telephone[N];
        } dvo;
    }uch;
public:
    AncetaStud(); //����������� ��� ����������
    AncetaStud(int type); //����������� � ����� ����������
    AncetaStud(char fio[N], int nomerGrup, int nomerStud, int reiting, int type); //����������� �� ����� �����������

    void setfio(char fio[N]); //��������� �������� ���������� fio
    void setnomerGrup(int nomerGrup); //��������� �������� ���������� nomerGrup
    void setnomerStud(int nomerStud); //��������� �������� ���������� nomerStud
    void setreiting(int reiting); //��������� �������� ���������� reiting
    void settype(int type); //��������� �������� ���������� type
    void setuch(AncetaStud uch); //��������� �������� ���������� uch */

    char* getfio(); //��������� �������� ���������� fio
    void getfio(char fio[N]); //��������� �������� ���������� fio
    int getnomerGrup(); //��������� �������� ���������� nomerGrup
    int getnomerStud(); //��������� �������� ���������� nomerStud
    int getreiting(); //��������� �������� ���������� reiting
    int gettype(); //��������� �������� ���������� type
    int getuch1(char* dopstependia); //��������� �������� ���������� uch */
    int getuch2(char* stependia); //��������� �������� ���������� uch */
    void getuch3(char* stependia); //��������� �������� ���������� uch */
    void getuch4(char* adres, char* telephone); //��������� �������� ���������� uch */
    void inputstud(); //���� - ���� ������ � ���������
    void outputstud(AncetaStud* a); //���� - ����� ������ � ���������
};

