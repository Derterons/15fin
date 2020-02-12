// 15lab.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <cstring>
#include <conio.h>
#include <locale.h>
#include <math.h> 

class Point
{
private:
    float x, y;
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    void SetXY(int i, int j)
    {
        x = i;
        y = j;
    }
    int GetX()
    {
        return x;
    }
    int GetY()
    {
        return y;
    }
    int Stotona()
    {
        return sqrt(x * x + y * y);
    }
};

class Triangle
{
private:
    float A, B, C;
public:
    void SetABC(int a, int b, int c)
    {
        A = a;
        B = b;
        C = c;
    }
    void Length()
    {
        if ((A + B <= C) || (A + C <= B) || (B + C <= A))
        {
            printf("One of the side more than sum of two others\n");
        }
        else
        {
            printf("1 сторона = %f \n", A);
            printf("2 сторона = %f \n", B);
            printf("3 сторона = %f \n", C);
            printf("Периметр = %f \n", A + B + C);

        }

    }
};

int main()
{
    float n1, z1, n2, z2, n3, z3;
    Point p1, p2, p3;
    Triangle tr;
    float s1;
    setlocale(LC_ALL, "Russian");
    printf("X для первого угла : ");
    scanf_s("%f", &n1);
    printf("Y для первого угла : ");
    scanf_s("%f", &z1);
    printf("X для второго угла : ");
    scanf_s("%f", &n2);
    printf("Y для второго угла : ");
    scanf_s("%f", &z2);
    printf("X для третьего угла : ");
    scanf_s("%f", &n3);
    printf("Y для третьего угла : ");
    scanf_s("%f", &z3);
    p1.SetXY(n1, z1);
    p2.SetXY(n2, z2);
    p3.SetXY(n3, z3);
    printf("1 вершина имеет координаты (%d,%d)\n", p1.GetX(), p1.GetY());
    printf("2 вершина имеет координаты (%d,%d)\n", p2.GetX(), p2.GetY());
    printf("3 вершина имеет координаты (%d,%d)\n", p3.GetX(), p3.GetY());
    if ((p1.GetX() == p2.GetX() && p1.GetY() == p2.GetY()) || (p2.GetX() == p3.GetX() && p2.GetY() == p3.GetY()) || (p1.GetX() == p3.GetX() && p1.GetY() == p3.GetY()) || (p2.GetX() == p3.GetX() == p1.GetX() && p2.GetY() == p3.GetY() == p1.GetY()))
    {
        printf("It is no triangle\n");
    }
    else
    {
        tr.SetABC(p1.Stotona(), p2.Stotona(), p3.Stotona());
        tr.Length();
    }
    _getch;
}
