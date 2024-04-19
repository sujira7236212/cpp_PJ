#include <iostream>
#include <string>
#include "challenge.h"

void challenge:: description(){
    cout<<"Lorem ipsum"<<endl;
}

bool challenge:: random(){
    srand(time(NULL));
    if (rand() % 2 == 0) {
        occured = true;
        
    }
    return occured;
}
