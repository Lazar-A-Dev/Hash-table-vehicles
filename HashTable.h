#pragma once
#include<iostream>
#include"List.h"
using namespace std;
class HashTable
{
protected:
	List* table;
	int size;
	int lenght;
public:

	HashTable();
	HashTable(int p);
	~HashTable();
	void AddToTable(Vozilo p);
	int Hash(Vozilo p);
	void PrintTable();
	void Sort();
};

