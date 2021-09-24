#include "bird.h"

using namespace std;


Bird::Bird(string name, string surname, string fathername, int age, bool is_male) : 
name(name), surname(surname), fathername(fathername), age(age), is_male(is_male){}
string Bird::getName(){ return name;}
string Bird::getSurname(){ return surname;}
string Bird::getFathername(){return fathername;}
int Bird::getAge(){ return age;}
bool Bird::getIsMale(){ return is_male;}

void Bird::setName(string name){ this->name = name;}
void Bird::setSurname(string surname){this->surname = surname;}
void Bird::setFathername(string fathername){this->fathername = fathername;}
void Bird::setAge(int age) {this->age = age;}
void Bird::setIsMale(bool is_male) {this->is_male = is_male;}

string Bird::type(){
	return "Bird";
};

string Bird::voice(){
	return "Hello!";
};
string Bird::introduce(){
	string sex_string;
	if(is_male){
		sex_string = "male";
	}
	else{
		sex_string = "female";
	} 
	
	return "Hello, i'm " + this->type() + ". My name is " + this->name + " " + surname + " " + fathername + "!" + "\nI'm " + to_string(age) + " years old " + sex_string + "!";
};


