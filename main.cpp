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
    int s1, s2;
    char cont = 'y';
    int turn=1; //turn count
    a.mainmenu();
    while (cont == 'y'|| cont == 'Y' && a.return_flag()<16 && result !=8){

        
        s1 = a.loopmenu(1,result,list,turn);
        // system("clear");
        a.newele(result);

        s2 = a.loopmenu(2,result,list,turn);/////
        result = a.check(s1, s2);

        a.addmenu(result,list);
        a.newele(result);
        
        
        event explore;
        explore.description();
        char exploreChoice;
        cout<<"Do you wish to explore? (Y/N): ";
        cin>>exploreChoice;

        if (exploreChoice == 'y'||'Y'){
            explore.randomEvent();
            explore.craftMenu();

            explore.cleanDisplay();
            explore.specialDisplay();
        } else if (exploreChoice == 'n' || 'N'){
            break;
        }

        cout<<"Continue? (Y/N): ";
        cin>>cont;
        
        turn++;
    }
    a.gameexit();
    
    return 0;
}