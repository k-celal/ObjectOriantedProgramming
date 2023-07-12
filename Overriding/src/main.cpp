#include <iostream>
using namespace std;

class Kitap{
    public:
        string isim;
    public:
        void bilgileri_söyle(){
            cout<<isim<<endl;
        }
};
class Roman:public Kitap{
    public:
        string roman_tipi;
    public:
        Roman(string isim,string roman_tipi){
			//this pointeri bu classın özelliği olan değişkeni buna eşitle anlamına gelir
            this->isim=isim;
            this->roman_tipi=roman_tipi;
        }
        void bilgileri_söyle(){
            cout<<roman_tipi<<endl<<isim<<endl;
        }
};
int main(int argc, char const *argv[])
{

    Roman r1("Powered By MuyuX","Uzun");
    r1.bilgileri_söyle();//aynı fonksiyondan 2 tane olmasına rağmen kendi classındanki fonksiyon overriding yaparak kendini getirir burada kendi classının fonksiyonunu çağırır
    r1.Kitap::bilgileri_söyle();//burada ise kalıtım aldığı classın fonksiyonunu çağırır
    Kitap *r1Ebeveyn=&r1;
    r1Ebeveyn->bilgileri_söyle();//böylede kullanılabilir kalıtım aldığı classın fonksiyonu gelir
    return 0;
}
