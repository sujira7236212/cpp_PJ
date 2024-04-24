#include "event.h"


void event::description() {
    cout<<"Go explore for the Sustainable Energy Sources!"<<endl
    <<"You'll have chances to find blueprints along with required materials"<<endl
    <<"or some fun quizes instead!"<<endl;
}

void event::addClean(string c){
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
  static std::unordered_set<int> used_options; // Flag to track if a special element or blueprint has been used

  int n = rand() % 4;

  switch (n) {
    case 1: //waterwheel
      if (!used_options.count(1) && rand()%2 == 0) {
        specialElem(1);
        used_options.insert(1);
      } else
        waterWheel.blueprint();
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

void event::craftMenu(){
  char choice, blueprintChoice;
  int availableBlueprint = 0;
  cout<<"Craft? Y/N: ";
  cin>>choice;

  if (choice == 'y' || choice == 'Y') {
    cout << "Blueprints: " << endl;
    if (!waterWheel.blueprintGet) {
      cout << " \033[44m1) Water Wheels\033[0m";
      availableBlueprint=1;
    } else cout<<"1) Water Wheels"<<endl;

    if (!windMill.blueprintGet) {
      cout << " \033[44m2) Wind Mill\033[0m";
      availableBlueprint=2;
    } else cout<<"2) Wind Mill"<<endl;

    if (!solarPanel.blueprintGet) {
      cout << " \033[44m3) Solar Panel\033[0m";
      availableBlueprint=3;
    } else cout<<"3) Solar Panel"<<endl;
  }

  if (availableBlueprint == 0) {
      cout << "No blueprints available. Explore to find more!" << endl;
      return; // Exit the function if no blueprints
  }

  cout << "Choose blueprint: ";
  cin >> blueprintChoice;

      while (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3') {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> blueprintChoice;
      }
      
    if (availableBlueprint != (int)(blueprintChoice - '0')) {
      cout << "This blueprint is unavailable. Please choose the available option: ";
      cin >> blueprintChoice;

      while (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3') {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> blueprintChoice;
      }
    }

  cout << "You chose blueprint " << blueprintChoice << "." << endl;
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
}

void event::craft(int blueprintNum){
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
      break;
    
    case 2: //windmill
      if (element1 == "ROTOR" && element2 == "WOOD")
      clean_ = "Wind Mill";
      break;

    case 3: //solarpanel
      if (element1 == "WHEEL" && element2 == "WATER")
      clean_ = "Solar Panel";
      break;
    
    default:
      break;
    }
    addClean(clean_);
    cout<<"Right now, you've received"<<clean_
    <<"making your city powered by clean energy. It looks like you're heading in the right direction!"<<endl;
}


void event::specialElem(int n){ //return to add element in menu
    string elemBluep, element;
    
    switch(n){
        case 1:
          element = "Rotor";
            if(!windMill.blueprintGet)
              elemBluep= "x Rotor"; 
            else elemBluep = "/ Rotor";
          addSpecial(1, elemBluep);
        break;

        case 2:
          element = "Silicon";
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



