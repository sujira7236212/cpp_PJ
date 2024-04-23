#include <iostream>
#include "BST.h"

TreeNodePtr BST::newNode(int item,string n)
{
    TreeNodePtr temp
        = new TreeNode(item);
    temp->name = n;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNodePtr BST:: insert(TreeNodePtr tmp,int item,string n){
    if (tmp == NULL)
        return newNode(item,n);
    if (item < tmp->data)
        tmp->left = insert(tmp->left, item,n);
    else if (item > tmp->data)
        tmp->right = insert(tmp->right, item,n);
    return tmp;
}

TreeNodePtr t;

BST::BST() {
    //cout<<"HI";

    //root = create(2,"Wood", create(1,"Metal",nullptr, nullptr),(create(4, "Plant",create(3,"Water",nullptr, nullptr),create(5,"Seeds",nullptr, nullptr))));
    t = root;
    root = insert(root,8,"City");
    insert(root,4,"Ecosystem");
    insert(root,12,"Village");
    insert(root,2,"River");
    insert(root,6,"Forest");
    insert(root,1,"Water");
    insert(root,3,"Land");
    insert(root,5,"Trees");
    insert(root,7,"Animals");
    insert(root,10,"House");
    insert(root,14,"People");
    insert(root,9,"Wood");
    insert(root,11,"Meatal");
    insert(root,13,"Male");
    insert(root,15,"Female");
}

BST::~BST(){
    
}

int BST::check(int i,int j){
    t = root;
            if((search(t,i)) == (search(t,j))){
                cout<<"Nothing Happen"<<endl;
                return 0;
            }
            else if((findNode(t,i)->data )== (findNode(t,j)->data)){
                point += 20;
                return findNode(t,i)->data;
            }
            else{
                cout<<"Nothing Happen"<<endl;
                point -= 10;
                return 0;
            }
}



string BST::returnname(int add) {
    t = root;
    // return findNodeName(t, add);
        string n = findNodeName(t,add);
        return n;
}

TreeNodePtr BST::findNode(TreeNodePtr root, int value){
    TreeNodePtr parent = NULL;
    TreeNodePtr current = root;

    while (current != NULL && current->data != value) {
        
        parent = current;
        if (value < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
        
    }
    return parent;
}

string BST::findNodeName(TreeNodePtr root, int value){
    
    TreeNodePtr parent = NULL;
    TreeNodePtr current = root;

    while (current != NULL && current->data != value) {
        
        parent = current;
        if (value < current->data) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return current->name;   
}

TreeNodePtr BST::search(TreeNodePtr root, int value) {
    if (root == NULL || root->data == value)
        return root;

    if (root->data < value)
        return search(root->right, value);
    
    return search(root->left, value);
}


int BST::return_point(){
    return point;
}

int BST::return_hp(){
    return hp;
}

void BST::update_point(int x){
    point += x;
}

void BST::damage(){
    hp--;
}

