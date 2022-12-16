#pragma once
#include<iostream>
#include<string>
using namespace std;

class Bilet
{
private:
	const long nr_maxim_bilete; //constant
	static long nr_bilete_emise; //static
	int id;
	string nume_persoana;
	string tip_bilet;
	int pret;
	int nr_bilete;

public:
//constructori:
	Bilet();
	Bilet(int, string, string, int, int);
//getteri
	int getId();
	string getNumePersoana();
	string getTipBilet();
	int getPret();
	int getNrBilete();
//setteri
	void setId(int);
	void setNumePersoana(string);
	void setTipBilet(string);
	void setPret(int);
	void setNrBilete(int);
//operatori
	Bilet operator--(int);
	int operator-(int);
//metode generice
	int afla_valoarea_de_plata(int, int);
	int Discount(int);
//constructor de copiere
	Bilet(Bilet& bilete);
//metoda statica
	static void EmitereBilete(int);
//citire si afisare
	friend ostream& operator<<(ostream&, Bilet);
	friend istream& operator>>(istream&, Bilet&);
};

//long Bilet::nr_bilete_emise = 0;