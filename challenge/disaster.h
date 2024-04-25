#include "challenge.h"
#ifndef DISASTER_H
#define DISASTER_H

class disaster : public challenge { //choose elements
    private:
        bool ans;
        int data_; //element data
        string description_;
        
    public:
        int getDisasterInput();
        // void customDisaster();
        // disaster forestFire("Forest fire!", 1);
        // disaster landSlide("The soil is degraded!", 5);
        // disaster people("There's a mob between men and women. Shit's gettin real bloddy rn.", 0);
        // disaster realPeople("Think again!", 14);            
        disaster(const string& description, int data); //description of the event, answer element data
        ~disaster() = default;
        void description();
        bool isSolved(int input);
        
};

#endif