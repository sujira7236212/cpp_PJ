#include <string>
#include <iostream>
using namespace std;
#include "first.cpp"

class menu :public first{
    private:
    string  array[20];

    public:
    void menu1();
    void menu2();
    int loopmenu1();
    int loopmenu2();
    void addmenu(int);
    string array2[20] ={"", "Metal", "Wood", "Water", "Plant","Seeds" ,"Glass"};
};

 
 void menu::menu1(){
	//int select1;
	cout<<"Please choose first element"<<endl;
	int k;
	//string array[20];
	array[1]="Metal";
	// array[2]=" ";
	array[3]="Water";
	// array[4]=" ";
    array[5] = "seeds";
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
	// array[2]=" ";
	array[3]="Water";
	// array[4]=" ";
    array[5] = "seeds";

	for(k=1;k<20;k++){
		if(!array[k].empty()){
			cout<<k<<".";
			cout<<array[k]<<endl;
            
		}
        //cout<<array[5]<<endl;
	}
	// cout<<"You choose: "<<endl;
	// cin>>select2;
	// return select2;
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
