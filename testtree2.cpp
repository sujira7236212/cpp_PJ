#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    TreeNode* root;

public:
    BinaryTree(int rootValue) {
        root = new TreeNode(rootValue);
    }

    // Function to insert a node in the binary tree using constructor
    BinaryTree(int parentValue, int value, char position) {
        root = new TreeNode(parentValue);
        insertNode(root, value, position);
    }

    // Function to insert a node in the binary tree
    void insertNode(TreeNode* parent, int value, char position) {
        if (parent == nullptr) {
            cout << "Parent not found." << endl;
            return;
        }

        if (position == 'L' || position == 'l') {
            if (parent->left == nullptr) {
                parent->left = new TreeNode(value);
            } else {
                cout << "Left child already exists." << endl;
            }
        } else if (position == 'R' || position == 'r') {
            if (parent->right == nullptr) {
                parent->right = new TreeNode(value);
            } else {
                cout << "Right child already exists." << endl;
            }
        } else {
            cout << "Invalid position specified." << endl;
        }
    }

    // Function to print the inorder traversal of the binary tree
    void printInorder(TreeNode* node) {
        if (node == nullptr) {
            cout<<"YYYY"<<endl;
        }

        printInorder(node->left);
        cout << node->data << " ";
        printInorder(node->right);
    }

    // Wrapper function to print the inorder traversal of the binary tree
    void printInorder() {
        printInorder(root);
        cout << endl;
    }
};

int main() {
    TreeNode* t;
    BinaryTree tree(4); // Root node with value 4
    BinaryTree a(4, 3, 'L'); // Insert 3 as the left child of 4
    BinaryTree b(3, 1, 'L'); // Insert 1 as the left child of 3
    BinaryTree c(3, 2, 'R'); // Insert 2 as the right child of 3
    BinaryTree d(4, 5, 'R'); // Insert 5 as the right child of 4

    cout << "Inorder traversal: ";
    a.printInorder(t);

    return 0;
}
