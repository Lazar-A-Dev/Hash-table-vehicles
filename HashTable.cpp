#include "HashTable.h"
HashTable::HashTable() {
	table = NULL;
	lenght = 0;
	size = 1;
}

HashTable::HashTable(int p) {
	lenght = p;
	table = new List[p];
	size = 1;
}

HashTable::~HashTable() {
	delete[] table;
}

void HashTable::AddToTable(Vozilo p) {
	int indeks = Hash(p);
	if (!table[indeks].Exists()) {
		table[indeks].AddToHead(p);
		size++;
	}
	else {
		while (table[indeks].Exists()) {
			indeks++;
		}
		table[indeks].AddToHead(p);
		size++;
	}
}

int HashTable::Hash(Vozilo p) {
	int value = p.ReturnGodiste() / p.ReturnRedniBroj();
	value %= size;
	if(value <= lenght && value >=0)
	return value;
	
	else {
		value = lenght % size;
		return value;
	}


}

void HashTable::PrintTable() {
	cout << "HashTable: " << endl;
	for (int i = 0; i < lenght; i++) {
		cout << "[" << i << "]" << " -> ";
		Vozilo* tmp = table[i].Gethead();
		while (tmp != NULL) {
			tmp->Print();
			cout << " ";
			tmp = tmp->ReturnNext();
		}
		cout << endl;
	}
}

void HashTable::Sort() {
	for (int i = 0; i < size - 1; i++) {//mozda i<lenght-1
		for (int j = i+1; j < size - 1; j++) {
			Vozilo* tmp1 = table[i].Gethead();
			Vozilo* tmp2 = table[j].Gethead();
			if (tmp1->ReturnZauzeto() == false && tmp2->ReturnZauzeto() == true) {
				List p = table[i];
				table[i] = table[j];
				table[j] = p;
				i++;
			}
			else if (tmp1->ReturnZauzeto() == true) {
				i++;
			}
		}

	}
}