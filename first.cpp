#include <iostream>
#include "BST.cpp"
#include <string>
using namespace std;
class first :public BST{
    private:
    public:
        //first();
        int build(TreeNodePtr,int,int);
        TreeNodePtr createNode();

};
// first::first(){

// }

TreeNodePtr first::createNode(){
    TreeNodePtr t;
    t = create(6,"Wood", create(1,"Metal",nullptr, nullptr),create(5, "Plant",create(2,"Water",nullptr, nullptr),create(3,"Seeds",nullptr, nullptr)));
    return t;
}


int first::build(TreeNodePtr t,int i,int j){
    // TreeNodePtr t;
    // t = create(6,"Wood", create(1,"Metal",nullptr, nullptr),create(5, "Plant",create(2,"Water",nullptr, nullptr),create(3,"Seeds",nullptr, nullptr)));
    if(i==2&&j==3 || i==3&&j==2){
        if((findparent(t,i,j)->data)==5){
            cout<<"You got "<<findparent(t,2,3)->name<<endl; //Plant
            return findparent(t,2,3)->data;
        }
        //addmenu("Plant");
    }
    else if(i==1&&j==5 || i==5&&j==1){
        if((findparent(t,i,j)->data)==6){
            cout<<"You got "<<findparent(t,1,5)->name<<endl; //Wood
            return findparent(t,1,5)->data;
    }
    }
    else {
        cout<<"Nothing happen"<<endl;
        return 0;
    }
    

    //std::cout<<findparent(t,3,5)->data<<" 1"<<endl;
}





