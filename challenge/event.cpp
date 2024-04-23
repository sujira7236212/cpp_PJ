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
  if( s=="Water Wheel" ) string  a = hintWW;
  else if( s=="Wind Mill" ) string  a = hintWM;
  else if( s=="Solar Panel" ) string  a = stringSP;
  cout<<"  You recieved a "<<s<<"Crafting Blueprint!"<<endl;
	cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[44m                      \033[1;44;37mBLUE PRINT\033[0m\033[44m                       \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m      \""<<a<<"\"   \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m    You now have the ability to craft a \033[1;44;33m"<<s<<" !        \033[0m";
  cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m"<<endl;
  
  <<"  Please input a special element and an element: ";<<endl;
  cout<<"    1) Special Element: \033[33m";
  cin>>element1;
  cout<<"\033[0m";
  cout<<<<"    2) Element: \033[33m";
  cin>>element2;
  cout<<"\033[0m";
  transform(element1.begin(), element1.end(), element1.begin(), ::toupper);
  transform(element2.begin(), element2.end(), element2.begin(), ::toupper);
  transform(spe.begin(), spe.end(), spe.begin(), ::toupper);
  transform(ele.begin(), ele.end(), ele.begin(), ::toupper);
  if(element1 == spe && element2 == ele) clean = s;
  else clean = "Nothing Happen.";
  return clean;
}

void event::blueprint() {
    int x = rand()%3;

    switch (x){
        case 1: //for waterWheel: wheels+water
            cout<<"Kill them, get their flesh, make them drive."<<endl;
            break;
        case 2: //for windMill: rotor+wood
            cout<<"               Ironman spin"<<endl;
            break;
        case 3: //for solarPanel: silicon+metal
            cout<<"      Silicon valley sure loves metal."<<endl;
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
