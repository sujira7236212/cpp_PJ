#ifndef MENU_H
#define MENU_H

#include "BST.h"
#include "node.h"
//#include "menu.cpp"
#include <string>
using namespace std;
class menu :public BST, public DoublyLinkedList{
    private:
    string  array[20];
    int flag = 8;

    public:
    menu();
    ~menu();
    void newele(int);
    void menu1(int,int,DoublyLinkedList &);
    int loopmenu1(int,int,DoublyLinkedList &);
    void addmenu(int,DoublyLinkedList &);
    int return_flag();
};

#endif