#include "Apartment.h"
#include <iostream>

using namespace std;

// Конструктор с параметром
Apartment::Apartment(int coun)
{
	this->count = coun; // Инициализация переменной count
	people = new Person[coun]; // Выделение памяти для массива людей
}

// Деструктор
Apartment::~Apartment()
{
    delete[] people;
    count = 0;
}

// Конструктор копирования
Apartment::Apartment(const Apartment& b) 
{
    count = b.count;
    people = new Person[count];
    for (int i = 0; i < count; ++i) 
    {
        people[i] = b.people[i];
    }


}

// Оператор присваивания
Apartment& Apartment::operator=(const Apartment& obj)
{
    if (this != &obj) 
    {
        count = obj.count;
        people = new Person[count];
        for (int i = 0; i < count; ++i) 
        {
            people[i] = obj.people[i];
        }
    }
    return *this;
} 

// Метод добавления человека в квартиру
void Apartment::addPerson(const Person& person, int index)
{
    if (index >= 0 && index < count) 
    {
        people[index] = person; 
    }
}

// Метод отображения информации о квартире
void Apartment::Print() const
{
    cout << "Apartment with " << count << " people:" << endl;
    for (int i = 0; i < count; ++i) 
    {
        people[i].Print();  
    }
}

// Методы установки и получения данных о квартире
void Apartment::SetApartment(int count, Person* peop) 
{
    if (this->people != nullptr)
    {
        delete[] people; // Удаление предыдущей строки! 
    }
    this->count = count;
    this->people = new Person[count];
    for (int i = 0; i < count; ++i) 
    {
        this->people[i] = peop[i]; 
    }
}

Person* Apartment::GetApartment(int& count) const 
{
    count = this->count;
    return this->people;
}
