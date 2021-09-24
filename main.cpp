#include <iostream>

#include "bird.h"
#include "sparrow.h"
#include "goose.h"

using namespace std;

int main(){
Goose A("Ivan", "Ivanov", "Alexandrovich", 43, false);
cout <<"Type: " << A.type() << endl;
cout <<"Voice: " <<A.voice() << endl;
cout <<"Introduce:" << A.introduce() << endl;
return 0;
}
