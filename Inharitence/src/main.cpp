#include <iostream>
using namespace std;
class Person
{
	private:
		//bu değişkenlere sadece bu class dan erişebiliriz
		int id;
    	string name;
	protected:
		string protected_variable="Protected accessed";
   
    public:
        void set_p()
        {
            cout<<"Enter the Id:";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the Name:";
            cin>>name;
        }
   
        void display()
        {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
};
 
class Student: private Person
{
	string course;
    int fee;
    
    public:
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
			//çıktı arabelleğini temizlemeye yarar
            fflush(stdin);
            cin>>course;
            cout<<"Enter the Course Fee:";
            cin>>fee;
			//değişkene burdan erişebiliriz fakat mainden erişemeyiz
			cout<<protected_variable<<endl;
        }
         
        void display()
        {
           	Person::display();
            cout<<course<<"\t"<<fee<<endl;
        }
};
int main(int argc, char *argv[])
{
	/*
	inheritance(kalıtım) bir sınıfın başka bir sınıftan özellik alması olarak açıklanabilir
	*/
	Student s;
    s.set_s();
	//2 hem üst sınıfta hem alt sınıfta olmasına rağmen hangi sınıfın nesnesi ise ondan gelen fonksiyon kullanılır
    s.display();
	system("pause");
	return 0;
}