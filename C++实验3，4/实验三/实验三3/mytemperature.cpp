#include<iostream>
#include "mytemperature.h"
#include<iomanip>
using namespace std;

int main() {
	double cel = 40.0;
	double fah = 120.0;
	int t = 10;
	cout << "Celsius" << "    " << "Fahrenheit" << "    " << "|" << "    " << "Fahrenheit" << "    " << "Celsius" << endl;

	while (t--)
	{
		if (cel>37)
		{

		
			cout << setprecision(1) << fixed << cel;
			cout << "       " << setprecision(1) << fixed << celsius_to_fah(cel);
			cout << "         " << "|" << "    " << setprecision(1) << fixed << fah << "         ";
			cout<< setprecision(2) << fixed << fahrenheit_to_cels(fah) << endl;
			cel -= 1.0;
			fah -= 10.0;
		}
		else
		{
			cout << setprecision(1) << fixed << cel << "       ";
			cout << setprecision(1) << fixed << celsius_to_fah(cel) << "          ";
			cout << "|" << "    " << setprecision(1) << fixed << fah << "          ";
			cout<< setprecision(2) << fixed << fahrenheit_to_cels(fah) << endl;
			cel -= 1.0;
			fah -= 10.0;
		}

	}

	return 0;

}