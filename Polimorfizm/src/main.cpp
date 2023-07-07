#include <iostream>
using namespace std;
class Hayvan{
	public:
	//Sanal fonksiyonlar bir ana sınıf içinde bildirimi yapıldıktan sonra türetilen sınıf içinde tekrar tanımlanır. Sanal fonksiyon bildirimi için kullanılan genel yapı aşağıda gösterilmektedir:
	//sanal olarak bu fonksiyonu yapıyor ve hayvan classından obje üretilip bu fonksiyon çağrıldığında bu fonksiyonu gönderiyor
	// final yapısını kullanırsak override edilemez
		virtual string konusma() /*final*/{
			return "Konusamiyor!";
		}
};

class Kedi:public Hayvan{
	public:
	// fonksiyonu override ederek kedi sınıfından obje üretildiğinde farklı sonuç çıkarmasını sağlıyoruz
		//overriding : virtual fonksiyonların değiştirilmesi, yeniden yazılması
		string konusma() override {
			return "miyav";
		}
};

class Kopek:public Hayvan{
	public:
	//yanlızca virtual fonksiyonlar override edilir
	// fonksiyonu override ederek köpek sınıfından obje üretildiğinde farklı sonuç çıkarmasını sağlıyoruz
		string konusma() override {
			return "havhav";
		}
};

int main(){
	//Polimorfizm bir fonksiyonun birden çok anlamla ilişkilendirilmesidir
	// Hayvan X;
	// Kedi Y;
	Hayvan *a;
	Hayvan *X=new Hayvan();
	Hayvan *Y=new Kedi();
	Hayvan *Z=new Kopek();
	Kedi *F=(Kedi*)(a);

	cout << "Hayvan: " << X->konusma() << endl;
	cout << "Kedi: " << Y->konusma() << endl;
	cout << "Kopek: " << Z->konusma() << endl;
	system("pause");
	return 0;
}
