#ifndef BST_EVENT_H
#define BST_EVENT_H

//water wheel
class waterWheelC {
public:
    string hint = " Keep yourself hydrated while driving. ";
    bool blueprintGet = false;
    void blueprint();
    void blueprintAvailable();
};
void waterWheelC::blueprint(){
    blueprintGet = true;

  cout<<endl<<"  You recieved a \033[34mWater Wheel\033[0m Crafting Blueprint!"<<endl;
	cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[44m                      \033[1;37mBLUEPRINT\033[0m\033[44m                        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m      \""<<hint<<"\"        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m    You now have the ability to craft a \033[1;44;33m"<<setfill(' ')<<setw(11)<<"Water Wheel"<<" !  \033[0m";
  cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m"<<endl<<endl;
}
void waterWheelC::blueprintAvailable(){
  if (!blueprintGet) cout<<" This blueprint is unavailable. Please choose the available option. ";
  else cout << " You chose blueprint Water Wheel." << endl;
}


//windmill
class windMillC{
public:
    string hint = "          Tree flesh goes spin.        ";
    bool blueprintGet = false;
    void blueprint();
    void blueprintAvailable();
};
void windMillC::blueprint(){
    blueprintGet = true;
  cout<<endl<<"  You recieved a \033[34mWindmill\033[0m Crafting Blueprint!"<<endl;
	cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[44m                      \033[1;37mBLUEPRINT\033[0m\033[44m                        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m      \""<<hint<<"\"        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m    You now have the ability to craft a \033[1;44;33m"<<setfill(' ')<<setw(11)<<"Windmill"<<" !  \033[0m";
  cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m"<<endl<<endl;
}
void windMillC::blueprintAvailable(){
  if (!blueprintGet) cout<<" This blueprint is unavailable. Please choose the available option. ";
  else cout << " You chose blueprint Wind Mill." << endl;
}


//solarpanel
class solarPanelC {
public:
    string hint = "    Silicon valley sure loves metal.   ";
    bool blueprintGet = false;
    void blueprint();
    void blueprintAvailable();
};

void solarPanelC::blueprint(){
    blueprintGet = true;
  cout<<endl<<"  You recieved a \033[34mSolar Panel\033[0m Crafting Blueprint!"<<endl;
	cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[44m                      \033[1;37mBLUEPRINT\033[0m\033[44m                        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m      \""<<hint<<"\"        \033[0m";
  cout<<endl<<"  \033[44m                                                       \033[0m";
	cout<<endl<<"  \033[44m    You now have the ability to craft a \033[1;44;33m"<<setfill(' ')<<setw(11)<<"Solar Panel"<<" !  \033[0m";
  cout<<endl<<"  \033[44m-------------------------------------------------------\033[0m"<<endl<<endl;
}
void solarPanelC::blueprintAvailable(){
  if (!blueprintGet) cout<<" This blueprint is unavailable. Please choose the available option. "<<endl;
  else {
    cout << " You chose blueprint Solar Panel." << endl;
  }
}

#endif