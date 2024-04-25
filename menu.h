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

class menu :public BST, public DoublyLinkedList, public event{
    protected:
    string  array[16];
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
    void elementDisplay(int);
    void mainmenu();
    const string* getArr(const string arr[]);
    void gamemenu(int,int,DoublyLinkedList &, event &);
    int loopmenu(int,int,DoublyLinkedList &,int, event &);
    void addmenu(int,DoublyLinkedList &);
    void addHidden(int,DoublyLinkedList &);
    int return_flag();
   
};

#endif