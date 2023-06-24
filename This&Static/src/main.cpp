#include <iostream>
using namespace std;
class Math{
	public:
	int x;
	int y;
	//static olarak tanımlanan degiskenler her nesne olustugunda yeniden olusmaz dışardan deger atanır ve o deger daima devam eder 
	//static değişkenin constructorda kullanılabilmesi için sınıf adıyla mainin yukarısında tanımlanması gerekir 
	static int sabit;
	Math(int x,int y){
		//this pointeri bu classdaki degisken demektir
		this->x=x;
		this->y=y;
	}
	static int cube(int x){
		return x*x*x;
	}
	static void degerdegis(){
		sabit=10;
	}
};
int main(int argc, char *argv[])
{
	//static tanımlanmasaa aşağıdaki gibi çağırılamaz hata verir 
	cout<<Math::cube(3)<<endl;
	Math m(5,10);
	cout<<m.cube(4)<<endl;
	m.degerdegis();
	system("pause");
	return 0;

}