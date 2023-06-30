#include <iostream>
using namespace std;
class sekil{

	public:

	int x, y;

	public:	
	sekil(){
		cout<<"sekil constructor"<<endl;
	}
	virtual int alan() = 0;
	void yaz(){
		cout<<x<<" "<<y<<endl;
	}

};
class daire:public sekil{
	public:
	daire(int x,int y){
		this->x=x;
		this->y=y;
	}
	int alan(){
		return x*y*y;
	}
};
class kare:public sekil{
	public:
	kare(int x){
		this->x=x;
	}
	int alan(){
		return x*x;
	}
};

int main(int argc, char *argv[])
{
	//C++ dilinde, soyut sınıflar içerisinde en az bir adet saf sanal metot (pure virtual function) bulunduran sınıflardır.
	//Bir sanal fonksiyonun, saf olması, =0 gösterimi ile olur. Örneğin virtual int safsanal()=0; gösterim bir saf sanal fonksiyondur
	/*
	Bu gösterimle tanımlanan saf sanal fonksiyonlar, çağırılamaz. Bu fonksiyonların tanım amacı, bu fonksiyonların tanımlandığı soyut sınıflardan miras alan alt sınıfları, bu fonksiyonları yeniden tanımlamaya zorlamaktır.
	Soyut sınıflardan nesne üretilemez. Yani soyut sınıflar sadece tanım için kullanılır. Bununla birlikte, soyut sınıflar, kendilerinden miras alan sınıflardan üretilen nesneleri gösterebilir
	*/
	
	daire d(5,4);
	kare k(15);
	sekil *a;
	a=&d;
	
	cout<<"daire= "<<a->alan()<<endl;
	cout<<"daire= "<<d.alan()<<endl;
	cout<<"kare= "<<k.alan()<<endl;
	

	system("pause");
	return 0;
}