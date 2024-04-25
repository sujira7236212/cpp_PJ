#ifndef CHALLENGE_H
#define CHALLENGE_H

#include "../BST.h"
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>


class challenge: public BST{
    private:
        bool occured = false;
    public:

        bool random(int n);
};

class popQuiz : public challenge{
        char input;
        bool ans = false;
    public:
        void getInput();
        bool quiz1();
        bool quiz2();
        bool quiz3();
        bool quiz4();
        bool quiz5();
        bool quiz6();
        void randomquiz();
        bool returnans();
};


#endif