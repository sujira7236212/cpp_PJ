#include "BST.h"
#include <string>
#ifndef CHALLENGE_H
#define CHALLENGE_H

class challenge: public BST{
    private:
        bool occured;
    public:
        void description();
        bool random();
};

#endif