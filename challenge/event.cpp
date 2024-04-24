#include "event.h"



void event::description() {
  
    cout<<"Go explore for the Sustainable Energy Sources!"<<endl
    <<"You'll have chances to find blueprints along with required materials"<<endl
    <<"or some fun quizes instead!"<<endl;
}

void event::addClean(int pos, string c){
  cout<<"Right now, you've received "<<c
    <<" making your city powered by clean energy. It looks like you're heading in the right direction!"<<endl;
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
  cout<< n<<endl;

  switch (n) {
    case 1: //waterwheel
      if (!used_options.count(1) && generator()%2 == 0) {
        specialElem(1);
        specialDisplay();
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
      break;
  }
}

// void event::chooseBlueprint() {
//   char blueprintChoice;
//   int blueprintNum;

//   do {
//     cout << "Choose blueprint: ";
//     cin >> blueprintChoice;

//     if (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3') {
//       cout << "Invalid choice. Please enter 1, 2, or 3." << endl;
//     }
//   } while (blueprintChoice != '1' && blueprintChoice != '2' && blueprintChoice != '3');

//   switch (blueprintChoice) {
//     case '1':
//       waterWheel.blueprintAvailable();
//       if (!waterWheel.blueprintGet) {
//         chooseBlueprint();
//       }
//       break;
//     case '2':
//       windMill.blueprintAvailable();
//       if (!windMill.blueprintGet) {
//         chooseBlueprint();
//       }
//       break;
//     case '3':
//       solarPanel.blueprintAvailable();
//       if (!solarPanel.blueprintGet) {
//         chooseBlueprint(); 
//       }
//       break;
//     default:
//       break;
//   }
// }

// int event::craftMenu(){
//   cleanDisplay();
//   specialDisplay();
//   char choice, blueprintChoice;
//   int availableBlueprint = 0;
//   cout<<"Craft? Y/N: ";
//   cin>>choice;

//   if (choice == 'y' || choice == 'Y') {
//     cout << "Blueprints: " << endl;
//     if (!waterWheel.blueprintGet) {
//       cout << " \033[30m 1) Water Wheels\033[0m"<<endl;
//     } else {
//       cout<<"1) Water Wheels"<<endl;
//       availableBlueprint=1;
//     }

//     if (!windMill.blueprintGet) {
//       cout << " \033[30m 2) Wind Mill\033[0m"<<endl;
      
//     } else {
//       cout<<"2) Wind Mill"<<endl;
//       availableBlueprint=2;
//     }

//     if (!solarPanel.blueprintGet) {
//       cout << " \033[30m 3) Solar Panel\033[0m"<<endl;
      
//     } else {
//       cout<<"3) Solar Panel"<<endl;
//       availableBlueprint=3;
//     }
//   }

//   if (availableBlueprint == 0) {
//       cout << "No blueprints available. Explore to find more!" << endl;
//       return 0; // Exit the function if no blueprints
//   }

//   chooseBlueprint();

//       switch(blueprintChoice){
//         case 1:
//           waterWheel.blueprint();
//           craft(1);
//           break;
//         case 2:
//           windMill.blueprint();
//           craft(2);
//           break;
//         case 3:
//           solarPanel.blueprint();
//           craft(3);
//           break;
//         default: break;
//       }
//   return blueprintChoice;
// }

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
      }
      break;
    
    case 2: //windmill
      if (element1 == "ROTOR" && element2 == "WOOD"){
      clean_ = "Wind Mill";
      addClean(1, clean_);
      }
      break;

    case 3: //solarpanel
      if (element1 == "SILICON" && element2 == "METAL"){
      clean_ = "Solar Panel";
      addClean(2, clean_);
      }
      break;
    
    default:
    cout<<"Nothing Happen!"<<endl;
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
  cout<<"Congratulations! You gain "<<element<<"!"<<endl;
  
}



