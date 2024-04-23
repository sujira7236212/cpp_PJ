#ifndef MENU_H
#define MENU_H

#include "BST.h"
#include "node.h"
#include "challenge/challenge.h"
#include "challenge/disaster.h"
#include "challenge/event.h"
#include <string>
using namespace std;

class menu :public BST, public DoublyLinkedList{
    protected:
    string  array[16];
    // clean[4]={"Water Wheel", "Wind Mill", "Solar Panels" }, special[7]={" "," "," "," "};
    int flag = 8; //element count
    event explore;
    string* clean = explore.clean[4], special = explore.special; 

    public:
    menu();
    ~menu();
    void newele(int);
    void gameexit();
    void mainmenu();
    void gamemenu(int,int,DoublyLinkedList &);
    int loopmenu(int,int,DoublyLinkedList &);
    void addmenu(int,DoublyLinkedList &);
    void addHidden(int,DoublyLinkedList &);
    void exploreMenu();
    int return_flag();
};

#endif