#include <iostream>
#include <string>
// #include "menu.h"
#include "BST.h"
// #include "menu.cpp"
#include "BST.cpp"
#include "challenge/challenge.h"
#include "challenge/challenge.cpp"
#include "challenge/event.h"
#include "challenge/event.cpp"
#include "challenge/popQuiz.cpp"
#include "challenge/disaster.h"
#include "challenge/disaster.cpp"
using namespace std;

int main(){
    disaster fire("FO REHHHH", 1);
    fire.description();
    fire.isSolved(1);
    return 0;
}