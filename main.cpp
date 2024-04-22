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
    int result = 0;
    int s1, s2, cont;
    int turn=0; //turn count
    a.mainmenu();
    while (a.return_flag()<16 && result !=8){
        system("clear");
        cout<<"Turn: "<<turn<<endl;
        a.newele(result);
        s1 = a.loopmenu(1,result,list);
        system("clear");
        cout<<"Turn: "<<turn<<endl;
        a.newele(result);
        s2 = a.loopmenu(2,result,list);/////
        result = a.check(s1, s2);
        a.addmenu(result,list);
        // a.exploreMenu(); //turn system
        turn++;
        
    }
    a.gameexit();
    
    return 0;
}