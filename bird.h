#pragma once
#include <string>


using namespace std;

class Bird
{
private:
	string name;
	string surname;
	string fathername;
	int age;
	bool is_male;

public:
	Bird(string name, string surname, string fathername, int age, bool is_male);
	string getName();
	string getSurname();
	string getFathername();
	int getAge();
	bool getIsMale();
	void setName(string name);
	void setSurname(string surname);
	void setFathername(string fathername);
	void setAge(int age);
	void setIsMale(bool is_male);
	

	virtual string type();
	virtual string voice();
	
	string introduce();
	
};
