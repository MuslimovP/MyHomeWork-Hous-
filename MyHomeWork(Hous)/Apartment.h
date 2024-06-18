#pragma once
#include "Person.h"  

class Apartment
{
	Person* people; 
	int count;

public:
	Apartment() = default; 
	Apartment(int coun);

	~Apartment(); 

	Apartment(const Apartment& b); // copy constructor  

	// Оператор присваивания
	Apartment& operator=(const Apartment& obj); 

	// Метод добавления человека в квартиру
	void addPerson(const Person& person, int index);   

	// Метод отображения информации о квартире
	void Print()const;

	// Методы установки и получения данных о квартире
	void SetApartment(int count, Person* people); 
	Person* GetApartment(int& count) const;  
	
};

