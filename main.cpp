#include <iostream>
#include <string>
#include "menu.h"
#include "BST.h"
#include "menu.cpp"
#include "BST.cpp"
#include "challenge.h"
#include "challenge.cpp"
#include "disaster.h"
#include "disaster.cpp"
using namespace std;

int main() {
    DoublyLinkedList list;
    menu a;
    int result = 0;
    int s1, s2;
    while (a.return_flag()<15){
        system("clear");
        a.newele(result);
        s1 = a.loopmenu1(1,result,list);
        system("clear");
        a.newele(result);
        s2 = a.loopmenu1(2,result,list);/////
        result = a.check(s1, s2);
        a.addmenu(result,list);
    }
    return 0;
}