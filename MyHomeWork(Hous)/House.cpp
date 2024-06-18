#include "House.h"
#include <iostream>

using namespace std;

// ����������� � ����������
House::House(int coun) 
{
    this->count = coun; // ������������� ���������� count
    apartment = new Apartment[coun]; // ��������� ������ ��� ������� ����� 
}


// ����������
House::~House()
{
    delete[] apartment;
    count = 0;
}

// ����������� �����������
House::House(const House& b)   
{
    count = b.count;
    apartment = new Apartment[count];
    for (int i = 0; i < count; ++i)
    {
        apartment[i] = b.apartment[i];  
    }
}

House& House::operator=(const House& obj) 
{
    if (this != &obj)
    {
        delete[] apartment;
        count = obj.count;
        apartment = new Apartment[count];
        for (int i = 0; i < count; ++i) 
        {
            apartment[i] = obj.apartment[i];
        }
    }
    return *this;
}

// ����� ���������� �������� � ��������
void House::addApartment(const Apartment& apart, int index) 
{
    if (index >= 0 && index < count)
    {
        apartment[index] = apart; 
    }
}

// ����� ����������� ���������� � ��������
void House::Print() const
{
    cout << "House with " << count << " apartment:" << endl;
    for (int i = 0; i < count; ++i)
    {
        apartment[i].Print();  
    }
}



// ������ ��������� � ��������� ������ � ��������
void House::SetHouse(int count, Apartment* apart)  
{
    if (this->apartment != nullptr)
    {
        delete[] apartment; // �������� ���������� ������! 
    }
    this->count = count;
    this->apartment = new Apartment[count];  
    for (int i = 0; i < count; ++i) 
    {
        this->apartment[i] = apart[i]; 
    }
}

Apartment* House::GetHouse(int& count) const 
{
    count = this->count;
    return this->apartment; 
}

