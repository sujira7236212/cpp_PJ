#ifndef MENU_H
#define MENU_H

#include "BST.h"
//#include "menu.cpp"
#include <string>
using namespace std;
class menu :public BST{
    private:
    string  array[20];

    public:
    menu();
    ~menu();
    void menu1();
    void menu2();
    int loopmenu1();
    int loopmenu2();
    void addmenu(int);
    string array2[20] ={"", "Metal", "Wood", "Water", "Plant","Seeds" ,"Glass"};
};

#endif