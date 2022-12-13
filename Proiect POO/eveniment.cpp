#include"eveniment.h"
#include<iostream>
#include<string>
using namespace std;

Eveniment::Eveniment()
{
	nume_eveniment = "";
	ora = "";
	data = "";
}
Eveniment::Eveniment(string nume_eveniment, string ora, string data)
{
	this->nume_eveniment = nume_eveniment;
	this->ora = ora;
	this->data = data;
}

string Eveniment::getNumeEveniment()
{
	return nume_eveniment;
}
string Eveniment::getOra()
{
	return ora;
}
string Eveniment::getData()
{
	return data;
}

void Eveniment::setNumeEveniment(string nume_eveniment) 
{
	if (nume_eveniment != "")
		this->nume_eveniment = nume_eveniment;
}
void Eveniment::setOra(string ora)
{
	if (ora != "")
		this->ora = ora;
}
void Eveniment::setData(string data)
{
	if (data != "")
		this->data = data;
}

Eveniment::Eveniment(Eveniment& event)
{
	nume_eveniment = event.nume_eveniment;
	ora = event.ora;
	data = event.data;
}
