#include <iostream>
#include "BST.cpp"
#include <string>
using namespace std;
class first :public BST{
    private:
    public:
        //first();
        void build(int,int);
        void search(TreeNodePtr,int,int);
        void addmenu(string);
        void menu1();
        void menu2();
        void loopmenu();
};
// first::first(){

// }

void first::build(int i,int j){
    TreeNodePtr t;
    t = create(6,"Wood", create(1,"Metal",nullptr, nullptr),create(5, "Plant",create(2,"Water",nullptr, nullptr),create(3,"Seeds",nullptr, nullptr)));
    if(i==2&&j==3 || i==3&&j==2){
        if((findparent(t,i,j)->data)==5){
            cout<<"You got "<<findparent(t,2,3)->name<<endl; //Plant
            
        }
        //addmenu("Plant");
    }
    else if(i==1&&j==5 || i==5&&j==1){
        if((findparent(t,i,j)->data)==6){
            cout<<"You got "<<findparent(t,1,5)->name<<endl; //Wood
    }
    }
    else cout<<"Nothing happen"<<endl;
    

    //std::cout<<findparent(t,3,5)->data<<" 1"<<endl;
}

void first::menu1(){
	int select1;
	cout<<"Please choose first element"<<endl;
	int k;
	string array[20];
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

void first::menu2(){
	int select2;
	cout<<"Please choose second element"<<endl;
	int k;
	string array[20];
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

void first::addmenu(string add){
    string array[20];
    int k = 4;
    int r;
    if(k<20){
        r = ++k;
        array[r] = add; 
        cout<<r<<".";
		cout<<array[r]<<endl;
    }

}

void first::loopmenu(){
    int select1;
    int select2;
    while(1){
        menu1();
        cout<<"You choose: "<<endl;
	    cin>>select1;
        menu2(); 
        cout<<"You choose: "<<endl;
	    cin>>select2; 
        build(select1,select2);
        if(select1==2 && select2==3){
            addmenu("Plant");
        }
    }
    
}



