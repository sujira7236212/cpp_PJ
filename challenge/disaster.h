#include "challenge.h"
#ifndef DISASTER_H
#define DISASTER_H

class disaster : public challenge { //choose elements
    private:
        bool ans;
        int data_; //element data
        string description_;
    public:
        disaster(const string& description, int data); //description of the event, answer element data
        ~disaster() = default;
        void description();
        bool isSolved(int input);
};

#endif