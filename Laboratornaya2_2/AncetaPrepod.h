#pragma once
#include <stdio.h>
#include <string.h>
class AncetaPrepod
{
private:
    char fio[30];    //���������� ������ ��� �������������
    char fakul[30];  //���������� ������ �������� ����������
    char predmet[30];//���������� ������ ������� �������������
    int auditor;     //���������� ������ ����� ���������
    int stage;       //���������� ������ ���� �������������
    int type;        //���������� ������ ����� ��������� ����������
    union
    {
        struct    //��������� ������ ������ ��� ����������
        {
            char zvanie[30];
            int zarplata;
            int doctorskaya;

        } dol;
        struct    //��������� ������ ������ ��� �������
        {
            char zvanie[30];
            int zarplata;
            int monograthiya;

        } sre;
        struct    //��������� ������ ������ ��� �������� �������������
        {
            char zvanie[30];
            int zarplata;
            int kolgrup;

        } kor;
        struct    //��������� ������ ������ ��� �������������
        {
            char zvanie[30];
            int zarplata;
            int kolchasov;

        } ochkor;
    }pre;
public:
    AncetaPrepod(); //����������� ��� ����������
    AncetaPrepod(int type); //����������� � ����� ����������
    AncetaPrepod(char fio[30], char fakul[30], char predmet[30], int auditor, int stage,  int type); //����������� �� ����� �����������

    void setfio(char fio[30]); //��������� �������� ���������� fio
    void setfakul(char fakul[30]); //��������� �������� ���������� fakul
    void setpredmet(char predmet[30]); //��������� �������� ���������� predmet

    void setauditor(int auditor); //��������� �������� ���������� auditor
    void setstage(int stage); //��������� �������� ���������� stage
    void settype(int type); //��������� �������� ���������� type

    void setpre(AncetaPrepod pre); //��������� �������� ���������� pre */

    void getfio(char* fio); //��������� �������� ���������� fio
    void getfakul(char* fakul); //��������� �������� ���������� fakul
    void getpredmet(char* predmet); //��������� �������� ���������� predmet

    int getauditor(); //��������� �������� ���������� auditor
    int getstage(); //��������� �������� ���������� stage
    int gettype(); //��������� �������� ���������� type

    int getpre1(char* zvanie, int* doctorskaya); //��������� �������� ���������� pre */
    int getpre2(char* zvanie, int* monograthiya); //��������� �������� ���������� pre */
    int getpre3(char* zvanie, int* kolgrup); //��������� �������� ���������� pre */
    int getpre4(char* zvanie, int* kolchasov); //��������� �������� ���������� pre */



    
};

