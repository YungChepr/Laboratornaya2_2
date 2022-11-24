// Laboratornaya2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <clocale>
#include <locale.h>
#include "AncetaStud.h"
#include "AncetaPrepod.h"
//Константа хранит количество элементов массива преподователей
const int N = 30;

void inputstud(AncetaStud* a) //Блок - ввод данных о студентах
{                     //gets_s(a//Тут this уже определенен//->fio);
    printf(" ФИО: "); 
    char fio[30];
    gets_s(fio);
    a->setfio(fio);

    int nomerGrup;
    do {
        printf(" Номер группы:(Введите в формате 5 цифр '22091')\n");
        while (scanf("%d", &nomerGrup) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число от как показано в примере : ");
        }
    } while (nomerGrup < 10000 || nomerGrup >99999);
    a->setnomerGrup(nomerGrup);

    int nomerStud;
    do {
        printf(" Номер студенческого(Введите в формате 7 цифр '2111851')\n");
        while (scanf("%d", &nomerStud) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число как показано в примере: ");
        }
    } while (nomerStud < 1000000 || nomerStud >9999999);
    a->setnomerStud(nomerStud);

    int reiting;
    do {
        printf(" Рейтинг студента:(от 0 до 100) ");
        while (scanf("%d", &reiting) != 1) //Проверка ввода если пользователь  введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число как показано в примере: ");
        }
    } while ((reiting < 0) || (reiting > 100));
    a->setreiting(reiting);

    AncetaStud uch;
    a->setuch(uch);
    printf("\n");
    while (getchar() != '\n');
    
    
}

void outputstud(AncetaStud* a) //Блок - вывод данных о студентах
{
    char fio[30];
    a->getfio(fio);
    printf(" %s ", fio);

    int nomerGrup;
    nomerGrup=a->getnomerGrup();
    printf(" %d ", nomerGrup);

    int nomerStud;
    nomerStud = a->getnomerStud();
    printf(" %d ", nomerStud);

    int reiting;
    reiting = a->getreiting();
    printf(" %d ", reiting);
    
    int type;
    type = a->gettype();
    if (type == 1)
    {
        char dopstependia[30];
        int razmer1;

        razmer1 = a->getuch1(dopstependia);
        printf(" %s ", dopstependia);
        printf(" %d ", razmer1);
    }
    if (type == 2)
    {
        char stependia[30];
        int razmer2;

        razmer2 = a->getuch2(stependia);
        printf(" %s ", stependia);
        printf(" %d ", razmer2);
    }
    if (type == 3)
    {
        char stependia[30];

        a->getuch3(stependia);
        printf(" %s ", stependia);
       
    }
    if (type == 4)
    {
        char adres[30];
        char telephone[30];

        a->getuch4(adres, telephone);
        printf(" %s ", adres);
        printf(" %s ", telephone);

    }
    printf("\n");
}

void inputprepod(AncetaPrepod* a) //Блок - ввод данных о студентах
{                     //gets_s(a//Тут this уже определенен//->fio);
    printf(" ФИО: ");
    char fio[30];
    gets_s(fio);
    a->setfio(fio);

    printf(" Факультет: ");
    char fakul[30];
    gets_s(fakul);
    a->setfakul(fakul);

    printf(" Предмет: ");
    char predmet[30];
    gets_s(predmet);
    a->setpredmet(predmet);

    int auditor;
    do {
        printf(" Номер аудитории:(Введите в формате 3 цифр '421')\n");
        while (scanf("%d", &auditor) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число от как показано в примере : ");
        }
    } while ((auditor < 100) || (auditor >999));
    a->setauditor(auditor);

    int stage;
    do {
        printf(" Стаж работы:(Введите в формате 2 цифр '39')\n");
        while (scanf("%d", &stage) != 1) //Проверка ввода если пользователь введет не цифру
        {
            while (getchar() != '\n');
            printf("Ошибка. Введите число как показано в примере: ");
        }
    } while ((stage < 1) || (stage >99));
    a->setstage(stage);

    
    AncetaPrepod pre;
    a->setpre(pre);
    printf("\n");
    while (getchar() != '\n');


}

void outputprepod(AncetaPrepod* a) //Блок - вывод данных о преподователях
{
    char fio[30];
    a->getfio(fio);
    printf(" %s ", fio);

    char fakul[30];
    a->getfakul(fakul);
    printf(" %s ", fakul);

    char predmet[30];
    a->getpredmet(predmet);
    printf(" %s ", predmet);

    int auditor;
    auditor = a->getauditor();
    printf(" %d ", auditor);

    int stage;
    stage = a->getstage();
    printf(" %d ", stage);


    int type;
    type = a->gettype();
    if (type == 1)
    {
        char zvanie[30];
        int zarplata1;
        int doctorskaya;

        zarplata1 = a->getpre1(zvanie, &doctorskaya);
        printf(" %s ", zvanie);
        printf(" %d ", zarplata1);
        printf(" %d ", doctorskaya);
    }
    if (type == 2)
    {
        char zvanie[30];
        int zarplata2;
        int monograthiya;

        zarplata2 = a->getpre2(zvanie, &monograthiya);
        printf(" %s ", zvanie);
        printf(" %d ", zarplata2);
        printf(" %d ", monograthiya);
    }
    if (type == 3)
    {
        char zvanie[30];
        int zarplata3;
        int kolgrup;
        zarplata3 = a->getpre3(zvanie, &kolgrup);
        printf(" %s ", zvanie);
        printf(" %d ", zarplata3);
        printf(" %d ", kolgrup);

    }
    if (type == 4)
    {
        char zvanie[30];
        int zarplata4;
        int kolchasov;

        zarplata4 = a->getpre4(zvanie, &kolchasov);
        printf(" %s ", zvanie);
        printf(" %d ", zarplata4);
        printf(" %d ", kolchasov);

    }
    printf("\n");
}


int main()
{
    setlocale(LC_ALL, "RUS");
    int a, //Переменная отвечающая за выбор строчки в меню
        n = 0,//Количество студентов
        i,//Индекс массива студентов
        m = 0,//Количество преподователей
        j,//Индекс массива преподователей
        sumn = 0,//Количество созданных объектов студентов
        summ = 0;//Количество созданных объектов студентов

    AncetaStud* spisokstud[N]; //Массив указателей на объекты в которых будут храниться данные студентов 
    
    AncetaPrepod* spisokpre = NULL; //Указатель на обьект в котором хранятся данные преподователя

    AncetaPrepod** spisokprepod; //Указатель на массив в котором будут хранится указатели на объекты преподователей
    //Выделяю память для массива преподователей
    spisokprepod = (class AncetaPrepod**)malloc(sizeof(class AncetaPrepod*) * N);

    do {
        do {
            printf("\nВыберите действие в меню\n");
            printf(" 1 - Ввод данных о студентах\n");
            printf(" 2 - Ввод данных о преподователях \n");
            printf(" 3 - Вывод данных о студентах\n");
            printf(" 4 - Вывод данных о преподователях\n");
            printf(" 5 - Поиск по имени среди студентов\n");
            printf(" 6 - Поиск по имени среди преподователей\n");
            printf(" 7 - Выход из системы\n");
            while (scanf("%d", &a) != 1) //Проверка ввода если пользователь  введет не цифру
            {
                while (getchar() != '\n');
                printf("Ошибка. Введите число от 1 до 7 включительно: ");
            }
        } while ((a < 1) || (a > 7));

        if (a == 1)
        {
            printf("Ввод данных о студентах\n");
            do {
                printf("\n Введите количество студентов n (n<20): ");
                while (scanf("%d", &n) != 1) //Проверка ввода если пользователь введет введет не цифру
                {
                    while (getchar() != '\n');
                    printf("Ошибка. Введите число от как показано в примере : ");
                }
                while (getchar() != '\n');
            } while (n < 1 || n>20);

            for (i = 0; i < n; i++)
            {
                printf("Студент %d \n", (i + 1));
                if((i+1)>sumn)
                     spisokstud[i] = new AncetaStud();//Что будет если опция 1 будет выбрана 2 раза
            inputstud(spisokstud[i]);
            }
            sumn = n;
        }

        if (a == 2)
        {
            printf("Ввод данных о преподователях\n");
            do
            {
                printf("\n Введите количество преподователей m (m<20): ");
                while (scanf("%d", &m) != 1) //Проверка ввода если пользователь введет введет не цифру
                {
                    while (getchar() != '\n');
                    printf("Ошибка. Введите число от как показано в примере : ");
                }
                while (getchar() != '\n');
            } while (m < 1 || m>20);

            

            for (j = 0; j < m; j++)
            {

                printf("Преподователь %d \n", (j + 1));

                if ((j + 1) > summ)
                {
                    //spisokpre = *(spisokprepod) + j;
                    *(spisokprepod + j) = new AncetaPrepod();//Что будет если опция 2 будет выбрана 2 раза
                    //*(spisokprepod + j) = spisokpre;
                }
                inputprepod(*(spisokprepod + j));
            }
            summ = m;
        }

        if (a == 3)
        {
            if (n != 0)
            {
                printf("Вывод данных о студентах\n");
                for (i = 0; i < n; i++)
                {
                    outputstud(spisokstud[i]);
                }
            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }
        }

        if (a == 4)
        {
            if (m != 0)
            {
                printf("Вывод данных о преподователях\n");
                for (j = 0; j < m; j++)
                {

                    outputprepod((*(spisokprepod + j)));
                }
            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }
        }

    } while (a != 7);
    printf("\nВы вышли из системы\n");

    delete[] spisokstud;
    free(spisokprepod); //Очищаю память динамического массива структур
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
