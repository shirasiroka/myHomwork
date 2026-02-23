#include "MishloachManot.h"

double MishloachManot::design_price = 50;

MishloachManot::MishloachManot()
{
	price = 15;

}

MishloachManot::MishloachManot(string sname, string rname,Address ad):senders_name(sname),recipients_name(rname),shipping_address(ad)
{}

void MishloachManot::AddProduct( const Product& p) 
{
	vp.push_back(p);
}

double MishloachManot::SumOfShipping()
{
	double sumOfProducts = 0;
	for(Product var : vp)
	{
		sumOfProducts += var.GetPrice();

	}
	return sumOfProducts + price + design_price;

}

void MishloachManot::Print() const
{
	cout << "senders_name" << senders_name << "recipients_name" << recipients_name
	<< "shipping_address";
	shipping_address.Print();
	for (Product var : vp)
	{
		 var.Print();
	}
	cout << "price" << price << "design_price" << design_price;
}

bool MishloachManot::IsKosher(Kashrut k) const
{
	for (Product var : vp)
	{
		if (var.GetKashrut() != k)
			return false;
	}
	return true;
}

bool operator>(MishloachManot& m1, MishloachManot& m2)
{
	return m1.SumOfShipping() > m2.SumOfShipping();
}

bool operator==(MishloachManot& m1, MishloachManot& m2)
{
	return m1.SumOfShipping() == m2.SumOfShipping();
}
