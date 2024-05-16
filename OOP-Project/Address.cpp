#include "Address.h"

#include <string>
#include <iostream>

using namespace std;

Address::Address(int n, string s, string city, string country)
{
	this->houseNumber = n;
	this->street = s;
	this->city = city;
	this->country = country;
}

int Address::gethouseNumber()
{
	return this->houseNumber;
}

string Address::getStreet()
{
	return this->street;
}

string Address::getCity()
{
	return this->city;
}

string Address::getCountry()
{
	return this->country;
}

void Address::printAddress()
{
	cout << "Street\t" << this->street << endl;
	cout << "House number:\t" << this->houseNumber << endl;
	cout << "City:\t" << this->city << endl;
	cout << "Country:\t" << this->country << endl;
	cout << endl;
}