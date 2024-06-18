#include "Apartment.h"
#include <iostream>

using namespace std;

// ����������� � ����������
Apartment::Apartment(int coun)
{
	this->count = coun; // ������������� ���������� count
	people = new Person[coun]; // ��������� ������ ��� ������� �����
}

// ����������
Apartment::~Apartment()
{
    delete[] people;
    count = 0;
}

// ����������� �����������
Apartment::Apartment(const Apartment& b) 
{
    count = b.count;
    people = new Person[count];
    for (int i = 0; i < count; ++i) 
    {
        people[i] = b.people[i];
    }


}

// �������� ������������
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

// ����� ���������� �������� � ��������
void Apartment::addPerson(const Person& person, int index)
{
    if (index >= 0 && index < count) 
    {
        people[index] = person; 
    }
}

// ����� ����������� ���������� � ��������
void Apartment::Print() const
{
    cout << "Apartment with " << count << " people:" << endl;
    for (int i = 0; i < count; ++i) 
    {
        people[i].Print();  
    }
}

// ������ ��������� � ��������� ������ � ��������
void Apartment::SetApartment(int count, Person* peop) 
{
    if (this->people != nullptr)
    {
        delete[] people; // �������� ���������� ������! 
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
