#pragma once
#include<iostream>
#include"Vozilo.h"
using namespace std;
class List {
protected:
	Vozilo* head;

public:
	List() {
		head = NULL;
	}

	~List() {
	
	}

	void AddToHead(Vozilo p) {
		head = new Vozilo(head, p.ReturnNazivMarke(), p.ReturnOznakaModela(), p.ReturnGodiste(), p.ReturnRedniBroj(), p.ReturnZauzeto());

	}

	//bool operator!=(int p) {
		//return(head->ReturnGodiste() != NULL && head->ReturnNazivMarke() != "" && head->ReturnNext() != NULL && 
			//head->ReturnOznakaModela() != "" && head->ReturnRedniBroj() != NULL && head->ReturnZauzeto() != false);
	//}

	bool operator!=(int p) {
		return (head->ReturnNazivMarke() != "");
	}

	bool operator==(int p) {
		return(head == NULL);
	}

	Vozilo* Gethead() { return head; }

	bool Exists() {
		if (head != NULL)
			return true;
		return false;
	}
};
