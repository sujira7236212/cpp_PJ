#include "event.h"


void event::description() {
  
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"                  \033[1;4mEXPEDITION PLAN\033[0m"<<endl<<endl;
    cout<<" Go on an exploration for \033[1mSustainable Energy Sources\033[0m!"<<endl
        <<" You'll have chances to find \033[34mblueprints\033[0m along with many "<<endl 
        <<" other \033[33mspecial materials\033[0m!"<<endl<<endl;
}

void event::addClean(int pos, string c){
  system("clear");
  cout<<"Right now, you've received "<<c<<" making your city powered by clean energy."<<endl;
    cout<<"It looks like you're heading in the right direction!"<<endl;
      clean[pos] = c;
}
void event::addSpecial(int pos, string spe){
  special[pos] = spe;
}

void event::randomEvent() {
  static unordered_set<int> used_options ; // Flag to track if a special element or blueprint has been used
  used_options.count(0);
  static std::default_random_engine generator(std::random_device{}());

  int n = generator() % 4;

  switch (n) {
    case 1: //waterwheel
      if (!used_options.count(1) && generator()%2 == 0) {
        specialElem(1);
        used_options.insert(1);
      } else{
        waterWheel.blueprint();
        specialElem(1);
        craft(1);
      }
      break;

    case 2: //windmill
      if (!used_options.count(2) && generator()%2 == 0) {
        specialElem(2);
        used_options.insert(2);
      } else{
        windMill.blueprint();
        specialElem(2);
        craft(2);
      }
      break;

    case 3: //solar panel
      if (!used_options.count(3) && generator()%2 == 0) {
        specialElem(3);
        used_options.insert(3);
      } else{
        solarPanel.blueprint();
        specialElem(3);
        craft(3);
      }
      break;

    default:
      quiz.randomquiz();
      if(!quiz.returnans()){
        quiz.damage();
      }quiz.showHP();
      break;
  }
}


void event::craft(int blueprintNum){
  cleanDisplay();
  specialDisplay();
  string element1, element2;
    cout<<"  Please input a special element and an element: "<<endl<<endl;
    cout<<"    1) Special Element: \033[33m";
    cin>>element1;
      transform(element1.begin(), element1.end(), element1.begin(), ::toupper);

    cout<<"\033[0m";
    cout<<"    2) Element: ";
    cin>>element2;
      transform(element2.begin(), element2.end(), element2.begin(), ::toupper);

    switch (blueprintNum)
    {
    case 1: //waterwheel
      if (element1 == "WHEELS" && element2 == "WATER"){
        clean_ = "Water Wheel";
        addClean(0, clean_);
      }else cout<<"          \033[1mNothing Happen!\033[0m"<<endl<<endl;
      break;
    
    case 2: //windmill
      if (element1 == "ROTOR" && element2 == "WOOD"){
      clean_ = "Wind Mill";
      addClean(1, clean_);
      }else cout<<"          \033[1mNothing Happen!\033[0m"<<endl<<endl;
      break;

    case 3: //solarpanel
      if (element1 == "SILICON" && element2 == "METAL"){
      clean_ = "Solar Panel";
      addClean(2, clean_);
      }else cout<<"          \033[1mNothing Happen!\033[0m"<<endl<<endl;
      break;
    
    default:
    cout<<"          \033[1mNothing Happen!\033[0m"<<endl<<endl;
      break;
    }
}


void event::specialElem(int n){ //return to add element in menu
    string elemBluep, element;
    
    switch(n){
        case 1:
          element = "Wheels";
            if(!waterWheel.blueprintGet)
              elemBluep = "x Wheels";
            else elemBluep = "/ Wheels";
          addSpecial(0, elemBluep);
        break;

        case 2:
          element = "Rotor";
            if(!windMill.blueprintGet)
              elemBluep= "x Rotor"; 
            else elemBluep = "/ Rotor";
          addSpecial(1, elemBluep);
        break;

        case 3:
          element = "Silicon";
            if(!solarPanel.blueprintGet)
                elemBluep = "x Silicon";
              else elemBluep = "/ Silicon";
          addSpecial(2, elemBluep);
        break;

        default:
            element = "Nothing.";
            break;
    }
  cout<<endl<<"         ----------------------------------------"<<endl;
	cout<<"        |  Congratulations! You gain \033[38;5;220m"<<setfill(' ')<<setw(9)<<element<<"\033[0m"<<"!  |";
	cout<<endl<<"         ----------------------------------------"<<endl;
}



