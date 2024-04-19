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
        TreeNodePtr root;
    public:
        BST();
        // ~BST();
        TreeNodePtr create(int,string,TreeNodePtr,TreeNodePtr);
        TreeNodePtr findNode(TreeNodePtr,int);
        TreeNodePtr findparent(TreeNodePtr,int,int);
        string findNodeName(TreeNodePtr,int);
        TreeNodePtr insert(TreeNodePtr ,int ,string );
        int check(int ,int );
        string returnname(int);
        //string returnname(int);

};
#endif