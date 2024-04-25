#ifndef DISASTER_H
#define DISASTER_H

#include "challenge.h"
#include <cstring>

class disaster { //choose elements
    protected:
        bool ans_ = true;
        string answer_ = "NONE", input_;
        
    public:
        virtual void description();
        void getInput();
        void isSolved();
        bool returnAns();
};

class forestFire : public disaster {
    public:
        forestFire(){
            answer_ = "WATER";
        }
        void description();
        void ansDescription();
};

class landSlide : public disaster {
    public:
        landSlide(){
            answer_ = "TREES";
        }
        void description();
        void ansDescription();
};

class people : public disaster {
    public:
        people(){
            answer_ = "PEOPLE";
        }
        void description();
        void ansDescription();
        string getString(){
            return answer_;
        }
};

#endif