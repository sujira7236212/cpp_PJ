//Node of element
#ifndef BST_H
#define BST_H
#include <string>
using namespace std;

struct TreeNode{
        int data;
        string name;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};
typedef TreeNode* TreeNodePtr;
class BST{
    private:
        TreeNodePtr root = NULL;
    public:
    TreeNodePtr t;
        BST();
        ~BST();
        TreeNodePtr newNode(int item,string);
        TreeNodePtr findNode(TreeNodePtr,int);
        string findNodeName(TreeNodePtr,int);
        // int findNodeData(TreeNodePtr, string);
        TreeNodePtr insert(TreeNodePtr ,int ,string );
        int check(int ,int );
        string returnname(int);
        void showHP();
        int return_bsthp();
        void damage();
        TreeNodePtr search(TreeNodePtr,int);
        //string returnname(int);

};
#endif