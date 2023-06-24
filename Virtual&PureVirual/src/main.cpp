#include <iostream>

using namespace std;
//En az bir saf sanal fonksiyon içeren sınıfa soyut “abstract” sınıf denir.
//Soyut sınıflara ait nesne yaratılamaz ama soyut sınıflara işaret eden işaretçiler yada referansta bulunan referanslar yaratılabilir.
//Soyut sınıflardan nesne oluşturamayız ama o sınıfın da kurucusu olabilir.
class Parca
{
    public:
        //Saf Sanal Fonksiyon
        virtual int parcaIsmiYaz()=0;
    ~Parca(){
        cout<<"Parca Silindi"<<endl;
    }
};
class Anakart: public Parca
{
    public:
    //Saf sanal fonksiyonlar yeniden tanımlanıyor 
        int parcaIsmiYaz()
        {
            cout<<"Anakart"<<endl;
            return 0;
        }
    ~Anakart(){
        cout<<"Anakart Silindi"<<endl;
    }
};
class Ram: public Parca
{
    public:
    //Saf sanal fonksiyonlar yeniden tanımlanıyor (Madde 1)
        int parcaIsmiYaz()
        {
            cout<<"Ram"<<endl;
            return 0;
        }
    ~Ram(){
        cout<<"Ram Silindi"<<endl;
    }
};

int main()
{
 
    //Hata Soyut sınıftan nesne türetemeyiz.(Madde 3)
    //Parca p;
    //Soyunt sınıftan işaretçi türetilebilir.(Madde 3)
 	Parca *ptr;
 	Anakart a;
 	Ram r;

    /*Çalışma Anı çok biçimliliği. Sanal fonksiyonun bize sağladığı
    avantajlardan biri. Duruma göre "ptr" işaretcsinin hangi türden bir nesneyi
    işaret edeceği çalışma anında belli olacak.*/
    for (int i =0;i<9;i++)
    {
        if (rand()%2)
        {
            //anakart
            ptr = &a;
        }
        else
        {
            //Ram
            ptr = &r;
        }
    ptr->parcaIsmiYaz();
    }
    //İki sınıf arasında bir miras ilişkisi varsa her iki sınıfın da yıkıcı fonksiyonları çağrılmalıdır.
    delete &a;
    
    system("pause");
    return 0;
}