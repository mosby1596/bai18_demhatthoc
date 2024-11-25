// bai18_demhatthoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()

{
	cout << "tinh so thoc:\n";
	int so0,sothoc;
	cout << "nhap so o:\n";
	cin >> so0;
	cout.imbue(locale("en_US.UTF-8"));
	double tongthoc = 0;
	sothoc = 0;
	if (so0 > 64) { cout << "tren ban co co chi co 64 o"; return 0; }
	for (int i = 0; i < so0; i++)
	{
		tongthoc = tongthoc + pow(2, i);
		cout << "o thu:" << i+1 << ":" << pow(2, i) << sothoc << endl;
	}
	cout << "tong so thoc la:" << tongthoc << endl;
	cout << "tong so thoc la:" << fixed << tongthoc << endl;
	return 0;
}

