#include <iostream>
#include "BST.cpp"
#include <string>
using namespace std;
class first :public BST{
    private:
    public:
        first();
        void build();
};

first::first(){
    //build();
}

void first::build(){
    TreeNodePtr t;
    
    t = create(4,"4", create(3, "3",create(1,"1",nullptr, nullptr),create(2,"2",nullptr, nullptr)),create(5,"5",nullptr, nullptr));
    std::cout<<findparent(t,3,5)->data<<" 1"<<endl;
}



