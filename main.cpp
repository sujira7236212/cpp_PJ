#include <iostream>
#include <string>
#include "menu.h"
#include "BST.h"
#include "menu.cpp"
#include "BST.cpp"
using namespace std;

int main() {
    menu a; 
    int s1, s2;
    while (a.return_flag()<15){
        s1 = a.loopmenu1();
        s2 = a.loopmenu2();
        int result = a.check(s1, s2);
        a.addmenu(result);
    }
    return 0;
}