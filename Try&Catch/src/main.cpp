#include <iostream>
#include "cassert"
#include <exception>
using namespace std;
class divisionByzero
{
private:
	string message;

public:
	divisionByzero()
	{
		message = "division by zero";
	}
	string what()
	{
		return message;
	}
};
class negativeNum:public exception{
	private:
	string message;
	public:
	negativeNum(string x="")
	{
		message=x + " cannot be negative number";

	}
	string what(){
		return message;
	}
};
int main(int argc, char *argv[])
{
	// //exception handling
	// cout << "Hello world!" << endl;
	// //asser func
	// float divisor,diviend,result;//pay
	// cout<<"Please diviend"<<endl;
	// cin>>diviend;
	// cout<<"Please divisor"<<endl;//payda
	// cin>>divisor;
	// //assert(divisor!=0);
	// result=diviend/divisor;
	// //try catch
	// float divisor,diviend,result;//pay
	// string str="divisor cannot be zero";
	// try
	// {
	// 	//exception handling
	// 	cout << "Hello world!" << endl;
	// 	cout<<"Please diviend"<<endl;
	// 	cin>>diviend;
	// 	cout<<"Please divisor"<<endl;//payda
	// 	cin>>divisor;
	// 	if(divisor==0){
	// 		throw str;
	// 	}
	// 	else if(divisor<0){
	// 		throw divisor;
	// 	}
	// 	else if(diviend<0){
	// 		throw diviend;
	// 	}
	// 	result=diviend/divisor;
	// 	cout<<result<<endl;

	// }
	// catch(const string e)
	// {
	// 	cerr << e << '\n';
	// }
	// catch(float x){
	// 	cout<<x<<"cannot be negative num"<<endl;
	// }
	// catch(...){//default always run daima en altta olmak zorunda
	// 	cout<<"default"<<endl;
	// }

	// Kendi sınıf hatalarımı kullanma
	float divisor, diviend, result;
	try
	{
		cout << "Please diviend" << endl;
		cin >> diviend;
		cout << "Please divisor" << endl; // payda
		cin >> divisor;
		if (divisor == 0)
		{
			throw divisionByzero();
		}
		else if (divisor < 0)
		{
			throw negativeNum("divisor");
		}
		else if (diviend < 0)
		{
			throw negativeNum("diviend");
		}
		result = diviend / divisor;
		cout << result << endl;
	}
	catch (divisionByzero &divisionByzeroobj)
	{
		cerr << divisionByzeroobj.what() << '\n';
	}
	catch (negativeNum &negativeObj)
	{
		cout << negativeObj.what()  << endl;
	}
	catch (...)
	{ // default always run daima en altta olmak zorunda
		cout << "default" << endl;
	}
	
	system("pause");
	return 0;
}