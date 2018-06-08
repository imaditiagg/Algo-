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
node* levelOrderBuild()
{
	int d;
//	cout<<"Enter the root data";
	cin>>d;
	node*root = new node(d);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node*temp = q.front();
		q.pop();

	//	cout<<"Enter children of "<<temp->data<<endl;
		int d1,d2;
		cin>>d1>>d2;

		if(d1!=-1){
			temp->left = new node(d1);
			q.push(temp->left);
		}
		if(d2!=-1){
			temp->right = new node(d2);
			q.push(temp->right);
		}
	}
	return root;
}

void leftview(node *root,int cl,int &ml)
{
    if(root==NULL)
        return;
    else if(cl<ml)
    {
        cout<<root->data<<" ";
        ml=cl;
    }

    leftview(root->right,cl+1,ml);
    leftview(root->left,cl+1,ml);
}

int main()
{

node *root=NULL;
root=levelOrderBuild();
int cl=1,ml=0;
leftview(root,cl,ml);
return 0;


}
