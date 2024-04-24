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
    event explore;
    // a.cleanArrayPtr = a.getArr(explore.clean[4]);
    // a.specialArrayPtr = a.getArr(explore.special[4]);
    int result = 0;
    int s1, s2;
    char cont = 'y';
    int turn=1; //turn count
    a.mainmenu();
    while (cont == 'y'|| cont == 'Y' && a.return_flag()<16 && result !=8){

        system("clear");
        s1 = a.loopmenu(1,result,list,turn);
        system("clear");
        s2 = a.loopmenu(2,result,list,turn);/////
        result = a.check(s1, s2);
        a.addmenu(result,list);
        a.newele(result);
        cin.get();
        cin.get();
        system("clear");
        
        // explore.description();
        // cout<<"         \" Press any key to to continue . . . \""<<endl<<endl;
        // cin.get();
        // system("clear");
        explore.description();
        char exploreChoice = '0';
        cout<<"Do you wish to explore? (Y/N): ";
        cin>>exploreChoice;

        if(exploreChoice =='y' || exploreChoice == 'Y'){
            explore.randomEvent();
            cin.get();
            exploreChoice == 'n';
        }

        explore.cleanDisplay();
        explore.specialDisplay();

        cout<<"Continue? (Y/N): ";
        cin>>cont;
        
        turn++;
    }
    a.gameexit();
    
    return 0;
}