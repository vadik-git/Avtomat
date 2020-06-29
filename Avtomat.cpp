#include "Avtomat.h"

void Avtomat::setNumber(int & number)
{
	this->number = number;
}

int Avtomat::getNumber()
{
	return number;
}

void Avtomat::print()
{
	cout << "number" << number << endl;
}

int Avtomat::operator+=(int other)
{
	return this->number=this->number+other;
}

void Magaz::pushBack(Avtomat & avt)
{
	for (size_t i = 0; i < 29; i++)
	{
		avtomat.push_back(avt += 1);
	}
}

void Magaz::popFront(int Fire)
{
	int i = 0;
	srand(time(0));
	if (Fire > avtomat.size()) {
		cout << "MANY SHOTS" << endl;
		return;
	}
	if (avtomat.size() > 0) {
		for (size_t i = 0; i < Fire; i++)
		{
			int rands = rand() % 2;
			avtomat.pop_front();

			cout << "Avtomat number " << i + 1 << "fire";

			if (rands == 1) {
				cout << "and target was down" << endl;

			}
			else {
				cout << "and you missted " << endl;
			}



		}
	}
	else {
		cout << "magazin empty" << endl;
		return;
	}
}

void Magaz::show()
{
	for (auto a : avtomat) {
		cout << "avtomat numb >>";
		a.print();
     }
}

void Rifle::Magazin(Magaz & magazinn)
{
	magaz.push_back(magazinn);
}

void Rifle::ShowMagazin()
{
	for (auto a : magaz) {
		a.show();
	}
}

void Rifle::fire(int Shots)
{
	for (auto &a : magaz) {
		a.popFront(Shots);
	}
}
