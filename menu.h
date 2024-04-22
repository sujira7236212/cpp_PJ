#ifndef MENU_H
#define MENU_H

#include "BST.h"
#include "node.h"
//#include "menu.cpp"
#include <string>
using namespace std;
class menu :public BST, public DoublyLinkedList{
    private:
    string  array[16];
    int flag = 8;

    public:
    menu();
    ~menu();
    void newele(int);
    void gameexit();
    void mainmenu(int,int,DoublyLinkedList &);
    int loopmenu(int,int,DoublyLinkedList &);
    void addmenu(int,DoublyLinkedList &);
    int return_flag();
};

#endif