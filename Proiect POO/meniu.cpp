#include"bilet.h"
#include"eveniment.h"
#include"locatii.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	
	//Locatii l((char*)"Romexpo", "sector1", 10, 9);
	//Eveniment e("Concerct Stefan Banica", "22.00", "15.12.2022");
	//Bilet b;//("Vlad Dumitru", "vip", 100, 2);
	/*Locatii b = l;
    Locatii c;
    c = l;
    cout << b<< endl<< c;
	cout << l;*/
	//cin >> b;
	//cout << b;
	//Locatii l;
	//cin >> l;
	//cout << l;
	//Eveniment e;
	//cin >> e;
	//cout << e<<endl;
	//e++;
	//e.MultiplicaNrEvenimentelor(10);
	//cout << e << endl;
	Bilet b;
	cin >> b;
	//cout << b<<endl;
	//b--;
	//cout << b;
	//cout<<b.afla_valoarea_de_plata(5,100);
	cout<<b.Discount(30);
	//cout << b;
	



}