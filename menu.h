#ifndef MENU_H
#define MENU_H

#include "first.h"
#include <string>
using namespace std;
class menu :public first{
    private:
    string  array[20];

    public:
    void menu1();
    void menu2();
    int loopmenu1();
    int loopmenu2();
    void addmenu(int,string);
};

#endif