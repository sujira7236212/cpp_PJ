#include <iostream>
#include "BST.h"

TreeNodePtr BST::create(int item,string n,TreeNodePtr left,TreeNodePtr right){
    TreeNodePtr newNode = new TreeNode(item);
        newNode->left = left;
        newNode->right = right;
        newNode->name = n;
        return newNode;
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
    //cout<<"current "<<current->data<<endl;
    return current->name;
    //cout<<"current "<<current->data<<endl;
    
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

// string BST::returnname(int value) {
//         TreeNodePtr node = findNode(root, value);
//         if (node != nullptr) {
//             return node->name;
//         } else {
//             return "null"; // Or throw an exception indicating the node was not found
//         }
//     }
