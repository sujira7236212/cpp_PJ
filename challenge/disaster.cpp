#include <iostream>
#include "disaster.h"
using namespace std;

disaster::disaster(const string& description, int data){
  description_=description;
  data_=data;
}

void disaster::description() {
    cout << description_ << endl;
    cout<<"Choose an element that might solve this: ";
}

bool disaster::isSolved(int input){ //input whatever element
  if (data_==input) return true;
  else return false;
}