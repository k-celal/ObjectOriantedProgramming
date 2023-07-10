#include <iostream>
#include <vector>

using namespace std;

int main() {
    cout << "------------------ V1 ------------------" << endl;
    vector <int> v1;
    cout << "Size : " << v1.size() << endl;
    v1.push_back(20);
    cout << "v1[0] : " << v1[0] << endl;
    cout << "Size : " << v1.size() << endl;
    cout << "------------------ V2 ------------------" << endl;
    vector <int> v2(10);
    for(int i = 0;i < v2.size();i++)
        cout << v2[i] << "\t";
    cout << endl;
    cout << "Size : " << v2.size() << endl;
    cout << "------------------ V3 ------------------" << endl;
    vector <int> v3(10,5);
    for(int i = 0;i < v3.size();i++)
        cout << v3[i] << "\t";
    cout << endl;
    cout << "Size : " << v3.size() << endl;
    cout << "------------------ V3 ------------------" << endl;
    vector <int> v4;
    v4.assign(10, 2);
    for(int i = 0;i < v4.size();i++)
        cout << v4[i] << "\t";
    cout << endl;
    cout << "Size : " << v4.size() << endl;
    int a = v4.back();
    cout << "a : " << a << endl;
    v4.pop_back();
    for(int i = 0;i < v4.size();i++)
        cout << v4[i] << "\t";
    cout << endl;
    cout << "Size : " << v4.size() << endl;
    v4[0] = 31;
	cout<<v4[0]<<endl;
    auto b = v4.begin();
    cout << *b << endl;
    b++;
    cout << *b << endl;
    
    return 0;
}