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
    root = insert(root,8,"city");
    insert(root,4,"Eco System");
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
    cout<<"Bye"<<endl;
}

int BST::check(int i,int j){
    t = root;
            if((findNode(t,i)->data )== (findNode(t,j)->data)){
                cout<<"found "<<findNode(t,i)->data<<endl; 
                return findNode(t,i)->data;
            }
            else{
                cout<<"Nothing Happen"<<endl;
                return 0;
            }
}

string BST::returnname(int add) {
    t =root;
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
    //cout<<"current "<<current->data<<endl;
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

TreeNodePtr BST::findparent(TreeNodePtr root, int lvalue, int rvalue){
    if (root == NULL) {
            return NULL;
        }

    if ((root->left && (root->left->data == lvalue || root->left->data == rvalue)) || 
        (root->right && (root->right->data == lvalue || root->right->data == rvalue))) {            
            return root;
        }

    TreeNodePtr parent = findparent(root->left, lvalue, rvalue);
    if (parent == nullptr) { 
            parent = findparent(root->right, lvalue, rvalue);
        }
        return parent;
    
}

