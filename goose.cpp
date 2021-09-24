#include "goose.h"

Goose::Goose(string name, string surname, string fathername, int age, bool is_male):Bird(name, surname,fathername, age, is_male){}

string Goose::type(){return "Goose";}
string Goose::voice(){return "qqqq";}