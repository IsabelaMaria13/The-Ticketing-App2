#pragma once
#include<iostream>
#include<string>
using namespace std;

class Eveniment
{
private:
	string nume_eveniment;
	string ora;
	string data;

public:
	Eveniment();
	Eveniment(string, string, string);

	string getNumeEveniment();
	string getOra();
	string getData();

	void setNumeEveniment(string);
	void setOra(string);
	void setData(string);
	
	Eveniment(Eveniment& event);
	Eveniment& operator=(const Eveniment& eventNou);
	~Eveniment();

};