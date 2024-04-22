#include "../BST.h"
#include <iostream>
#include <stack>
#include <string>
#ifndef CHALLENGE_H
#define CHALLENGE_H

class challenge: public BST{
    private:
        bool occured = false;
    public:

        bool random(int n);
};

class popQuiz : public challenge{ //fun quiz
        char input;
        bool ans = false;
    public:
        void getInput();
        bool quiz1();
        bool quiz2();
        bool quiz3();
        void randomquiz();
        bool returnans();
};

// class event : public challenge { //basicly minigame
// public:
//     void description() const override;
//     bool random() override; //no randomizetion whatsoever
//     void play();
// };


#endif