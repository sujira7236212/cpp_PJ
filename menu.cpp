#include <string>
#include <iostream>
#include "menu.h"
#include "disaster.h"
using namespace std;
menu::menu(){
	array[1]="Water";
	array[3]="Land";
    array[5]="Trees";
	array[7]="Animals";
	array[9]="Woods";
    array[11]= "Metal";
	array[13]="Male";
	array[15]="Female";
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
	if(add==0){
        array[0] = "Nothing Happen";
    }
	else{
		array[add] = returnname(add);
		flag++;
	}
	
}

int menu::return_flag(){
	return flag;
}


int menu::loopmenu1(){
    int select1;
		if(!array[6].empty()){
			disaster fire;
			if(fire.random()){
				fire.randomquiz();
				if(fire.returnans()){
					update_point(100);
				}
				else{
					update_point(-50);
					damage();
				}

			}
		}
		cout<<"Point: "<<return_point()<<endl<<endl;
        menu1();
        cout<<"You choose: "<<endl;
	    cin>>select1;
        return select1;
}

int menu::loopmenu2(){
    int select2;

		cout<<"Point: "<<return_point()<<endl<<endl;
        menu2();
        cout<<"You choose: "<<endl;
	    cin>>select2;
        return select2;
}
