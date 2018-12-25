// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;
void lab2();
void lab3();



int main()
{
	cout << "Hello World!\n"; 
	lab3();
}

void lab2()
{
	char name[10];
	cout << "What is your name?\n";
	cin >> name;
	cout << "Hello " << name << "!" << endl;
}
void lab3()
{

	float metrs = 15;
	float inch = metrs * 39.37;
	float arsh = metrs * 1.41;
	printf("\n metrs = %.2f \n inch = %.2f \n arsh = %.2f \n", metrs,inch,arsh);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
