#include <iostream>
#include "disaster.h"
using namespace std;

void disaster::description() {
    cout << "FUG" << endl;
}

void disaster::isSolved(){ //input = data of the fixed element
  transform(input_.begin(), input_.end(), input_.begin(), ::toupper);
  if (answer_ == input_) ans_=true;
  else ans_=false;
}

void disaster::getInput(){
  cout<<endl<<"  Find an \033[1;31melement\033[0m to solve this crisis! "<<endl;
        cout<<"  Choose an element: \033[31m";
        cin>>input_;
        cout<<"\033[0m";
}
bool disaster::returnAns(){
  return ans_;
}

void forestFire::description(){
  cout<<endl;
	cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[41m                       \033[4mDISASTER 🗲\033[0m\033[41m                       \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
	cout<<endl<<"  \033[41m      Forest fire has occurred! Causing extensive       \033[0m";
  cout<<endl<<"  \033[41m      injuries and deaths to trees and animals.         \033[0m";
  cout<<endl<<"  \033[41m      We need to address this situation promptly.       \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
  cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m"<<endl<<endl;

}
void forestFire::ansDescription(){
  if (ans_){
  cout<<endl<<"  Great job! Choosing water to help extinguish the fire was effective! \n  Keep trying to successfully complete the remaining missions."<<endl;
  } else
  cout<<endl<<"  BRO, NO. "<<endl;
  cin.ignore(100, '\n');
  cin.get();
  system("clear");
}

void landSlide::description(){
  cout<<endl;
	cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[41m                        \033[4mDISASTER 🗲\033[0m\033[41m                      \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
	cout<<endl<<"  \033[41m      The soil is degraded! Causing erosion and         \033[0m";
  cout<<endl<<"  \033[41m      nutrient depletion.                               \033[0m";
  cout<<endl<<"  \033[41m      What should we do?                                \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
  cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m"<<endl<<endl;
}
void landSlide::ansDescription(){
  if (ans_){
  cout<<endl<<"  Excellent! Planting trees helps restore soil quality. \n  Keep striving to build a sustainable and livable city."<<endl;
  } else;
  cin.ignore(100, '\n');
  cin.get();
  system("clear");
}



void people::description(){
  cout<<endl;
	cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m";
	cout<<endl<<"  \033[41m                        \033[4mDISASTER 🗲\033[0m\033[41m                      \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
	cout<<endl<<"  \033[41m      Turns out the new mayor is a big misogynist!      \033[0m";
  cout<<endl<<"  \033[41m      He's pushing anti-women policies at a no one      \033[0m";
  cout<<endl<<"  \033[41m      had ever seen before.                             \033[0m";
  cout<<endl<<"  \033[41m      Women aren't taking it well, they want a new      \033[0m";
  cout<<endl<<"  \033[41m      leader! Who should we sided with?                 \033[0m";
  cout<<endl<<"  \033[41m                                                        \033[0m";
  cout<<endl<<"  \033[41m--------------------------------------------------------\033[0m"<<endl<<endl;
}
void people::ansDescription(){
  if (ans_){
  cout<<endl<<"  Brilliant! If we let the people govern together, \n  both sides could express their opinions. Though eventually \n  one might win over, at least they can go with a fight!"<<endl;
  } else;
  cout<<endl<<"  Yeah, no. looks like the power is still one-sided."<<endl;
  cin.ignore(100, '\n');
  cin.get();
  system("clear");
}

