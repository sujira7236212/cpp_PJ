#include <iostream>
#include <string.h>
using namespace std;

struct TreeNode {
    int data;
    string name;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree(int value, TreeNode* left, TreeNode* right,string n){
        TreeNode* newNode = new TreeNode(value);
        newNode->left = left;
        newNode->right = right;
        newNode->name = n;
    }

    // Function to insert a node in the binary tree
    // Function to create a node with left and right children
    TreeNode* createNode(int value, TreeNode* left, TreeNode* right) {
        TreeNode* newNode = new TreeNode(value);
        newNode->left = left;
        newNode->right = right;
        return newNode;
    }

    // Function to print the children of a node
    void printChildren(int value,TreeNode* p) {
        TreeNode* node = findNode(p, value);

        if (node != nullptr) {
            std::cout << "Children of " << value << ": ";
            if (node->left != nullptr) {
                std::cout << node->left->data << " ";
            }
            if (node->right != nullptr) {
                std::cout << node->right->data << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Node with value " << value << " not found." << std::endl;
        }
    }

    // Function to find a node in the binary tree
    TreeNode* findNode(TreeNode* node, int value) {
        if (node == nullptr || node->data == value) {
            return node;
        }

        if (value < node->data) {
            return findNode(node->left, value);
        } else {
            return findNode(node->right, value);
        }
    }

    // Function to print the inorder traversal of the binary tree
    void printInorder(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        printInorder(node->left);
        std::cout << node->data << " ";
        printInorder(node->right);
    }

    // Wrapper function to print the inorder traversal of the binary tree
    void printInorder() {
        printInorder(root);
        std::cout << std::endl;
    }

    // Function to find the parent of a given node in the binary tree
    TreeNode* findParent(TreeNode* root, int parentData1, int parentData2) {
        if (root == nullptr) {
            return nullptr;
        }

        if ((root->left && (root->left->data == parentData1 || root->left->data == parentData2)) || 
            (root->right && (root->right->data == parentData1 || root->right->data == parentData2))) {
            return root;
        }

        TreeNode* parent = findParent(root->left, parentData1, parentData2);
        if (parent == nullptr) {
            parent = findParent(root->right, parentData1, parentData2);
        }
        
        return parent;
    }

};

int main() {
    BinaryTree tree;
    // BinaryTree a(1,nullptr,nullptr,"a");
    // BinaryTree b(2,nullptr,nullptr,"b");
    // BinaryTree c(3,nullptr,nullptr,"c");
    // BinaryTree d(5,nullptr,nullptr,"d");
   // TreeNode* p; 
    
    TreeNode* p = tree.createNode(4, tree.createNode(3, tree.createNode(1,nullptr, nullptr), tree.createNode(2,nullptr, nullptr)), tree.createNode(5, nullptr, nullptr));
    tree.printInorder(p);
    std::cout<<std::endl;
    std::cout << "Children of 4: ";
    tree.printChildren(4,p);
    std::cout<<std::endl;
    if(tree.findNode(p,4)!=NULL){
        std::cout<<"yes"<<std::endl;
    }
    else std::cout<<"no"<<std::endl;
    std::cout<<tree.findParent(p,3,5)->data;
    
    return 0;
}
