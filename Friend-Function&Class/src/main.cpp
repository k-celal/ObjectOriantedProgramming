#include <iostream>
using namespace std;
class Calisan{
	private:
		int yas;
		string isim;
		int maas;
	public:
		Calisan(string isim,int yas,int maas){
			this->isim=isim;
			this->yas=yas;
			this->maas=maas;
		}
		void bilgiGuncelle(string isim,int yas,int maas){
			this->isim=isim;
			this->yas=yas;
			this->maas=maas;
		}
		void bilgiGuncelle(string isim,int yas){
			this->isim=isim;
			this->yas=yas;
		}
	// calisanBilgi fonksiyonun arkadas oldugunu belirttik
	friend void calisanBilgi(Calisan c1);
	//Deneme sınıfının arkadas oldgunu belirttik
	friend class Deneme;
};
// arkadas olarak belirttigimiz icin normalde erisemeyecegimiz bilgilere erisim sagladık 
void calisanBilgi(Calisan c1){
	cout<<c1.isim<<" "<<c1.yas<<" "<<c1.maas<<endl;
}
//arakdaş sınıf olarak belirttiğimiz için üstteki sınıfın tüm özelliklerine erişebilir
class Deneme{
	public:
		void calisanBilgi(Calisan c1){
			cout<<c1.isim<<" "<<c1.yas<<" asd"<<c1.maas<<endl;
		}
};
int main(int argc, char *argv[])
{
	/*Arkadaş fonksiyonlar. 
	Sınıfın üyesi olmamasına rağmen o sınıfın private üyelerine erişme hakkına sahip fonksiyonlardır. 
	Bu işlem için friend anahtar kelimesini kullanırız.*/
	Calisan c1("Celal",19,1000);
	calisanBilgi(c1);
	c1.bilgiGuncelle("hasan",12,2000);
	Deneme d1;
	d1.calisanBilgi(c1);
	c1.bilgiGuncelle("bahadir",17);
	//Deneme::calisanBilgi(c1);
	/*Arkadas sınıflar
	Yine aynı şekilde, bir sınıf başka bir sınıfın arkadaşı olarak tanımlanırsa 
	tüm private üyelerine erişebilme hakkına sahip olur. 
	*/
	system("pause");
	return 0;
}