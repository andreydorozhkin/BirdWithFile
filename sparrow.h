#pragma once
#include "bird.h"


using namespace std;

class Sparrow : public Bird{
    public:
        Sparrow(string name, string surname, string fathername, int age, bool is_male);
        string type();
        string voice();
    
};