#pragma once
#include <math.h>
#include <fstream>
#include <iostream>

using namespace std;

class Kolo
{
private:
	const float p = 3.14;
	int radius;
	double plkola = 0;
	float dovzkola = 0;
public:
	
	Kolo()
	{
		

	}

	Kolo(int a)
	{
		cout << "Input radius" << endl;
		cin >> radius;
		
	}

	int GetPloshchaKola()
	{
		plkola = p * pow(radius,2);
		return plkola;
	}

	void OutPutInfo()
	{
		ofstream MyFile("info.txt", ios::app);
		if (MyFile.is_open()) {
			MyFile <<"Ploshcha kola:" << plkola << endl;
			MyFile <<"Dovzhyna kola:" << dovzkola << endl;
			MyFile.close();
			cout << "All info paste in 'info.txt'" << endl;
		}
		else
		{
			cout << "Nety faila" << endl;
		}
	}

	int DovzKola()
	{
		dovzkola = 2 * p * radius;
		return dovzkola;
	}

};

class Priamokytnuk : public Kolo
{
private:
	int a;
	int b;
	float perympriam = 0;
	float plpriam = 0;
public:
	

	Priamokytnuk(int a, int b) 
	{
		this->a = a;
		this->b = b;
	}

	int GetPloshchaPriam()
	{
		plpriam = a * b;
		return plpriam;
	}

	void OutPutInfo2()
	{
		ofstream MyFile("info.txt", ios::app);
		if (MyFile.is_open()) {
			MyFile <<"Ploshcha priamokythnuka:" << plpriam << endl;
			MyFile <<"Perymetr priamokytnuka:" << perympriam << endl;
			MyFile.close();
		}
		else
		{
			cout << "Nety faila" << endl;
		}
	}

	int PerymetrPriam()
	{
		perympriam = (a + b) * 2;
		return perympriam;
	}

	void FullInfoKolo()
	{
		Kolo::GetPloshchaKola();
		Kolo::DovzKola();
		Kolo::OutPutInfo();
		
	}

};