#pragma once
#include "Apartment.h"


class House
{
	Apartment* apartment;
	int count;

public:
	House() = default;
	House(int coun);

	~House();

	House(const House& b); // copy constructor  

	House& operator=(const House& obj); // Оператор присваивания    

	// Метод добавления человека в квартиру
	void addApartment(const Apartment& person, int index);

	// Метод отображения информации о квартире
	void Print()const;

	// Методы установки и получения данных о квартире
	void SetHouse(int count, Apartment* apartment); 
	Apartment* GetHouse(int& count) const; 
}; 

