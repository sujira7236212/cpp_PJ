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
        int hp = 5;
        TreeNodePtr root = NULL;
    public:
    TreeNodePtr t;
        BST();
        ~BST();
        TreeNodePtr newNode(int item,string);
        TreeNodePtr findNode(TreeNodePtr,int);
        void showHP();
        string findNodeName(TreeNodePtr,int);
        // int findNodeData(TreeNodePtr, string);
        TreeNodePtr insert(TreeNodePtr ,int ,string );
        int check(int ,int );
        string returnname(int);
        void showHP();
        int return_hp();
        void damage();
        TreeNodePtr search(TreeNodePtr,int);
        //string returnname(int);

};
#endif