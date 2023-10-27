#pragma once
#include <math.h>
#include <fstream>
#include <iostream>

using namespace std;

class InfoOutput {
public:
	virtual void OutputInfo(ofstream& file) {
	}
};

class Kolo : public InfoOutput
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

	

	void OutputInfo(ofstream& file)  {
		plkola = p * radius * radius;
		dovzkola = 2 * p * radius;
		file << "Kolo:" << endl;
		file << "Ploshcha kola: " << plkola << endl;
		file << "Dovzhyna kola: " << dovzkola << endl;
	}

	

};

class Priamokytnuk : public InfoOutput
{
private:
	int a;
	int b;
	float perympriam = 0;
	float plpriam = 0;
public:
	Priamokytnuk()
	{

	}

	Priamokytnuk(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	

	void OutputInfo(ofstream& file) {
		plpriam = a * b;
		perympriam = 2 * (a + b);
		file << "Priamokytnuk:" << endl;
		file << "Ploshcha priamokythnuka: " << plpriam << endl;
		file << "Perymetr priamokytnuka: " << perympriam << endl;
	}

	

};

class Derived:public Priamokytnuk, public Kolo
{
private:

public:
	Derived()
	{
		Priamokytnuk(2, 2);
		Kolo(2);

	}

	int DerivedFunction()
	{
		ofstream MyFile("info.txt", ios::app);
		if (MyFile.is_open()) {
			

			Priamokytnuk::OutputInfo(MyFile);
			Kolo::OutputInfo(MyFile);

			MyFile.close();
			cout << "All info pasted in 'info.txt'" << endl;
		}
		else {
			cout << "Nety faila" << endl;
		}
		
		return 1;
	}
};