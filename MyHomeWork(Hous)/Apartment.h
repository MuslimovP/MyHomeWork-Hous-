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

	// �������� ������������
	Apartment& operator=(const Apartment& obj); 

	// ����� ���������� �������� � ��������
	void addPerson(const Person& person, int index);   

	// ����� ����������� ���������� � ��������
	void Print()const;

	// ������ ��������� � ��������� ������ � ��������
	void SetApartment(int count, Person* people); 
	Person* GetApartment(int& count) const;  
	
};

