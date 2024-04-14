#include <iostream>
#include "BST.cpp"
#include <string>
using namespace std;
class first :public BST{
    private:
    public:
        //first();
        int build(int,int);
        TreeNodePtr createNode();
        string returnname(int);

};
// first::first(){

// }
TreeNodePtr t;

// TreeNodePtr first::createNode(){
    
//     t = create(6,"Wood", create(1,"Metal",nullptr, nullptr),create(5, "Plant",create(2,"Water",nullptr, nullptr),create(3,"Seeds",nullptr, nullptr)));
//     return t;
// }


int first::build(int i,int j){
    //TreeNodePtr t;
    t = create(2,"Wood", create(1,"Metal",nullptr, nullptr),(create(4, "Plant",create(3,"Water",nullptr, nullptr),create(5,"Seeds",nullptr, nullptr))));
            // cout<<"You got "<<findparent(t,i,j)->name<<endl;
            // return findparent(t,i,j)->data;
            if((findNode(t,i)->data )== (findNode(t,j)->data)){
                cout<<"found "<<findNode(t,i)->data<<endl; 
                return findNode(t,i)->data;
            }
            else{
                cout<<"Nothing Happen"<<endl;
                return -1;
            }

}

string first::returnname(int add) {
        string n = findNodeName(t,add);
        return n;
    }