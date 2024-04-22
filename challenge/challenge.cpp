#include <iostream>
#include <string>
#include "challenge.h"

bool challenge:: random( int n){
    srand(time(NULL));
    if (rand() % n == 0) {
        occured = true;
    }
    return occured;
}