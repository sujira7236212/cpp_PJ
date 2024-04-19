#include <iostream>
#include <string>
#include "menu.h"
#include "BST.h"
#include "menu.cpp"
#include "BST.cpp"
#include "first.h"
#include "first.cpp"
using namespace std;

int main() {
    menu a; // Create a menu object

    int s1, s2;
    while (true) {
        cout << "Entering loop" << endl;

        // Obtain first input from the menu
        s1 = a.loopmenu1();

        // Obtain second input from the menu
        s2 = a.loopmenu2();

        // Check the inputs and add them to the menu
        int result = a.check(s1, s2);

        // Add the result to the menu
        a.addmenu(result);
    }

    return 0;
}