#include <iostream>
#include <string>
#include <unistd.h>
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
    int currenthp = 5;//hp flag
    int result = 0;
    int s1, s2;
    char cont = 'y';
    int turn=1; //turn count
    a.mainmenu();
    
    while ((cont == 'y'|| cont == 'Y') && a.return_flag()<16 && result !=8 && currenthp>0){
        
        system("clear");
        a.showHP();
        s1 = a.loopmenu(1,result,list,turn,explore);
        system("clear");
        a.showHP();
        s2 = a.loopmenu(2,result,list,turn,explore);/////
        result = a.check(s1, s2);
        a.addmenu(result,list);
        a.newele(result);
        cin.ignore(100, '\n');
        // cin.get();
        system("clear");

        a.callDisaster();

        explore.description();
        cout<<"            \" Press Enter to continue . . . \""<<endl<<endl;

        cin.ignore(10, '\n');
        system("clear");

        explore.description();
        char exploreChoice = '0';
        cout<<" Do you wish to explore? (Y/N): ";
        cin>>exploreChoice;

        if(exploreChoice =='y' || exploreChoice == 'Y'){
            explore.randomEvent();
            cin.get();
            exploreChoice == 'n';
        }  
        
        currenthp = a.return_mainhp();  
        if(currenthp < 0) break; 

        usleep(300000);

        cout<<"  -------------------\033[1m|  Inventory  |\033[0m--------------------- "<<endl;                    
        explore.cleanDisplay();
        explore.specialDisplay();

        cout<<endl<<"\033[32m   Y : Continue your journey\033[0m |\033[31m N : Give up \033[0m : ";
        cin>>cont;
        
        
        turn++;
    }

    a.gameexit(explore);
    cin.get();
    return 0;
}
