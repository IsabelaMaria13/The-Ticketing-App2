#pragma once
#include<iostream>
#include<string>
using namespace std;

class Locatii
{
private:
	char* adresa;
	string sector;
	int** rand_loc;
	int nr_locuri;

public:
	Locatii();
	Locatii(char*, string, int**, int);

	char* getAdresa();
	string getSector();
	int** getRandLoc();

	void setAdresa(char*);
	void setSector(string);
	void setRandLoc(int**,int);
	
	Locatii(Locatii& locatie);
	Locatii& operator=(const Locatii& locatieNoua);
	~Locatii();

};

