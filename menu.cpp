#include <string>
#include <iostream>
#include <iomanip> 
#include <cctype>
#include <algorithm>
#include "menu.h"

using namespace std;
menu::menu(){
	array[1]="Water";
	array[3]="Land";
    array[5]="Trees";
	array[7]="Animals";
	array[9]="Wood";
    array[11]="Metal";
	array[13]="Male";
	array[15]="Female";
	for(int i=2 ; i<15 ; i+=2){ //blank options
		array[i] = " ";
	}
}

menu::~menu(){}

void menu::elementDisplay(int r){
	cout<<"  -------------------------------------------------------";
	for(int k=1;k<16;k++){
		if(k%4==1 || k==1) cout<<endl<<" |  ";
		if(!array[k].empty()){
			if(k == r) cout<<"\033[38;5;220m";
		 	cout<<setfill(' ')<<setw(9)<<array[k]<<"\033[0m"<<"  |  ";
		}
	}
	cout<<"           |  ";
	cout<<endl<<"  -------------------------------------------------------";
	
}

string* menu::getArr(){
	return array;
}
 
void menu::mainmenu(){
	cout<<"==========================================================="<<endl<<endl<<endl;
	cout<<"                   \033[1;37m C L E A N  C R A F T\033[0m"<<endl<<endl<<endl;
	cout<<"               \" Press any key to to enter \""<<endl<<endl<<endl;
	cout<<"      \033[1;31m⚘   \033[1;33m⚘   \033[1;36m⚘   \033[1;34m⚘                     \033[1;31m⚘   \033[1;33m⚘   \033[1;36m⚘   \033[1;34m⚘\033[0m"<<endl<<endl;
	cout<<"==========================================================="<<endl<<endl;
	cin.ignore(100, '\n');
	system("clear");
	
}

 void menu::gamemenu(int i, int result, DoublyLinkedList &L, event &exp){
	exp.cleanDisplay();
	cout<<endl;
	i==1 ? cout<<"\033[34m  Choose your 1st Element\033[0m"<<endl : cout<<"\033[36m  Please choose 2nd element\033[0m"<<endl;
	exp.specialDisplay();
	elementDisplay(result);
	
	cout<<endl<<"  -------------------------------------------------------";
	cout<<endl<<"  Sorted A-Z: ";
	L.selectionSort();
	L.print();
	cout<<"  -------------------------------------------------------"<<endl;
}

void menu::addmenu(int add, DoublyLinkedList &L){
    int r;
    // array[add] = array2[add];
	if(add==0){
        array[0] = "Nothing Happen";
    }
	else{
		if(array[add] != returnname(add) ){
			array[add] = returnname(add);
			flag++;
		}
		L.insert(array[add]);
		
	}
	
}

int menu::return_flag(){
	return flag;
}

int menu::return_mainhp(){
	int hpp = return_bsthp();
	return hpp;
}

void menu::gameexit(event &e){
	if(return_bsthp()<0){
	cout<<endl<<"==========================================================="<<endl;
	cout<<endl<<"                       \033[1mZero Hearts\033[0m"<<endl;
	cout<<endl<<"       You Failed to build up your Sustainable City."<<endl;
	cout<<endl<<"                       \" TOO BAD \""<<endl;
	}
	else if(return_flag()>15){
	cout<<endl<<"==========================================================="<<endl;
	cout<<endl<<"                      \033[1mCONGRATULATIONS\033[0m"<<endl;
	cout<<endl<<"       You successfully built your Sustainable City."<<endl;
	cout<<endl<<"                      \" GREAT JOB \""<<endl;	
	}
	else{
	cout<<endl<<"==========================================================="<<endl;
	cout<<endl<<"                    \033[1mPLEASE DON'T GO ...\033[0m"<<endl;
	cout<<endl<<"                   You decided to leave.";
	cout<<endl<<"                 \" JUST LIKE MY PARENTS \"";		
	cout<<endl<<"                   - Someone, probably"<<endl;
	}
	e.sustainrate();
	cout<<endl<<"-----------------------------------------------------------"<<endl;
	cout<<endl<<"                         \033[1mTHE END !\033[0m                       "<<endl;
	cout<<endl<<"                \" Press any key to to exit \""<<endl;
	cout<<endl<<"==========================================================="<<endl;
	cin.get();
}

void menu::newele(int result){
	if(flag>8 && result!=0) {
	cout<<endl<<"         ----------------------------------------"<<endl;
	cout<<"        |  Congratulations! You Made \033[38;5;220m"<<setfill(' ')<<setw(9)<<array[result]<<"\033[0m"<<"!  |";
	cout<<endl<<"         ----------------------------------------"<<endl;
	}
	else{
	cout<<endl<<"         ------------------------------------------"<<endl;
	cout<<"        |  What a Bummer! You Made \033[1;31mNothing Happen\033[0m"<<"!  |";
	cout<<endl<<"         ------------------------------------------"<<endl;	
	}
}

int menu::loopmenu(int k, int result, DoublyLinkedList &L,int turn, event &exp){
    string select1, temp; 
		cout<<"\033[1m Round : "<<turn<<"\033[0m"<<endl;
        gamemenu(k,result,L,exp);
	while(true){
	k==1 ? cout<<"\033[34m" :  cout<<"\033[36m" ;
	cout<<endl<<"  Your selection: ";
	cin>>select1; 
	cout<<"\033[0m";
	transform(select1.begin(), select1.end(), select1.begin(), ::toupper);
	bool found = false;
    for(int i=1 ; i<16 ; i++) {
		temp = array[i];
		transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
        if (temp == select1) {
            found = true;
            return i;
        }
    }
    if(!found) cout << select1 << " not found. Try again." << endl;
	} 
}

void menu::callDisaster(){

	static std::default_random_engine generator(std::random_device{}());
  	int n = generator() % 6;
	bool t=true;
	switch (n)
	{
		case 1:
			if (array[1] == "Water"){
				elementDisplay(17);
				Fire.description();
				Fire.getInput();
				Fire.isSolved();
				Fire.ansDescription();
				t = Fire.returnAns();
			}
			break;
		case 2:
			if (array[5] == "Trees"){
				elementDisplay(17);
				Land.description();
				Land.getInput();
				Land.isSolved();
				Land.ansDescription();
				t = Land.returnAns();
			}
			break;
		case 3:
			if (array[14] == "People"){
				elementDisplay(17);
				People.description();
				People.getInput();
				People.isSolved();
				People.ansDescription();
				t = People.returnAns();
			}
			break;

		default:
			t=true;
			break;
	}
	if(!t){
		damage();
	} if(n<=3) showHP();
	cin.ignore(100, '\n');
	cin.get();
	system("clear");
}



