#include "event.h"
#include <string>
#include <algorithm>

void event::description() {
    cout<<"Go explore for the lost Technology!"<<endl
    <<"You'll have chances to find blueprints and materials for them"<<endl
    <<"or some fun quizes instead!"<<endl;
}

void event::randomEvent(string s) {

  if (s == "WOOD") {
    if (random(2)) {
      element = specialElem(1);
    } else {
      blueprint(1);
    }
  } else if (s == "WATER") {
    if (random(2)) {
      element = specialElem(2);
    } else {
      blueprint(2);
    }
  } else if (s == "METAL") {
    if (random(2)) {
      element = specialElem(3);
    } else {
      blueprint(3);
    }
  } else {
    if (random(5)) {
      blueprint();
    } else {
      quiz.randomquiz();
    }
  }
}

string event::craftable(string s, string spe, string ele){
  string element1, element2, clean;

  cout<<"You now have the ability to craft a "<<s<<endl
  <<"Please input a special element and an element: ";<<endl;

  cout<<"1) Special Element: ";
  cin>>element1;
  
  cout<<<<"2) Element: ";
  cin>>element2;

  //.....

  return clean;
}

string event::specialElem(int n){ //return to add element in menu
    switch(n){
        case 1:
          if(ww)
            element_ = "x Wheels";
          else
            element_ = "/ Wheels";
            break;
        case 2:
          if(wm)
            element_ = "x Rotor"; 
          else
            element_ = "/ Rotor";
            break;
        case 3:
        if(sp)
            element_ = "x Silicon";
          else
            element_ = "/ Silicon";
            break;
        default:
            element_ = "Nothing Happened.";
    }
    return element_;
}

void event::blueprint(int n) { //fixed chance of getting blueprint

    switch (n){
        case 1: //for waterWheel: wheels+water
          ww = true;
            specialElem(1);
            // clean_ = craftable("Water Wheel", "Wheels", "Water");

            break;
        case 2: //for windMill: rotor+wood
          wm = true;
            specialElem(2);
            // clean_ = craftable("Wind Mill", "Rotor", "Wood");
          
            break;
        case 3: //for solarPanel: silicon+metal
          sp = true;
            specialElem(3);
            // clean_ = craftable("Water Wheel", "Silicon", "Metal");
            
            break;
        default: cout<<"Error";
    }

}


