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
 
void menu::mainmenu(){
	cout<<"========================================================="<<endl<<endl<<endl;
	cout<<"                  \033[1;37m C L E A N  C R A F T\033[0m"<<endl<<endl<<endl;
	cout<<"              \" Press any key to to enter \""<<endl<<endl;
	cout<<"     \033[1;31m⚘   \033[1;33m⚘   \033[1;36m⚘   \033[1;34m⚘                     \033[1;31m⚘   \033[1;33m⚘   \033[1;36m⚘   \033[1;34m⚘\033[0m"<<endl;
	cout<<"========================================================="<<endl<<endl;
	cin.get();
}

 void menu::gamemenu(int i, int result, DoublyLinkedList &L){
	i==1 ? cout<<"\033[34m"<<"  Choose your 1st Element"<<"\033[0m"<<endl : cout<<"\033[36m"<<"  Please choose 2nd element"<<"\033[0m"<<endl;
	// cout<<"            ------------------------------------------"<<endl;
	// cout<<"   \033[4mSpecial\033[0m | ";
	// for(int k=0; k<3; k++){
	// 	cout<<"\033[1;33m"<<setfill(' ')<<setw(12)<<special[k]<<"\033[0m |"; //dont forgor change
	// }
	// cout<<endl<<"            ------------------------------------------";
	cout<<endl<<"  -------------------------------------------------------";
	for(int k=1;k<16;k++){
		if(k%4==1 || k==1) cout<<endl<<" |  ";
		if(!array[k].empty()){
			if(k==result) cout<<"\033[38;5;220m";
		 	cout<<setfill(' ')<<setw(9)<<array[k]<<"\033[0m"<<"  |  ";
		}
	}
	cout<<"           |  ";
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
		array[add] = returnname(add);
		L.insert(array[add]);
		flag++;
	}
	
}

int menu::return_flag(){
	return flag;
}

void menu::gameexit(){
	char choice;
	cout<<endl<<"  -------------------------------------------------------"<<endl;
	cout<<endl<<"                         THE END !                       ";
	cout<<endl<<"                \" Press any key to to exit \""<<endl;
	cout<<endl<<"  -------------------------------------------------------"<<endl;
	cin.get();
}

void menu::newele(int result){
	if(flag>8 && result!=0) cout<<"Congratulations! You Made "<<"\033[38;5;220m"<<array[result]<<"\033[0m"<<" !\n";
}

int menu::loopmenu(int k, int result, DoublyLinkedList &L,int turn){
    string select1, temp; 
		cout<<"\033[1mRound : "<<turn<<"\033[0m"<<endl<<endl;
        gamemenu(k,result,L);
	while(true){
	k==1 ? cout<<"\033[34m" :  cout<<"\033[36m" ;
	cout<<"  Your selection: ";
	cin>>select1; 
	cout<<"\033[0m";
	transform(select1.begin(), select1.end(), select1.begin(), ::toupper);
	bool found = false;
    for(int i=1 ; i<16 ; i++) {
		temp = array[i];
		transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
        if (temp == select1) {
            found = true;
			k==1 ? cout<<"\033[34m" :  cout<<"\033[36m" ;
            cout << "  You chose: " << array[i] << endl;
			cout<<"\033[0m";
            return i;
        }
    }
    if(!found) cout << select1 << " not found. Try again." << endl;
	} 
}

void menu::exploreMenu(){
	string choice;
	explore.description();
	cout<<"Choose an Element: ";
	cin>>choice;
	transform(choice.begin(), choice.end(), choice.begin(), ::toupper);
	explore.randomEvent(choice);
}