#include<iostream>
#include<queue>
using namespace std;

class node{
public:
	int data;
	node*left;
	node*right;

	node(int d){
		data = d;
		left = right = NULL;
	}
};
//Recursive fn to build tree
node* buildTree(node *root){
	int data;
	cin>>data;

	if(data!=-1){
		root = new node(data);
		root->left = buildTree(root->left);
		root->right = buildTree(root->right);
		return root;
	}
	else{
		return NULL;
	}
}
void printTree(node*root){
	//Preorder
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";
	printTree(root->left);
	printTree(root->right);
}


node* mirrorimage(node* root)  //find mirror image of tree
{
    node *temp=NULL;
	if(root==NULL)
	return NULL;
	else
	{
	    mirrorimage(root->left);
	    mirrorimage(root->right);
		temp=root->left;  //swap left and right node
		root->left=root->right;
		root->right=temp;
		return root;
	}
}


bool identical(node *root1,node *root2) //check whether two tree are identical
{
    if(root1==NULL && root2==NULL)
        return true;
    else if((root1->data==root2->data) && identical(root1->left,root2->left) && identical(root1->right,root2->right))
        return true;

     return false;
}



bool printAncestors(node *root, int target)
{
  /* base cases */
  if (root == NULL)
     return false;

  if (root->data == target)
     return true;

  /* If target is present in either left or right subtree of this node,
     then print this node and return true */
  if ( printAncestors(root->left, target) ||
       printAncestors(root->right, target) )
  {
    cout << root->data << " ";
    return true;
  }

  /* Else return false */
  return false;
}


void rightview(node *root,int cl,int &ml)
{
    if(root==NULL)
        return;
    else if(cl>ml)
    {
        cout<<endl<<root->data;
        ml=cl;
    }

    rightview(root->right,cl+1,ml);
    rightview(root->left,cl+1,ml);
}


int main()
{

    node *root1=NULL;
    root1=buildTree(root1);
    printTree(root1);
    node *root2;

   // root2= mirrorimage(root1);

  /* root2=buildTree(root2);
    printTree(root2);
   cout<<endl<<identical(root1,root2);*/

   /*int d;
   cin>>d;
   printAncestors(root1,d);*/

   int cl=0;
   int ml=-1;
   rightview(root1,cl,ml);


    return 0;
}
