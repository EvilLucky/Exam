#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;
using std::cout;
using std::endl;

class Address
{
private:

	short Index;
	string Loc_name;
	string Street_name;
	int Number;

public:
	Address();
	void add_index(int);
	void add_loc(string);
	void add_street_name_and_number(string,int);
	 
	void Co()
	{

	}
};


Address::Address()
{
	Index = 0;
}

void Address::add_index(int ind)
{
	if (ind >= 1000000) cout << "Rong Index" << endl;
	else this->Index = ind;
}