#pragma once
#include<list>
#include<iostream>
#include<ctime>
using namespace std;
class Avtomat
{
private:
	int number;
public:
	void setNumber(int& number);
	int getNumber();
	Avtomat() = default;
	Avtomat(int number) {
		setNumber(number);
	}
	
	void print();
	int operator+=(int other);

};
class Magaz
{
public:
	void pushBack(Avtomat& avt);
	void popFront(int Fire);
	void show();
	Magaz() = default;
private:
	list<Avtomat>avtomat;
};
class Rifle {
public:
	
	void Magazin(Magaz& magazinn);
	void ShowMagazin();
	void fire(int Shots);
	Rifle() = default;
private:
	
	list<Magaz>magaz;
};

