//Node of element
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
        BST();
        ~BST();
        TreeNodePtr create(int,TreeNodePtr,TreeNodePtr);
        TreeNodePtr findNode(TreeNodePtr,int);
        TreeNodePtr findparent(TreeNodePtr,int,int);
};
