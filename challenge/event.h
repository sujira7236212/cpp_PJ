
#include <algorithm>
#ifndef EVENT_H
#define EVENT_H

class event: public challenge {
    popQuiz quiz;
    string element;

    string  hintWW =   " Keep yourself hydrated while driving. ",
            hintWM =   "          Tree flesh goes spin.        ", 
            stringSP = "    Silicon valley sure loves metal.   ";

    public:
        void description();
        void randomEvent(string s); //random what you get
        void blueprint();
        void blueprint(int n); //specific blueprint
        string specialElem(int n);
        
};

#endif