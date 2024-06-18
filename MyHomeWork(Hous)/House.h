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

	House& operator=(const House& obj); // �������� ������������    

	// ����� ���������� �������� � ��������
	void addApartment(const Apartment& person, int index);

	// ����� ����������� ���������� � ��������
	void Print()const;

	// ������ ��������� � ��������� ������ � ��������
	void SetHouse(int count, Apartment* apartment); 
	Apartment* GetHouse(int& count) const; 
}; 

