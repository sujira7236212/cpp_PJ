#include <iostream>
#include "disaster.h"
using namespace std;

void disaster::description() {
    cout << "description" << endl;
    cout<<"Choose an element that might solve this: ";
}

void disaster::isSolved(){ //input = data of the fixed element
  transform(input_.begin(), input_.end(), input_.begin(), ::toupper);
  if (answer_ == input_) ans_=true;
  else ans_=false;
}

void disaster::getInput(){
  cout<<"Choose an elmeent: ";
  cin>>input_;
}
bool disaster::returnAns(){
  return ans_;
}

void forestFire::description(){
  cout<<"Forest fire has occurred! Causing extensive injuries"<<endl
      <<"and deaths to trees and animals."<<endl
      <<"We need to address this situation promptly."<<endl;
}
void forestFire::ansDescription(){
  if (ans_){
    cout<<"Great job! Choosing water to help extinguish the fire was effective! \nKeep trying to successfully complete the remaining missions."<<endl;
  } else
  cout<<"NO"<<endl;
}

void landSlide::description(){
  cout<<"The soil is degraded! Causing erosion \nand nutrient depletion."<<endl
      <<"What should we do?"<<endl;
}
void landSlide::ansDescription(){
  if (ans_){
    cout<<"Excellent! Planting trees helps restore soil quality. \nKeep striving to build a sustainable and livable city."<<endl;
  } else;
}



void people::description(){
  cout<<"Turns out the new mayor is a big misogynist! \nHe's pushing anti-women policies at a no one had ever seen before. \nWomen aren't taking it well, they want a new leader. \nWho should we sided with?"<<endl;
}
void people::ansDescription(){
  if (ans_){
    cout<<"Brilliant! If we let the people govern together, \nboth sides could express their opinions. Though eventually \none might win over, at least they can go with a fight!"<<endl;
  } else;
  cout<<"Yeah, no. looks like the power is still one-sided."<<endl;
}

