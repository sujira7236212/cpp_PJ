#include <string>
#include <iostream>
#include "menu.h"
using namespace std;
BST test;
menu::menu(){
	array[1]="Metal";
	array[3]="Water";
    array[5] = "seeds";
}

menu::~menu(){

}
 
 void menu::menu1(){
	cout<<"Please choose first element"<<endl;
	int k;
	for(k=1;k<20;k++){
		if(!array[k].empty()){
			cout<<k<<".";
			cout<<array[k]<<endl;
		}
	}
}

void menu::menu2(){
	cout<<"Please choose second element"<<endl;
	int k;
	for(k=1;k<20;k++){
		if(!array[k].empty()){
			cout<<k<<".";
			cout<<array[k]<<endl;   
		}
	}
}

void menu::addmenu(int add){
    int r;
    // array[add] = array2[add];
    array[add] = returnname(add);
    cout<<returnname(add)<<endl;
}

int menu::loopmenu1(){
    int select1;
        menu1();
        cout<<"You choose: "<<endl;
	    cin>>select1;
        return select1;
}

int menu::loopmenu2(){
    int select2;
        menu2();
        cout<<"You choose: "<<endl;
	    cin>>select2;
        return select2;
}
