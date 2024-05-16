#pragma once

#include <string>

using namespace std;

class Address
{
private:
	int houseNumber;
	string street;
	string city;
	string country;

public:
	Address(int n, string s, string city, string country);

	int gethouseNumber();
	string getStreet();
	string getCity();
	string getCountry();

	void printAddress();
};

