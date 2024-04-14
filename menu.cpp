#include <string>
#include <iostream>
using namespace std;
#include "first.cpp"

class menu :public first{
    private:
    string array[20];

    public:
    void menu1();
    void menu2();
    void loopmenu(TreeNodePtr);
    void addmenu(int,TreeNodePtr);
};
 
 void menu::menu1(){
	//int select1;
	cout<<"Please choose first element"<<endl;
	int k;
	//string array[20];
	array[1]="Metal";
	array[2]="Water";
	array[3]="Seeds";
	array[4]="Glass";
	for(k=1;k<20;k++){
		if(!array[k].empty()){
			cout<<k<<".";
			cout<<array[k]<<endl;
		}
		
	}
	// cout<<"You choose: "<<endl;
	// cin>>select1;
	// return select1;
	
}

void menu::menu2(){
	//int select2;
	cout<<"Please choose second element"<<endl;
	int k;
	//string array[20];
	array[1]="Metal";
	array[2]="Water";
	array[3]="Seeds";
	array[4]="Glass";
	for(k=1;k<20;k++){
		if(!array[k].empty()){
			cout<<k<<".";
			cout<<array[k]<<endl;
            
		}
	}
	// cout<<"You choose: "<<endl;
	// cin>>select2;
	// return select2;
}

void menu::addmenu(int add,TreeNodePtr t){
    int r;
    string name;
    name = findNode(t,add)->name;
    array[add] = name;

}

void menu::loopmenu(TreeNodePtr t){
    int select1;
    int select2;
    for(int i=0;i<4;i++){
        menu1();
        cout<<"You choose: "<<endl;
	    cin>>select1;
        menu2(); 
        cout<<"You choose: "<<endl;
	    cin>>select2; 
        int add = build(t,select1,select2);
        addmenu(add );
    }
    
}