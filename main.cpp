#include <iostream>
#include <string>
#include "menu.h"
#include "BST.h"
#include "menu.cpp"
#include "BST.cpp"
#include "challenge/challenge.h"
#include "challenge/disaster.h"
#include "challenge/event.h"
#include "challenge/event.cpp"
using namespace std;

int main() {
    DoublyLinkedList list;
    menu a;
    disaster forestFire("Forest fire!", 1);
    disaster landSlide("The soil is degraded!", 5);
    disaster people("There's a mob between men and women. Shit's gettin real bloddy rn.", 0);
    disaster realPeople("Think again!", 14);
    int result = 0;
    int s1, s2, cont;
    int turn=0; //turn count
    a.mainmenu();
    while (a.return_flag()<16 && result !=8){
        // system("clear");
        a.customDisaster();
        
        s1 = a.loopmenu(1,result,list,turn);
        // system("clear");
        a.newele(result);

        s2 = a.loopmenu(2,result,list,turn);/////
        result = a.check(s1, s2);

        a.addmenu(result,list);
        a.newele(result);
        
        //a.explore()
        
        turn++;
    }
    a.gameexit();
    
    return 0;
}

