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

        void cleanDisplay() {
	        cout<<endl<<"               \033[4mSustainable Energy Sources\033[0m "<<endl;
            cout<<"        -----------------------------------------"<<endl;
	        cout<<"       |";
            for(int i = 1; i < 4; i++){
		    cout<<"\033[1;33m"<<setfill(' ')<<setw(12)<<clean[i]<<"\033[0m |";
	        }
	        cout<<endl<<"        -----------------------------------------"<<endl;
            }
        void specialDisplay() {
            cout<<"             -----------------------------------"<<endl;
	        cout<<"    \033[4mSpecial\033[0m |";
	        for(int i = 0; i < 3; i++){
		    cout<<"\033[1;33m"<<setfill(' ')<<setw(10)<<special[i]<<"\033[0m |";
	        }
	        cout<<endl<<"             -----------------------------------"<<endl;
            }

        void addClean(int pos, string c);
        void addSpecial(int pos, string spe);
        void description();
        void randomEvent(); //random what you get
        void specialElem(int n); //print element in special array
        void craft(int blueprintNum); //print element in clean array
        
        
};

#endif