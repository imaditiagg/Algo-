#include<bits/stdc++.h>
#include<unordered_map>
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
	cout<<"Enter the root data";
	cin>>d;
	node*root = new node(d);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node*temp = q.front();
		q.pop();

		cout<<"Enter children of "<<temp->data<<endl;
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
void topView(node *root)
{
    if (root == NULL)
        return;

    unordered_map<int, int> m;
    queue<pair<node*, int>> qu;

    // push node and horizontal distance to queue
    qu.push(make_pair(root, 0));

    while (!qu.empty())
    {
        pair<node*, int> p = qu.front();
        node *n = p.first;
        int val = p.second;
        q.pop();

        // if horizontal value is not in the hashmap
        // that means it is the first value with that
        // horizontal distance so print it and store
        // this value in hashmap
        if (m.find(val)==m.end())
        {
            m[val] = n->data;
            cout<< n->data;
        }

        if (n->left != NULL)
            qu.push(make_pair(n->left, val-1));

        if (n->right != NULL)
            qu.push(make_pair(n->right, val+1));
    }
}

int main()
{

    node *root=NULL;
    root=levelOrderBuild();
    topview(root);

}
