#include "locatii.h"
#include<iostream>
#include<string>
using namespace std;

Locatii::Locatii()
{
	adresa = nullptr;
	sector = "";
	nr_locuri = 0;
	rand_loc = nullptr;
}

Locatii::Locatii(char* adresa, string sector, int rand, int loc)
{
	delete[] this->adresa;
	this->adresa = new char[strlen(adresa) + 1];
	strcpy_s(this->adresa, strlen(adresa) + 1, adresa);
	this->sector = sector;
	this->
}

char* Locatii::getAdresa()
{
	return adresa;
}

void Locatii::setAdresa(char* adresa)
{
	if (adresa != nullptr) 
	{
		delete[] this->adresa;
		this->adresa = new char[strlen(adresa) + 1];
		strcpy_s(this->adresa, strlen(adresa) + 1, adresa);
	}

}
string Locatii::getSector()
{
	return sector;
}
void Locatii::setSector(string sector)
{
	if (sector != "")
		this->sector = sector;
}
int Locatii::getRand()
{
	return rand;
}

void Locatii::setRand(int rand)
{
	if (rand != -1)
		this->rand = rand;
}

int Locatii::getLoc()
{
	return loc;
}

void Locatii::setLoc(int loc)
{
	if (loc != -1)
		this->loc = loc;
}

Locatii::Locatii(Locatii& locatie)
{
	delete[] adresa;
	adresa = new char[strlen(locatie.adresa) + 1];
	strcpy_s(adresa, strlen(locatie.adresa) + 1, locatie.adresa);
	sector = locatie.sector;
	rand = locatie.rand;
	loc = locatie.loc;
}
Locatii& Locatii:: operator=(const Locatii& locatieNoua)
{
	if (this != &locatieNoua)
	{
		if (this != nullptr)
		{
			delete[] adresa;
		}
		if (locatieNoua.adresa != nullptr)
		{
			adresa = new char[strlen(locatieNoua.adresa) + 1];
			strcpy_s(adresa, strlen(locatieNoua.adresa) + 1, locatieNoua.adresa);
		}
		sector = locatieNoua.sector;
		rand = locatieNoua.rand;
		loc = locatieNoua.loc;
	}
	return *this;
}
Locatii::~Locatii()
{
	delete[] adresa;
	adresa = nullptr;
}

