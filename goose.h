#pragma once
#include "bird.h"

class Goose:public Bird{
    public:
        Goose(string name, string surname, string fathername, int age, bool is_male);
        virtual string type();
        virtual string voice();
};