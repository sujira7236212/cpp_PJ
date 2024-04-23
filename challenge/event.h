#ifndef EVENT_H
#define EVENT_H

class event: public challenge {
    popQuiz quiz;
    string element_, clean_;
    bool ww=false, wm=false, sp=false; //blueprint acheived
    string clean[4]={"Water Wheel", "Wind Mill", "Solar Panels" }, // "Water Wheel", "Wind Mill", "Solar Panels"
    special[4]={" "," "," "}; // "Wheels", "Rotor, "Silicon"

    string  hintWW =   " Keep yourself hydrated while driving. ",
            hintWM =   "          Tree flesh goes spin.        ", 
            stringSP = "    Silicon valley sure loves metal.   ";

    public:
        void cleanDisplay() {
            for (int i = 0; i < 4; ++i) {
            cout << clean[i] << endl;
            }}
        void specialDisplay() {
            for (int i = 0; i < 7; ++i) {
            cout << special[i] << endl;
            }}

        void event::addClean(int i, string c){ //i for pos
            clean[i] = c;}
        void addSpecial(int i, string spe){ //i for pos
            special[i] = spe;}

        void description();
        void randomEvent(string s); //random what you get
        string craftable(string s, string spe, string ele);
        string specialElem(int n); //return element_
        void blueprint();
        void blueprint(int n); //specific blueprint
        
        
};

#endif