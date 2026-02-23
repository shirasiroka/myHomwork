#pragma once
#include <string>
#include<iostream>
#include<vector>
#include "Product.h"
#include "Address.h"
using namespace std;

class MishloachManot
{
	static double design_price;
	string senders_name;
	string recipients_name;
	Address shipping_address;
	double price;
	vector<Product>vp;
	MishloachManot();
	MishloachManot(string,string,Address);
	void AddProduct( const Product&)  ;
	double SumOfShipping();
	friend bool operator>(MishloachManot&, MishloachManot&);
	friend bool operator==(MishloachManot&, MishloachManot&);
	void Print()const;
	bool IsKosher(Kashrut)const;
	


	

	
};

