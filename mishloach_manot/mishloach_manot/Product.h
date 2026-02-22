#pragma once
#include<iostream>
#include <string>
using namespace std;
class Product
{
	string productName;
	double price;
	int amount;
public:
	enum Kashrut
	{
		badats,
		rubin,
		lando
	};
	Kashrut KashrutType;
	Product();
	Product(string, double, int, Kashrut);
	double Sum();
	void Print();


};

