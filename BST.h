//Node of element
#ifndef BST_H
#define BST_H
#include <string>
using namespace std;
struct TreeNode{
        int data;
        int point;
        string name;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};
typedef TreeNode* TreeNodePtr;
class BST{
    private:
    
        TreeNode* root;
    public:
        //BST(int,string,TreeNodePtr,TreeNodePtr);
        // ~BST();
        TreeNodePtr create(int,string,TreeNodePtr,TreeNodePtr);
        TreeNodePtr findNode(TreeNodePtr,int);
        TreeNodePtr findparent(TreeNodePtr,int,int);
        string findNodeName(TreeNodePtr,int);
        //string returnname(int);

};
#endif