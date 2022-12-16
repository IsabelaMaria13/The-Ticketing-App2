#include "bilet.h"
#include<iostream>
#include<string>
using namespace std;

Bilet::Bilet():nr_maxim_bilete(0)
{   
	id = 0;
	nume_persoana = "";
	tip_bilet = "";
	pret = 0;
	nr_bilete = 0;
}
Bilet::Bilet(int id, string nume_persoana, string tip_bilet, int pret, int nr_bilete):nr_maxim_bilete(nr_maxim_bilete)
{
	this->id = id;
	this->nume_persoana = nume_persoana;
	this->tip_bilet = tip_bilet;
	this->pret = pret;
	this->nr_bilete = nr_bilete;
	
}

int Bilet::getId()
{
	return id;
}
string Bilet::getNumePersoana()
{
	return nume_persoana;
}
string Bilet::getTipBilet()
{
	return tip_bilet;
}
int Bilet::getPret()
{
	return pret;
}
int Bilet::getNrBilete()
{
	return nr_bilete;
}
void Bilet::setId(int id)
{
	if (id > 0)
		this->id = id;
}
void Bilet::setNumePersoana(string nume_persoana)
{
	if (nume_persoana != "")
		this->nume_persoana = nume_persoana;
}
void Bilet::setTipBilet(string tip_bilet)
{
	if (tip_bilet != "")
		this->tip_bilet = tip_bilet;
}
void Bilet::setPret(int pret)
{
	if (pret != 0)
		this->pret = pret;
}
void Bilet::setNrBilete(int nr_bilete)
{
	if ((nr_bilete != 0)&&(nr_bilete<nr_maxim_bilete))
		this->nr_bilete = nr_bilete;
}
//static void Bilet::EmitereBilete(int x)
//{
	//nr_bilete_emise += x;
//}
Bilet Bilet::operator--(int i)
{
	Bilet copie = *this;
	pret--;
	return copie;
}
int Bilet::operator-(int mai_ieftin) //nu merge 
{
	pret = mai_ieftin;
	return pret;
}
int Bilet::afla_valoarea_de_plata(int pret, int nr_bilete)
{
	pret = pret * nr_bilete;
	return pret;
}

int Bilet::Discount(int procent) //nu merge
{
	float p = 0;
	if (procent >= 1 && procent <= 50)
		p = (procent / 100);
	pret = pret - p * pret;
	return pret;
}
Bilet::Bilet(Bilet& bilete):nr_maxim_bilete(bilete.nr_maxim_bilete)
{
	id = bilete.id;
	nume_persoana = bilete.nume_persoana;
	tip_bilet = bilete.tip_bilet;
	pret = bilete.pret;
	nr_bilete = bilete.nr_bilete;
}
istream& operator>>(istream& in, Bilet& b)
{
	cout << "Introduceti id bilet: ";
	in >> b.id;

	cout << "Introduceti numele participantului: ";
	in.get();
	getline(in, b.nume_persoana);

	cout << "Introduceti tipul biletului: ";
	in >>b.tip_bilet;

	cout << "Introduceti pretul biletului: ";
	in >> b.pret;

	cout << "Introduceti numarul de bilete: ";
	in >> b.nr_bilete;

	return in;

}

ostream& operator<<(ostream& out, Bilet b)
{
	cout << "Id bilet este:";
	out << b.id << endl;

	cout << "Numele participantului este:";
	out << b.nume_persoana<<endl;

	cout << "Tipul biletului este: ";
	out << b.tip_bilet<<endl;

	cout << "Pretul biletului este:";
	out << b.pret<<endl;

	cout << "Numarul de bilete este: ";
	out << b.nr_bilete<<endl;

	
	return out;
}
