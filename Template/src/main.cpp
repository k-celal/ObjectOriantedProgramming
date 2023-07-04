#include <iostream>
using namespace std;
//sablon sınıf boyle olusturulur gelen veri turu belli olmadıgında cok ise yarar gelen veri turu hangisi ise onu kullanır
template <class T>
T artir(T a){
	return a+1;
}
template <typename T>
void degistir(T &a,T &b){
	T temp=a;
	a=b;
	b=temp;
}
//sablon class olusumu
template <class T>
class myClass{
	public:
		T data;
		myClass(T data){
			this->data=data;
		}
		friend void yaz(myClass<T>); 
		
};
template<class T>
void yaz(myClass<T> a){
	cout<<a.data;
}
int main(int argc, char *argv[])
{
	//cout<<artir(5)<<endl;
	//cout<<artir(2.5)<<endl;
	// int a=5;
	// int b=3;
	// cout<<a<<"	"<<b<<endl;
	// degistir(a,b);
	// cout<<a<<"	"<<b<<endl;
	// char c='e';
	// char d='f';
	// cout<<c<<"	"<<d<<endl;
	// degistir(c,d);
	// cout<<c<<"	"<<d<<endl;

	//bir tane class olusturduk 2 farklı veri turu gonderdik
	// myClass<int> myObject(8);
	// cout<<myObject.data<<endl;
	// myClass<string> myObject2("celalkarahan");
	// cout<<myObject2.data<<endl;
	myClass<string> a("celal");
	yaz();
}