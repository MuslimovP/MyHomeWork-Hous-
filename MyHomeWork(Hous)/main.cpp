#include "Person.h" 
#include "House.h"
#include "Apartment.h"
#include <iostream>

using namespace std;

int main()
{
	Person obj1("Myslimov", "Pavlo", "Idricovich", 27);
	Person obj2("Myslimov", "Kirim", "Idricovich", 29);
	Person obj3("Guro", "Alla", "Andreevna", 54);
	Person obj4("Ivanov", "Ivan", "Ivanovich", 31);
	Person obj5("Petrov", "Petro", "Petrovich", 43);
	Person obj6("Krivenco", "Oleg", "Pavlovich", 20);
	Person obj7("Cergov", "Nicita", "Dimovich", 35);
 
	// Создаем первую квартиру с тремя людьми
	Apartment apartment1(3);
	apartment1.addPerson(obj1, 0);
	apartment1.addPerson(obj2, 1);
	apartment1.addPerson(obj3, 2);

	// Создаем вторую квартиру с двумя человеком
	Apartment apartment2(2);  
	apartment2.addPerson(obj4, 0); 
	apartment2.addPerson(obj5, 1); 

	// Создаем третью квартиру с двумя человеком
	Apartment apartment3(2);  
	apartment3.addPerson(obj6, 0); 
	apartment3.addPerson(obj7, 1); 

	// Создаем дом с тремя квартирами
	House house(3);
	house.addApartment(apartment1, 0);
	house.addApartment(apartment2, 1);
	house.addApartment(apartment3, 2);

	// Отображаем содержимое дома
	house.Print();

	return 0;
}