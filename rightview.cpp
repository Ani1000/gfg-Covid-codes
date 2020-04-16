#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

};

  Node* newNode(int x){

  Node *root = new Node();

  root->data = x;
  root->left = NULL;
  root->right = NULL;

  return root;
 }

void rightView(Node *root, int level, auto &maps)
{
    if (root == nullptr)
        return;
    maps[level] = root->data;

    rightView(root->left, level + 1, maps);
    rightView(root->right, level + 1, maps);
}


int rightView(Node *root)
{
    unordered_map<int, int> maps;

    rightView(root, 1, maps);
    for (int i = 1; i <= maps.size(); i++)
        cout << maps[i] << " ";
}





int main() {
	/*Code To Test the logic
	  Creating an example tree
                5
			   / \
			  3   10
			 / \   \
			1   4   11
    */
	Node* root = nullptr;

	root = new newNode(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->right = new Node(4);
	root->right->left = new Node(5);
	root->right->right = new Node(6);

  rightView(root);


 return 0;
 }

 //      10
    //  /  \
  // 20      30
  // /  \
  40  60
//10 30 60


