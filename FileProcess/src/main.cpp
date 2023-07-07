#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[])
{
	/*
	void ifstream::open(const char *dosya-adı, ios::openmode mode = ios::in);
	void ofstream::open(const char *dosya-adı, ios::openmode mode = ios::out | ios::trunc);
	void fstream::open(const char *dosya-adı, ios::openmode mode = ios::in | ios::out);
	*/
	ofstream dosyaYaz;
	dosyaYaz.open("dosya1.txt");
	//Dosyanın var olup olmadığı ve açılabilir olup olmadığının is_open() metodu ile kontrol edilmesi faydalı olacaktır.
	if (dosyaYaz.is_open())
	{
		dosyaYaz<<"celal karahan"<<endl;
		dosyaYaz.close();
	}
	//Dosyanın sonuna ekleme yapmak için ofstream sınıfına ait kurucu metodun ikinci parametresine ios::app değerinin yazılması yeterli olacaktır.
	
	
	ofstream dosyaYaz2("dosya2.txt");
	dosyaYaz<<"hasan karahan"<<endl;
	
	ifstream okumaDosya;
	string satirsatir;
	string kelimekelime;
	okumaDosya.open("okumadosya.txt");
	// while (getline(okumaDosya,satirsatir))
	// {
	// 	cout<<satirsatir<<endl;
	// }
	/*
	Dosya okuma işlemi satır satır veya belirli bir formata göre yapılabilir.
	Dosya okuma işlemi için ifstream sınıfının kurucu metoduna dosya adının verilmesi ve okuma biçimine göre
	getline veya get metodunun kullanılması yeterli olacaktır.
	*/
	while (okumaDosya >> kelimekelime)
	{
		cout<<kelimekelime<<endl;
	}
	// while (okumaDosya.eof())
	// {
	// 	okumaDosya>>kelimekelime;
	// 	cout<<kelimekelime<<endl;
	// }
	//Dosya silme işlemi için remove fonksiyonu kullanılır.
	//fstream fstr("dosya2.txt",ios::in);
	
	remove("dosya1.txt");
	okumaDosya.close();
	dosyaYaz.close();
	system("pause");
	return 0;
}