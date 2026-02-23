#include "Address.h"

Address::Address()
{
	city = "";
	street = "";
	house_number = 1;
}

void Address::Print() const
{
	cout << "city" << city << "street" << street << "house_number" << house_number;
}
