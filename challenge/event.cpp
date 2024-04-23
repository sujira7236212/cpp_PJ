#include "event.h"
#include <string>

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
    if (random(10)) {
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

void event::blueprint() {
    int x = rand()%3;

    switch (x){
        case 1: //for waterWheel: wheels+water
            cout<<"Water Wheel: Kill them, get their flesh, make them drive"<<endl;
            break;
        case 2: //for windMill: rotor+wood
            cout<<"Wind Mill: ironman spin"<<endl;
            break;
        case 3: //for solarPanel: silicon+metal
            cout<<"Solar Panel: Silicon valley sure loves metal."<<endl;
            break;
        default: cout<<"Error";
    }

}

void event::blueprint(int n) { //fixed chance of getting blueprint
    int x = n;

    switch (x){
        case 1: //for waterWheel: wheels+water
          ww = true;
            cout<<"Water Wheel: Can we drive water?"<<endl;
            clean_ = craftable("Water Wheel", ,);

            break;
        case 2: //for windMill: rotor+wood
          wm = true;
            cout<<"Wind Mill: Tree flesh goes spin."<<endl;
          
            break;
        case 3: //for solarPanel: silicon+metal
          sp = true;
            cout<<"Solar Panel: Silicon valley sure loves metal."<<endl;
            
            break;
        default: cout<<"Error";
    }
}

string event::specialElem(int n){ //return to add element in menu
    switch(n){
        case 1:
          if(blueprintGet(1))
            element = "x Wheels";
          else
            element = "/ Wheels";
            break;
        case 2:
          if(blueprintGet(2))
            element = "x Rotor"; //solarPanel
          else
            element = "/ Rotor";
            break;
        case 3:
        if(blueprintGet(3))
            element = "x Silicon"; //
          else
            element = "/ Silicon";
            break;
        default:
            element = "Nothing Happened.";
    }
    return element;
}

bool blueprintGet(int n){
  switch (n){
        case 1:
            
            break;
        case 2:
            cout<<"Wind Mill: Tree flesh goes spin."<<endl;
            break;
        case 3:
            cout<<"Solar Panel: Silicon valley sure loves metal."<<endl;
            break;
        default: cout<<"Error";
}
