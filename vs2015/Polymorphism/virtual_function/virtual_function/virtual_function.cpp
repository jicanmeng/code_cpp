// virtual_function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string m_strName;

	// We're making this constructor protected because
	// we don't want people creating Animal objects directly,
	// but we still want derived classes to be able to use it.
	Animal(std::string strName)
		: m_strName(strName) {
	}

public:
	std::string GetName() {
		return m_strName;
	}
	virtual const char* Speak() {
		return "???";
	}
};

class Cat : public Animal
{
public:
	Cat(std::string strName)
		: Animal(strName) {
	}
	virtual const char* Speak() {
		return "Miao";
	}
};

int main()
{
	using namespace std;

	Cat cCat("Fred");
	cout << "cCat is named " << cCat.GetName() << ", and it says " <<
		cCat.Speak() << endl;

	Animal *pAnimal = &cCat;
	cout << "pAnimal is named " << pAnimal->GetName() << ", and it says " <<
		pAnimal->Speak() << endl;

	Animal &rAnimal = cCat;
	cout << "rAnimal is named " << rAnimal.GetName() << ", and it says " <<
		rAnimal.Speak() << endl;

	return 0;
}
