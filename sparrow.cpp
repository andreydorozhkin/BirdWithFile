#include "sparrow.h"


Sparrow::Sparrow(string name, string surname, string fathername, int age, bool is_male):Bird(name, surname, fathername, age, is_male){}

string Sparrow::type(){return "sparrow";}
string Sparrow::voice(){return "chick-chirik";}