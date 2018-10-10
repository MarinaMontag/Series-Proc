// Proc56.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Описать функцию Leng(xA, yA, xB, yB) вещественного типа, находящую
длину отрезка AB на плоскости по координатам его концов:|AB| = ( )2 ( )2 A B A B x − x + y − y
(xA, yA, xB, yB — вещественные параметры). С помощью этой функции най-
ти длины отрезков AB, AC, AD, если даны координаты точек A, B, C, D.*/

#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;

double Leng(double xa, double ya, double xb, double yb);
double Leng(double xa, double ya, double xb, double yb){
	double AB;
	double x = xa - xb;
	double y = ya - yb;
	double power1 = pow(x, 2);
	double power2 = pow(y, 2);
	AB = sqrt(power1 + power2);
	cout << AB << endl;
	return 0;
}


int main()
{
	double xa, ya, xb, yb, xc, yc, xd, yd;
	cin>> xa>> ya>> xb>> yb>> xc>> yc>> xd>> yd;
	Leng(xa,  ya,  xb,  yb);
	Leng(xa, ya, xc, yc);
	Leng(xa, ya, xd, yd);
	return 0;
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
