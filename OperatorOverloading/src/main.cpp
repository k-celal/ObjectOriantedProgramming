#include <iostream>
using namespace std;
class NOKTA
{
private:
	int x;
	int y;
	int c[5];
public:
	~NOKTA();
	NOKTA(){}
	NOKTA(int, int);
	int get_x();
	int get_y();
	void set_x(int);
	void set_y(int);
	NOKTA operator+(const NOKTA &);
	bool operator==(const NOKTA &);
	bool operator!=(const NOKTA &);
	NOKTA operator++();
	NOKTA operator++(int);
	void operator--();
	void operator--(int);
	
	
	friend ostream& operator<<(ostream &objout, const NOKTA &n1)
	{
		objout << "x : " << n1.x << endl
			   << "y : " << n1.y << endl;
		return objout;
	}
	friend istream& operator>>(istream &objin, NOKTA &n1)
	{
		cout << "x :";
		objin >> n1.x;
		cout << "y :";
		objin >> n1.y;
		return objin;
	}
	
};
// NOKTA::NOKTA()
// {
// 	this->x = 0;
// 	this->y = 0;
// }
NOKTA::NOKTA(int x, int y)
{
	this->x = x;
	this->y = y;
}
NOKTA::~NOKTA()
{
	// cout << "Nokta silindi" << endl;
}
int NOKTA::get_x()
{
	return this->x;
}
int NOKTA::get_y()
{
	return this->y;
}
void NOKTA::set_x(int x)
{
	this->x = x;
}
void NOKTA::set_y(int y)
{
	this->y = y;
}
NOKTA NOKTA::operator+(const NOKTA &a)
{
	NOKTA temp(x + a.x, y + a.y);
	return temp;
}
NOKTA operator-(NOKTA &a, NOKTA &b)
{
	NOKTA temp((a.get_x() - b.get_x()), (a.get_y() - b.get_y()));
	return temp;
}
bool NOKTA::operator==(const NOKTA &a)
{
	if (x == a.x && y == a.y)
		return true;
	return false;
}
bool NOKTA::operator!=(const NOKTA &a)
{
	if (x != a.x || y != a.y)
		return true;
	return false;
}
//++x islevini gorur
NOKTA NOKTA::operator++(){
	++x;
	++y;
}
//x++ islevini gorur
NOKTA NOKTA::operator++(int){
	NOKTA temp(temp.get_x(),temp.get_y());
	x++;
	y++;
	return temp;
}
void NOKTA::operator--(){
	--x;
	--y;
}
void NOKTA::operator--(int){
	x--;
	y--;
}

int main(int argc, char *argv[])
{
	int noktaSayisi;
	cout<<"Kac Nokta olusturmak istiyorsunuz"<<endl;
	cin>>noktaSayisi;
	string secim;
	NOKTA* N=new NOKTA[noktaSayisi];  
	cout<<"Nokta bilgilerini giriniz"<<endl;
	for (int i = 0; i < noktaSayisi; i++)
	{
		cin>>N[i];
	}
	while(true)
	{
		cout<<"Yapmak istediginiz islemi seciniz"<<endl
			<<"1-iki nokta toplama"<<endl
			<<"2-iki nokta cikarma"<<endl
			<<"3-Nokta x ve y 1 artirma"<<endl
			<<"4-Nokta bilgi degisme"<<endl
			<<"5-Nokta karsilastirma"<<endl
			<<"6-iki nokta arasi uzaklik bulma"<<endl
			<<"q-Cikis"<<endl
			<<"seciminiz : ";
		cin>>secim;
		if (secim=="q")
		{
			cout<<"Thank You:)"<<endl;
			break;
		}
		else if (secim=="1")
		{
			cout<<"Hangi noktalari toplamak istiyorsunuz"<<endl;
			int s1,s2;
			cin>>s1>>s2;
			if (s1<noktaSayisi&&s2<noktaSayisi)
			{
				cout<<N[s1]+N[s2];
			}else{
				cout<<"Belirttiginiz noktalar bulunamiyor lutfen dikkat ediniz"<<endl;
			}
			
		}
		else if (secim=="2")
		{
			cout<<"Hangi noktalari cikarmak istiyorsunuz"<<endl;
			int s1,s2;
			cin>>s1>>s2;
			if (s1<noktaSayisi&&s2<noktaSayisi)
			{
				cout<<N[s1]-N[s2];
			}else{
				cout<<"Belirttiginiz noktalar bulunamiyor lutfen dikkat ediniz"<<endl;
			}
		}
		else if (secim=="3")
		{
			cout<<"Hangi noktayi 1 artirmak istiyorsunuz"<<endl;
			int s1;
			cin>>s1;
			if (s1<noktaSayisi)
			{
				N[s1]++;
				cout<<N[s1];
			}else{
				cout<<"Belirttiginiz nokta bulunamiyor lutfen dikkat ediniz"<<endl;
			}
		}
		else if (secim=="4")
		{
			cout<<"Hangi noktanin bilgisini degistirmek istiyorsunuz"<<endl;
			int s1;
			cin>>s1;
			if (s1<noktaSayisi)
			{
				int x,y;
				cout<<"Yapmak istediginiz yeni koordinatlari giriniz"<<endl;
				cin>>x>>y;
				N[s1].set_x(x);
				N[s1].set_y(y);
				cout<<N[s1];
			}else{
				cout<<"Belirttiginiz nokta bulunamiyor lutfen dikkat ediniz"<<endl;
			}
		}
		else if (secim=="5")
		{
			cout<<"Hangi noktalari karsilastirmak istiyorsunuz"<<endl;
			int s1,s2;
			cin>>s1>>s2;
			if (s1<noktaSayisi&&s2<noktaSayisi)
			{
				if (N[s1]==N[s2])
				{
					cout<<"Noktalar Ayni"<<endl;		
				}
				else{
					cout<<"Noktalar Farkli"<<endl;		
				}
				
			}else{
				cout<<"Belirttiginiz nokta bulunamiyor lutfen dikkat ediniz"<<endl;
			}
		}
		else if (secim=="6")
		{
			cout<<"Hangi iki nokta arasi uzaklik bulmak istiyorsunuz"<<endl;
			int s1,s2;
			cin>>s1>>s2;
			if (s1<noktaSayisi&&s2<noktaSayisi)
			{
				cout<<N[s1]+N[s2];
			}else{
				cout<<"Belirttiginiz noktalar bulunamiyor lutfen dikkat ediniz"<<endl;
			}
			
		}
		else{
			cout<<"Yanlis secim kontrol ediniz"<<endl;
		}
		

	}	
	
	return 0;
}