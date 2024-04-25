#include <algorithm>
#include <cctype>
#include <iomanip>
#include <unordered_set>
#include <random>
#include "challenge.h"
#include "BST_event.h"
using namespace std;

#ifndef EVENT_H
#define EVENT_H

class event {
private:
    waterWheelC waterWheel;
    windMillC windMill;
    solarPanelC solarPanel;
protected:
    popQuiz quiz;
    string element_, clean_;
    string clean[4]={" ", " ", " "}, // "Water Wheel", "Wind Mill", "Solar Panels", "Nothing"
    special[4]={" "," "," "}; // "Wheels", "Rotor, "Silicon"

public:

        void cleanDisplay();
        void specialDisplay();

        void addClean(int pos, string c);
        void addSpecial(int pos, string spe);
        void description();
        void randomEvent(); //random what you get
        void specialElem(int n); //print element in special array
        void craft(int blueprintNum); //print element in clean array
        
        void sustainrate();
};

#endif