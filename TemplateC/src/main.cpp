#include <iostream>
using namespace std;
template <class Type>
class Number{
	private:
	Type data;
	template <class type>
	friend ostream& operator<<(ostream&,const Number<type>&);
	template <class type>
	friend istream& operator>>(istream&,Number<type>&);
	public:
	Number(Type data=0){
		this->data=data;
	}
	Type getData(){
		return data;
	}
	Type operator+(const Number&);
	void operator+=(Type constantVal);
	void operator+=(const Number&);

};
template <class Type>
Type Number<Type>::operator+(const Number& numberObj){
	return data+ numberObj.data;
}
template <class Type>
void Number<Type>::operator+=(Type numberObj){
	data+=numberObj;
}
template <class Type>
void Number<Type>::operator+=(const Number& numberObj){
	data+=numberObj.data;
}
template <class Type>
ostream& operator<<(ostream& outS,const Number<Type>& numberObj){
	outS<<"Number: "<<numberObj.data<<endl;
	return outS;
}
template <class Type>
istream& operator>>(istream& isObj, Number<Type>&numberObj){
	isObj>>numberObj.data;
	return isObj;
}
int main(int argc, char *argv[])
{
	Number<int> numberInt(5);
	Number<int> numberInt2(10);
	Number<float> numberfloat(3.5);
	Number<float> numberfloat2(5.5);
	Number<double> numberdouble(7.5);
	Number<float> numberdouble2(5.5);
	cout<<numberInt;
	Number<int> numberInt3;
	cin>>numberInt3;
	cout<<numberInt3;	
	system("pause");
	return 0;
}