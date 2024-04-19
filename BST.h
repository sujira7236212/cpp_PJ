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
        int point;
        int hp = 3;
        TreeNodePtr root = NULL;
    public:
        BST();
        ~BST();
        TreeNodePtr newNode(int item,string);
        TreeNodePtr findNode(TreeNodePtr,int);
        string findNodeName(TreeNodePtr,int);
        TreeNodePtr insert(TreeNodePtr ,int ,string );
        int check(int ,int );
        string returnname(int);
        int return_hp();
        int return_point();
        //string returnname(int);

};
#endif