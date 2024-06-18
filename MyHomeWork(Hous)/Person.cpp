#include "Person.h"  
#include <iostream>

using namespace std; 



Person::Person(const char* sur, const char* nam, const char* mid, int ag)
{
	this->name = new char[strlen(nam) + 1];
	strcpy_s(this->name, strlen(nam) + 1, nam);

	this->surname = new char[strlen(sur) + 1];
	strcpy_s(this->surname, strlen(sur) + 1, sur);

	this->middleName = new char[strlen(mid) + 1];
	strcpy_s(this->middleName, strlen(mid) + 1, mid);

	age = ag; 

}

Person::~Person()
{
	delete[] name;
	delete[] surname;
	delete[] middleName;
	age = 0;
}

// Оператор присваивания 
Person& Person::operator=(const Person& obj) 
{
	if (this != &obj) 
	{
		SetName(obj.name); 
		SetSurname(obj.surname); 
		SetMiddleName(obj.middleName);   
		age = obj.age; 
	}
	return *this;
}

Person::Person(const Person& b)
{
	this->name = new char[strlen(b.name) + 1];
	strcpy_s(this->name, strlen(b.name) + 1, b.name);

	this->surname = new char[strlen(b.surname) + 1];
	strcpy_s(this->surname, strlen(b.surname) + 1, b.surname);

	this->middleName = new char[strlen(b.middleName) + 1];
	strcpy_s(this->middleName, strlen(b.middleName) + 1, b.middleName); 

	age = b.age; 
	cout << "Person Copy constructor\n"; 
}

void Person::SetName(const char* nam)
{
	if (this->name != nullptr)
	{
		delete[] name; // Удаление предыдущей строки! 
	}
	this->name = new char[strlen(nam) + 1];
	strcpy_s(this->name, strlen(nam) + 1, nam); 

}

void Person::SetSurname(const char* sur) 
{
	if (this->surname != nullptr)
	{
		delete[] surname; // Удаление предыдущей строки! 
	} 
	this->surname = new char[strlen(sur) + 1];
	strcpy_s(this->surname, strlen(sur) + 1, sur);
}

void Person::SetMiddleName(const char* mid)
{
	if (this->middleName != nullptr)
	{
		delete[] middleName; // Удаление предыдущей строки!  
	}
	this->middleName = new char[strlen(mid) + 1];
	strcpy_s(this->middleName, strlen(mid) + 1, mid);
}

void Person::SetAge(int ag)  
{
	if (0 > ag < 150)
	{
		age = ag;
	}
}

const char* Person::GetName() const
{
	return name;
}

const char* Person::GetSurname() const
{
	return surname;
}

const char* Person::GetMiddleName() const
{
	return middleName;
}

int Person::GetAge() const
{
	return age; 
}

void Person::Print() const
{
	cout << "Person: " << surname << " " << name << " " << middleName<< "\t Age: " << age << endl; 
}
