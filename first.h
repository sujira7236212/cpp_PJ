#ifndef FIRST_H
#define FIRST_H

#include "BST.h"
//#include "first.cpp"
class first :public BST{
    private:
    public:
        //first();
        int build(int,int);
        TreeNodePtr createNode();
        string returnname(int);

};

#endif