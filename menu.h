#ifndef MENU_H
#define MENU_H

#include "BST.h"
#include "node.h"
#include "challenge/challenge.h"
#include "challenge/disaster.h"
#include "challenge/event.h"
#include "challenge/BST_event.h"
#include <string>
using namespace std;

class menu :public BST, public DoublyLinkedList{
    protected:
    string  array[16];
    // clean[4]={"Water Wheel", "Wind Mill", "Solar Panels" }, special[7]={" "," "," "," "};
    int hp = 3;
    int flag = 8; //element count

    // disaster forestFire("Forest fire!", 1);
    // disaster landSlide("The soil is degraded!", 5);
    // disaster people("There's a mob between men and women. Shit's gettin real bloddy rn.", 0);
    // disaster realPeople("Think again!", 14);
                

    public:
    menu();
    ~menu();
    void newele(int);
    void gameexit();
    void mainmenu();
    void gamemenu(int,int,DoublyLinkedList &);
    int loopmenu(int,int,DoublyLinkedList &,int);
    void addmenu(int,DoublyLinkedList &);
    void addHidden(int,DoublyLinkedList &);
    int return_flag();
        int getDisasterInput();
    void customDisaster();
    // void explore();
};

#endif