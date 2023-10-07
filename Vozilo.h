#pragma once
#include<iostream>
using namespace std;
class Vozilo {
protected:
	Vozilo* next;
	string nazivMarke;//Peugeot
	string oznakaModela;//508
	int godiste;//2013
	int redniBroj;//treci 003
	bool zauzeto;
	//P5_2013_003
public:
	Vozilo() {
		next = NULL;
		nazivMarke = "";
		oznakaModela = "";
		godiste = 0;
		redniBroj = 0;
		zauzeto = false;
	}

	Vozilo(string nazivMarke, string oznakaModela, int godiste, int redniBroj, bool zauzeto) {
		this->next = NULL;
		this->nazivMarke = nazivMarke;
		this->oznakaModela = oznakaModela;
		this->godiste = godiste;
		this->redniBroj = redniBroj;
		this->zauzeto = zauzeto;
	}

	Vozilo(Vozilo* next, string nazivMarke, string oznakaModela, int godiste, int redniBroj, bool zauzeto) {
		this->next = next;
		this->nazivMarke = nazivMarke;
		this->oznakaModela = oznakaModela;
		this->godiste = godiste;
		this->redniBroj = redniBroj;
		this->zauzeto = zauzeto;
	}

	~Vozilo() {}

	void ChangeVozilo(string nazivMarke, string oznakaModela, int godiste, int redniBroj, bool zauzeto) {
		this->nazivMarke = nazivMarke;
		this->oznakaModela = oznakaModela;
		this->godiste = godiste;
		this->redniBroj = redniBroj;
		this->zauzeto = zauzeto;
	}

	Vozilo* ReturnNext() { return next; }
	string ReturnNazivMarke() { return nazivMarke; }
	string ReturnOznakaModela() { return oznakaModela; }
	int ReturnGodiste() { return godiste; }
	int ReturnRedniBroj() { return redniBroj; }
	bool ReturnZauzeto() { return zauzeto; }

	void Print() {
		string naziv = ReturnNazivMarke();
		string oznaka = ReturnOznakaModela();
		if (ReturnRedniBroj() < 99)
			cout << naziv[0] << oznaka[0] << "_" << ReturnGodiste() << "_" << "0" << ReturnRedniBroj() << "_[" << ReturnZauzeto() << "]" << endl;
		else
			cout << naziv[0] << oznaka[0] << "_" << ReturnGodiste() << "_" << ReturnRedniBroj() << "_[" << ReturnZauzeto() << "]" << endl;
	}

};
