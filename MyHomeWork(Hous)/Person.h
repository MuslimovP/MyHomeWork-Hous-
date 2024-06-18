#pragma once
class Person 
{
	char* name = nullptr;
	char* surname = nullptr;
	char* middleName = nullptr;
	int age;

public:
	Person() = default; 
	Person(const char* nam, const char* sur, const char* mid, int ag); 

	~Person(); 
	Person(const Person& b); // copy constructor  

	
	Person& operator=(const Person& obj); // Оператор присваивания

	void SetName(const char* nam);
	void SetSurname(const char* nam);
	void SetMiddleName(const char* nam); 
	void SetAge(int ag);   

	const char* GetName()const; 
	const char* GetSurname()const; 
	const char* GetMiddleName()const;  
	int GetAge()const; 

	void Print()const;
};

