#include <iostream>
using namespace std;
class Motor{
public:
    int a;
    int b;

    int fee();

    Motor(int x, int y){ a = x; b = y; }

 };

class Araba{

public:

    Motor r;

    Araba(int x, int y): r(x, y){}

};

int main(int argc, char *argv[])
{
	//composition ilişkisi bir classın başka bir class içinde kullanılmasıdır burada motor classı araba classı içinde kullanılmıştr
	/*
	- Araba nesnesi hayata geldiğinde Motor nesnesi de hayata gelir.
	- Araba nesnesi construct edilmeden önce Motor nesnesi construct edilir.
	Bunun sebebi Motor nesnesine MIL syntax'ı ile ilk değer verdik MIL syntax'ına göre ilk değer vermeler constructor çağırılmadan önce yapılır.
 	Dinamik Motor nesnesi kullansaydık. Nesneyi constructor'ın neresinde hayata getirirsek orasında Motor nesnesi construct olacaktı. */
	system("pause");
	return 0;
}