#include <iostream>
#include "EstateObject.h"
#include "Address.h"

int main()
{
	//Создание обьекта
	Object OB("GaspromBank");
	Address Adr;
	OB.add_kad_number(12, 75, 496473, 33);
	OB.add_LaL(75.145, 130.323);
	OB.cou();
	Adr.Co();

}
