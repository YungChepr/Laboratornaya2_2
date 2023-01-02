﻿// Laboratornaya2_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "AncetaStud.h"
#include "AncetaPrepod.h"


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
        m = 0,//Количество cтудентов в динамическом массиве
        j,//Индекс массива cтудентов в динамическом массиве
        sumn = 0,//Количество созданных объектов студентов
        summ = 0;//Количество созданных объектов студентов в динамическом массиве

    //AncetaStud* spisokstud[N]; //Массив указателей на объекты в которых будут храниться данные студентов 

    AncetaStud* spisokstud = new AncetaStud[N];
    AncetaStud* spisokstud1[N]; //Указатель на массив в котором будут хранится указатели на объекты студентов
    for (i = 0; i < N; i++)
    {
        spisokstud1[i] = &(spisokstud[i]);
    }

    AncetaStud** spisokstud2; //Указатель на массив в котором будут хранится указатели на объекты студентов динамический
    //Выделяю память для динамического массива студентов
    spisokstud2 = (class AncetaStud**)malloc(sizeof(class AncetaStud*) * N);
    for (i = 0; i < N; i++)
    {
        *(spisokstud2 + i) = NULL;
    }

    do {
        do {
            printf("\nВыберите действие в меню\n");
            printf(" 1 - Ввод данных о студентах\n");
            printf(" 2 - Ввод данных о cтудентах(динамический массив) \n");
            printf(" 3 - Вывод данных о студентах\n");
            printf(" 4 - Вывод данных о cтудентах(динамический массив)\n");
            printf(" 5 - Поиск по имени среди студентов\n");
            printf(" 6 - Поиск по имени среди cтудентов(динамический массив)\n");
            printf(" 7 - Поиск по рейтингу среди cтудентов\n");
            printf(" 8 - Поиск по рейтингу среди cтудентов(динамический массив)\n");
            printf(" 9 - Выход из системы\n");
            while (scanf("%d", &a) != 1) //Проверка ввода если пользователь  введет не цифру
            {
                while (getchar() != '\n');
                printf("Ошибка. Введите число от 1 до 7 включительно: ");
            }
        } while ((a < 1) || (a > 9));

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
                if ((i + 1) > sumn)
                    // spisokstud[i] = new AncetaStud();//Что будет если опция 1 будет выбрана 2 раза
                    spisokstud[i].inputstud();
            }
            sumn = n;
        }

        if (a == 2)
        {
            printf("Ввод данных о cтудентах(динамический массив)\n");
            do
            {
                printf("\n Введите количество студентов m (m<20): ");
                while (scanf("%d", &m) != 1) //Проверка ввода если пользователь введет введет не цифру
                {
                    while (getchar() != '\n');
                    printf("Ошибка. Введите число от как показано в примере : ");
                }
                while (getchar() != '\n');
            } while (m < 1 || m>20);



            /* for (j = 0; j < m; j++)
             {

                 printf("Преподователь %d \n", (j + 1));

                 if ((j + 1) > summ)
                 {
                     //spisokpre = *(spisokprepod) + j;
                     *(spisokprepod + j) = new AncetaPrepod();//Что будет если опция 2 будет выбрана 2 раза
                     //*(spisokprepod + j) = spisokpre;
                 }
                 inputprepod(*(spisokprepod + j));
             }*/
            for (j = 0; j < m; j++)
            {
                printf("Студент %d \n", (j + 1));
                if ((j + 1) > summ)
                    // spisokstud[i] = new AncetaStud();//Что будет если опция 1 будет выбрана 2 раза
                    *(spisokstud2 + j) = new AncetaStud();
                (*(spisokstud2 + j))->inputstud();
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
                    spisokstud[i].outputstud();
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
                printf("Вывод данных о cтудентах(динамический массив)\n");
                for (j = 0; j < m; j++)
                {
                    (*(*(spisokstud2 + j))).outputstud();
                    //outputprepod((*(spisokprepod + j)));
                }
            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }
        }
        if (a == 5)
        {

            int f3 = 0;
            if (n != 0)
            {
                char zap1[N];
                printf("Поиск по имени среди студентов\n");
                while (getchar() != '\n');
                printf("Введите ФИО студента\n");
                gets_s(zap1);
                f3 = searchbynamestud(spisokstud1, zap1);
                printf("\n Всего найдено студентов с таким именем: %d\n ", f3);

            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }

        }
        if (a == 6)
        {

            int f4 = 0;
            if (m != 0)
            {
                char zap2[N];
                printf("Поиск по имени среди студентов\n");
                while (getchar() != '\n');
                printf("Введите ФИО студента\n");
                gets_s(zap2);
                f4 = searchbynamestud(spisokstud2, zap2);
                printf("\n Всего найдено студентов с таким именем: %d\n ", f4);

            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }

        }
        if (a == 7)
        {
            int f5 = 0;
            if (n != 0)
            {
                int zap3;
                printf("Поиск по рейтингу среди студентов\n");
                while (getchar() != '\n');
                printf("Введите рейтинг студента\n");
                do {
                    printf(" Рейтинг студента:(от 0 до 100) ");
                    while (scanf("%d", &zap3) != 1) //Проверка ввода если пользователь  введет не цифру
                    {
                        while (getchar() != '\n');
                        printf("Ошибка. Введите число как показано в примере: ");
                    }
                } while ((zap3 < 0) || (zap3 > 100));
                f5 = searchbyreiting(spisokstud1, zap3);
                printf("\n Всего найдено студентов с таким рейтингом: %d\n ", f5);

            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }
        }
        if (a == 8)
        {
            int f6 = 0;
            if (m != 0)
            {
                int zap4;
                printf("Поиск по рейтингу среди студентов\n");
                while (getchar() != '\n');
                printf("Введите рейтинг студента\n");
                do {
                    printf(" Рейтинг студента:(от 0 до 100) ");
                    while (scanf("%d", &zap4) != 1) //Проверка ввода если пользователь  введет не цифру
                    {
                        while (getchar() != '\n');
                        printf("Ошибка. Введите число как показано в примере: ");
                    }
                } while ((zap4 < 0) || (zap4 > 100));
                f6 = searchbyreiting(spisokstud2, zap4);
                printf("\n Всего найдено студентов с таким рейтингом: %d\n ", f6);

            }
            else
            {
                printf("Сначала введите данные хотя бы об одном студенте\n");
            }
        }
    } while (a != 9);
    printf("\nВы вышли из системы\n");

        delete[] spisokstud;
        free(spisokstud2); //Очищаю память динамического массива структур
    
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
