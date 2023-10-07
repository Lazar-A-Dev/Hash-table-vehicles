#include<iostream>
#include"HashTable.h"
using namespace std;
void main() {
	
	try {
		HashTable p(20);
		Vozilo v1("Mercedes", "D11", 2012, 12, false);
		Vozilo v2("BMW", "S45F", 2015, 2, true);
		Vozilo v3("Opel", "Corsa", 2010, 6, false);
		Vozilo v4("Audi", "A5", 2019, 9, true);
		Vozilo v5("Yugo", "78A", 1970, 55, false);
		Vozilo v6("Ford", "ADF", 2014, 72, true);
		Vozilo v7("Ferari", "887", 1989, 23, false);
		Vozilo v8("Fiat", "EdfFr", 1996, 63, false);
		Vozilo v9("Mitsubishi", "Holo33", 2000, 36, false);
		Vozilo v10("Mazda", "76ADG", 1997, 13, false);


		p.AddToTable(v1);
		p.AddToTable(v2);
		p.AddToTable(v3);
		p.AddToTable(v4);
		p.AddToTable(v5);
		p.AddToTable(v6);
		p.AddToTable(v7);
		p.AddToTable(v8);
		p.AddToTable(v9);
		p.AddToTable(v10);

		p.PrintTable();
		p.Sort();
		p.PrintTable();

		system("pause");
	}
	catch (char* p) {
		cout << p << endl;
	}
	
}