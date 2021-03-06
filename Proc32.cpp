// Proc32.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*Описать функцию DegToRad(D) вещественного типа, находящую ве-
личину угла в радианах, если дана его величина D в градусах (D — веще-
ственное число, 0 < D < 360). Воспользоваться следующим соотношением:
180° = π радианов. В качестве значения π использовать 3.14. С помощью
функции DegToRad перевести из градусов в радианы пять данных углов.*/

#include "pch.h"
#include <iostream>
using namespace std;
double DegToRad(double D);
double DegToRad(double D) {
	if (D <= 360 && D >= 0) {
		cout << D * 3.14 / 180;
	}
	return 0;
}
int main()
{
	int N = 5;
	double D;
	for (int i = 0; i < N; i++) {
		cin >> D;
		cout << DegToRad(D) << endl;
	}
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
