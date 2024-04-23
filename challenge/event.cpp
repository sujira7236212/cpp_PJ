#include "event.h"

void event::description() {
    cout<<"Go explore for the lost Technology!"<<endl
    <<"You'll have chances to find blueprints and materials for them"<<endl
    <<"or some fun quizes instead!"<<endl;
}

void event::randomEvent(string s) {

  if (s == "WOOD") {
    if (random(2)) {
      element_ = specialElem(1);
    } else {
      blueprint(1);
    }
  } else if (s == "WATER") {
    if (random(2)) {
      element_ = specialElem(2);
    } else {
      blueprint(2);
    }
  } else if (s == "METAL") {
    if (random(2)) {
      element_ = specialElem(3);
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
  string element1, element2, clean, a;
  if( s=="Water Wheel" ) a = hintWW;
  else if( s=="Wind Mill" ) a = hintWM;
  else if( s=="Solar Panel" ) a = stringSP;
  cout<<endl<<"  You recieved a "<<s<<" Crafting Blueprint!"<<endl;
	cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[44m                      \033[1;37mBLUE PRINT\033[0m\033[44m                       \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m      \""<<a<<"\"        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m    You now have the ability to craft a \033[1;44;33m"<<setfill(' ')<<setw(11)<<s<<" !  \033[0m";
  cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m"<<endl<<endl;
  
  cout<<"  Please input a special element and an owned element: "<<endl<<endl;
  cout<<"    1) Special Element: \033[33m";
  cin>>element1;
  cout<<"\033[0m";
  cout<<"    2) Element: ";
  cin>>element2;
  transform(element1.begin(), element1.end(), element1.begin(), ::toupper);
  transform(element2.begin(), element2.end(), element2.begin(), ::toupper);
  transform(spe.begin(), spe.end(), spe.begin(), ::toupper);
  transform(ele.begin(), ele.end(), ele.begin(), ::toupper);
  if(element1 == spe && element2 == ele) clean = s;
  else clean = "Nothing Happen.";
  return clean;
}

string event::specialElem(int n){ //return to add element in menu
    switch(n){
        case 1:
          if(wm)
            element_ = "x Rotor"; 
          else
            element_ = "/ Rotor";
            break;
            break;
        case 2:
          if(ww)
            element_ = "x Wheels";
          else
            element_ = "/ Wheels";
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

void event::blueprint() { //randomize blueprint
  int x = rand()%3;
    switch (x){
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
void event::blueprint(int n) { //fixed chance of getting blueprint
    switch (n){
        case 1: //for windMill: rotor+wood
          ww = true;
            specialElem(1);
            clean_ = craftable("Wind Mill", "Rotor", "Wood");

            break;
        case 2: //for waterWheel: wheels+water 
          wm = true;
            specialElem(2);
            clean_ = craftable("Water Wheel", "Wheels", "Water");
          
            break;
        case 3: //for solarPanel: silicon+metal
          sp = true;
            specialElem(3);
            clean_ = craftable("Solar Panel", "Silicon", "Metal");
            
            break;
        default: cout<<"Error";
    }
    
}


