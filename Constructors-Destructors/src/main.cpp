#include <iostream>
using namespace std;
class Insan
{
private:
    int numara;
    string isim;

public:
	//consturctor
    Insan(string yazilacakisim , int yazilacaknumara){
        cout<<"Constructor calisti";
        isim=yazilacakisim;
        numara=yazilacaknumara;
    }
    //overloading -- bu ise eğer class dan obje üretilirken tek parametre verilirse bu method çağrılır
    Insan(string yazilacakisim ){
        isim=yazilacakisim;
        numara=0;
    }
   
	//encapsulation
    void setIsim(string yisim)
    {

        if (yisim.size() >= 3)
        {
            this->isim = yisim;
        }
        else
        {
            cout << "isim uzunlugu yeterli degil" << endl;
        }
    }
    void setNum(int yNum)
    {
        numara = yNum;
    }
    string getIsim()
    {
        return isim;
    }
    int getNum()
    {
        return numara;
    }
    void tanit()
    {
        cout << isim << endl
             << numara << endl;
    }
     //destructora overloading yapılamaz
    ~Insan()
        {

            cout<<"Insan nesnesi silindi"<<endl;
        }
};
int main(int argc, char *argv[])
{
	/*
	constructor demek class olustugunda ilk çağrılacak fonksiyon demektir Class ile aynı isimde olur
	Destructor, bir nesne yok edileceğinde otomatik olarak çağrılan bir örnek üye işlevidir. Yani, bir yıkıcı, bir nesne yok edilmeden önce çağrılacak son işlevdir.
	*/
    //eğer pointer oluşturup bırakırsak constructor çağrılmaz ve pointerler otomatik silinmez delete ile silinmesi gerekir
    Insan* insan=new Insan("Celal",852);
    insan->tanit();
    //destructor cağırmak için kullanılır
    delete insan;
    Insan *celal;
    celal=new Insan("Celal",55);
    celal->tanit();
    delete celal;
    Insan a("Celal",88);
	return 0;
}