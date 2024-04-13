#include <iostream>
#include "BST.h"
#include "firsttier.cpp"
#include <string>
using namespace std;

// int menu1(){
// 	int select1;
// 	cout<<"Please choose first element"<<endl;
// 	int k;
// 	string array[20];
// 	array[1]="Metal";
// 	array[2]="Water";
// 	array[3]="Seeds";
// 	array[4]="Glass";
// 	for(k=1;k<20;k++){
// 		if(!array[k].empty()){
// 			cout<<k<<".";
// 			cout<<array[k]<<endl;
// 		}
		
// 	}
// 	cout<<"You choose: "<<endl;
// 	cin>>select1;
// 	return select1;
	
// }
// int menu2(){
// 	int select2;
// 	cout<<"Please choose second element"<<endl;
// 	int k;
// 	string array[20];
// 	array[1]="Metal";
// 	array[2]="Water";
// 	array[3]="Seeds";
// 	array[4]="Glass";
// 	for(k=1;k<20;k++){
// 		if(!array[k].empty()){
// 			cout<<k<<".";
// 			cout<<array[k]<<endl;
// 		}
		
// 	}
// 	cout<<"You choose: "<<endl;
// 	cin>>select2;
// 	return select2;
// }
int main(){
	TreeNodePtr t;
	first a;
	
	// int i = menu1();
	// int j = menu2();
	a.loopmenu();
	return 0;
}