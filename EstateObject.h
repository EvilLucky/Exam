#pragma once
#include <string>
#include <vector>
#include <array>
using std::vector;
using std::string;
using std::cout;
using std::endl;

class Object: public Address
{
protected:
	string Object_name;
	std::array<int, 4> Kad_number;
	//Adress* Adr;
	float Longitude; 
	float Latitude;

public:
	Object(string);
	
	void add_kad_number(int, int, int, int);
	//void add_kad_number(int);
	void add_LaL(float, float);

	void cou()
	{
		for (int i =0; i < Kad_number.size(); i++)
		{
			cout << Kad_number.at(i) << " ";
			
			cout << Latitude << " " << Longitude;

		}
	}

};

Object::Object(string name)
{
	this->Object_name = name;
}


void Object::add_kad_number(int district, int signs, int code, int kadn)
{
	
	if (district >= 100&& district <=10) {
		cout << "False data!";
		//return 0;
	}
	else {
		if (signs >= 100 && signs <= 10)
		{
			cout << "False data!";
			//return 0;
		}
		else {
			if (code >= 1000000 && code <= 10000)
			{
				cout << "False data!";
				//return 0;

			}
			else {
				if (kadn >= 100 && kadn <= 10)
				{
					cout << "False data!";
					//return 0;
				}
				else
				{
					this->Kad_number = { district,signs,code,kadn };

					
				}
			}
		}
	}
}



void Object::add_LaL(float lati, float longi)
{
	if (lati <= -90 && lati >= +90) cout << "Rong cordinate!";
	else if (longi <= -180 && longi >= +180) cout << "Rong cordinate!";
	else this->Latitude = lati, this->Longitude = longi;


	
}









class OKS: public Object
{

};

class ZU: public Object
{
};

class MKJD: public Object
{
};