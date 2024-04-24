#include "event.h"


void event::description() {
  
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"                  \033[1;4mEXPEDITION PLAN\033[0m"<<endl<<endl;
    cout<<" Go on an exploration for \033[1mSustainable Energy Sources\033[0m!"<<endl
        <<" You'll have chances to find \033[34mblueprints\033[0m along with many "<<endl 
        <<" other \033[33mspecial materials\033[0m!"<<endl<<endl;
}

void event::addClean(string c){
  cout<<"Right now, you've received"<<c
    <<"making your city powered by clean energy. It looks like you're heading in the right direction!"<<endl;
            static int pos = 0;
            if(pos<4){
               clean[pos] = c;
                pos++; 
            }
}
void event::addSpecial(int pos, string spe){
  special[pos] = spe;

}

void event::randomEvent() {
  static unordered_set<int> used_options ; // Flag to track if a special element or blueprint has been used
  used_options.count(0);

  int n = rand() % 4;

  switch (n) {
    case 1: //waterwheel
      if (!used_options.count(1) && rand()%2 == 0) {
        specialElem(1);
        used_options.insert(1);
      } else
        // waterWheel.blueprint();
      break;

    case 2: //windmill
      if (!used_options.count(2) && rand()%2 == 0) {
        specialElem(2);
        used_options.insert(2);
      } else
        windMill.blueprint();
      break;

    case 3: //solar panel
      if (!used_options.count(3) && rand()%2 == 0) {
        specialElem(3);
        used_options.insert(3);
      } else
        solarPanel.blueprint();
      break;

    default:
      quiz.randomquiz();
      break;
  }
}

void event::chooseBlueprint() {
  char blueprintChoice;
  int blueprintNum;

  do {
    cout << "Choose blueprint: ";
    cin >> blueprintChoice;

    if (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3') {
      cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
    }
  } while (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3');

  switch (blueprintChoice) {
    case '1':
      waterWheel.blueprintAvailable();
      if (!waterWheel.blueprintGet) {
        chooseBlueprint();
      }
      break;
    case '2':
      windMill.blueprintAvailable();
      if (!windMill.blueprintGet) {
        chooseBlueprint();
      }
      break;
    case '3':
      solarPanel.blueprintAvailable();
      if (!solarPanel.blueprintGet) {
        chooseBlueprint(); 
      }
      break;
    default:
      break;
  }
}


      

int event::craftMenu(){
  cleanDisplay();
  specialDisplay();
  char choice, blueprintChoice;
  int availableBlueprint = 0;
  cout<<"Craft? Y/N: ";
  cin>>choice;

  if (choice == 'y' || choice == 'Y') {
    cout << "Blueprints: " << endl;
    if (!waterWheel.blueprintGet) {
      cout << " \033[30m 1) Water Wheels\033[0m"<<endl;
    } else {
      cout<<"1) Water Wheels"<<endl;
      availableBlueprint=1;
    }

    if (!windMill.blueprintGet) {
      cout << " \033[30m 2) Wind Mill\033[0m"<<endl;
      
    } else {
      cout<<"2) Wind Mill"<<endl;
      availableBlueprint=2;
    }

    if (!solarPanel.blueprintGet) {
      cout << " \033[30m 3) Solar Panel\033[0m"<<endl;
      
    } else {
      cout<<"3) Solar Panel"<<endl;
      availableBlueprint=3;
    }
  }

  if (availableBlueprint == 0) {
      cout << "No blueprints available. Explore to find more!" << endl;
      return 0; // Exit the function if no blueprints
  }

  chooseBlueprint();

      switch(blueprintChoice){
        case 1:
          waterWheel.blueprint();
          craft(1);
          break;
        case 2:
          windMill.blueprint();
          craft(2);
          break;
        case 3:
          solarPanel.blueprint();
          craft(3);
          break;
        default: break;
      }
  return blueprintChoice;
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
      if (element1 == "WHEEL" && element2 == "WATER")
      clean_ = "Water Wheel";
      addClean(clean_);
      break;
    
    case 2: //windmill
      if (element1 == "ROTOR" && element2 == "WOOD")
      clean_ = "Wind Mill";
      addClean(clean_);
      break;

    case 3: //solarpanel
      if (element1 == "WHEEL" && element2 == "WATER")
      clean_ = "Solar Panel";
      addClean(clean_);
      break;
    
    default:
    cout<<"Nothing Happen!"<<endl;
      break;
    }
}


void event::specialElem(int n){ //return to add element in menu
    string elemBluep, element;

    n = rand()%4;
    
    switch(n){
        case 1:
          element = "Rotor";
            if(!windMill.blueprintGet)
              elemBluep= "x Rotor"; 
            else elemBluep = "/ Rotor";
          addSpecial(1, elemBluep);
        break;

        case 2:
          element = "Wheels";
            if(!waterWheel.blueprintGet)
              elemBluep = "x Wheels";
            else elemBluep = "/ Wheels";
          addSpecial(2, elemBluep);
        break;

        case 3:
          element = "Silicon";
            if(!solarPanel.blueprintGet)
                elemBluep = "x Silicon";
              else elemBluep = "/ Silicon";
          addSpecial(3, elemBluep);
        break;

        default:
            element = "Nothing.";
            break;
    }
  cout<<"Congratulations! You gain "<<element<<"!"<<endl;
  
}



