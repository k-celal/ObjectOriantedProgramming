#include <iostream>
using namespace std;
template <class T>
class V{
	private:
		T* data;
		int index;
	public:
		V(){
			index=0;
			data = new T[100];
		}
		void Add(T t){
			data[index++]=t;
		}
		bool isEmpty()const{
			return index==0;
		}
		void print()const{
			for (int i = 0; i < index; i++)
			{
				cout<<data[i]<<" ";
			}
			if(!isEmpty()){
				cout<<endl;
			}
			
		}
		V<T> operator+(const V<T> &v) {
			V<T> temp;
			if (T==string)
			{
				for (int i = 0; i < index; i++)
				{
					temp.Add(data[i]+" "+v.data[i]);
				}
				return temp;
			}
			
			for (int i = 0; i < index; i++)
			{
				temp.Add(data[i]+v.data[i]);
			}
			return temp;
			
		}
};

int main(int argc, char *argv[])
{
	cout << "Hello world!" <<endl;
	// V<int> v1,v2;
	// v1.Add(5);
	// v1.Add(10);
	// v1.Add(15);
	// v1.print();

	// v2.Add(20);
	// v2.Add(25);
	// v2.Add(35);
	// v2.print();

	// (v1+v2).print();

	V<string> v1,v2;
	v1.Add("Celal");
	v1.Add("Hasan");
	v1.Add("Selami");
	v1.print();

	v2.Add(" Karahan");
	v2.Add(" Duran");
	v2.Add(" Giden");
	v2.print();

	(v1+v2).print();

	system("pause");
	return 0;
}	