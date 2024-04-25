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

class menu :public BST, public DoublyLinkedList, public event, public disaster {
    protected:
    string  array[16];
    int flag = 8; //element count

    forestFire Fire;
    landSlide Land;
    people People; 

    public:
    menu();
    ~menu();
    void newele(int);
    void gameexit(event &);
    void elementDisplay(int);
    void mainmenu();
    string* getArr();
    void gamemenu(int,int,DoublyLinkedList &, event &);
    int loopmenu(int,int,DoublyLinkedList &,int, event &);
    void addmenu(int,DoublyLinkedList &);

    int return_mainhp();
    int return_flag();

    void callDisaster();
};

#endif