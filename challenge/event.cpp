#include "event.h"
#include <string>

void event::description() {
    cout<<"Go explore for the lost Technology!"<<endl
    <<"You'll have chances to find blueprints and materials for them"<<endl
    <<"or some fun quizes instead!"<<endl;
}

void event::randomEvent(string s) {

  if (s == "WOOD") {
    if (random(5)) {
      element = specialElem(1);
    } else {
      blueprint(1);
    }
  } else if (s == "METAL") {
    if (random(5)) {
      element = specialElem(2);
    } else {
      blueprint(2);
    }
  } else if (s == "GLASS") {
    if (random(5)) {
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

void event::blueprint() {
    int x = rand()%3;

    switch (x){
        case 1: //for waterWheel: wood+wheels
            cout<<"Water Wheel: Kill them, get their flesh, make them drive"<<endl;
            break;
        case 2: //for windMill: metal+rotor
            cout<<"Wind Mill: ironman spin"<<endl;
            break;
        case 3: //for solarPanel: silicon+glass
            cout<<"Solar Panel: Silicon valley sure loves grass."<<endl;
            break;
        default: cout<<"Error";
    }

}

void event::blueprint(int n) {
    int x = n;

    switch (x){
        case 1: //for waterWheel: wood+wheels
            cout<<"Water Wheel: Kill them, get their flesh, make them drive"<<endl;
            break;
        case 2: //for windMill: metal+rotor
            cout<<"Wind Mill: ironman spin"<<endl;
            break;
        case 3: //for solarPanel: silicon+glass
            cout<<"Solar Panel: Silicon valley sure loves grass."<<endl;
            break;
        default: cout<<"Error";
    }
}

string event::specialElem(int n){
    switch(n){
        case 1:
            return "Wheels";
            break;
        case 2:
            return "Rotor";
            break;
        case 3:
            return "Silicon";
            break;
        default:
            return "Nothing Happened.";
    }
}

string event::returnElem(){
    return element;
}