#include <iostream>
using namespace std;
class A{
    public:
        int x;
};
class B{
    protected:
        int y;
};
class C{
    private:
        int z;
    public:
    // buradaki get ve set methodları kapsülleme methodlarıdır
        void setZ(int z){
            this->z=z;
        } 
        int getZ(){
            return z; 
        }
};
class D:public A,public B,public C{
    public:
        D(){
			//kalıtım ile B classını aldığı için y değişkenine erişebilir ama z değişkenine erişmek imkansız
            y=5;
        }
        void getY(){
            cout<<y<<endl;
        }
};
int main(int argc, char *argv[])
{
	/*
		encapsulation konusu kapsülleme demektir ve değişkenlerin fonksiyonlarla kullanılabilmesi anlamına gelir genellikle değişkenler private tanımlanır ve get set komutları ile değişkene erişilir
		public: başında bu olan ifade her yerden erişilebilir demektir
		protected: başında bu olan ifade ise sadece kalıtım alınan class dan erişilebilir
		private: bu ifade ise sadece kendi classından erişilir bu ifade ile kullanılan değişkenler get ve set komutları olmalıdır
	*/
	//x değişkenine her yerden erişilebilir 
    //y değişkenine sadece kalıtım alındığı classdan erişilebilir
    //z değişkenine ise hiçbiryerden erişilemez
	cout << "Hello world!" << endl;
	system("pause");
}