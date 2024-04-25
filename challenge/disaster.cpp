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

// int disaster::getDisasterInput(){
// 	string name;
// 	cin>>name;
	
// 	int n =findNodeData(t, name);

// 	return n;
// }

// void disaster::customDisaster(){
// 	if (rand()%1){
// 		if (array[1] == "Water"){
// 			if(rand()%2){
// 			forestFire.description();
// 			int n = getDisasterInput();
// 				if(forestFire.isSolved(n))
// 					cout<<"Great job! "<<endl;
// 				else {
// 					damage();
// 					hp = return_hp();
// 				}
// 			}
// 		}
// 		if (array[5] == "Trees"){
// 			if(rand()%2){
// 			landSlide.description();
// 			int n = getDisasterInput();
// 				if(landSlide.isSolved(n))
// 					cout<<"Excellent!"<<endl;
// 				else {
// 					damage();
// 					hp = return_hp();
// 				}
// 			}
// 		}
// 		if (array[14] == "People"){
// 			if(rand()%2){
// 			people.description();
// 			int n = getDisasterInput();
// 				damage();
// 					hp = return_hp();
// 					realPeople.description();
// 						n = getDisasterInput();
// 						if(realPeople.isSolved())
// 							cout<<"Wow!"<<endl;
// 						else {
// 							damage();
// 							hp = return_hp();
// 						}
// 				else cout<<"what? how???"; //should'nt be possible
// 			}
// 	}
// 	}
// }