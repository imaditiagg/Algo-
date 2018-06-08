#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class TreeNode{
public:
    const int data;
    TreeNode*left;
    TreeNode*right;


    TreeNode(int d):data(d),left(NULL),right(NULL){

    }
};

void traverseTree(TreeNode*root,unordered_map<int,vector<int> > &m,int d=0)
{
    if(root==NULL){
        return;
    }

    int key = d;
    m[key].push_back(root->data);

    traverseTree(root->left,m, d-1);
    traverseTree(root->right,m, d+1);



}
node* levelOrderBuild()
{
	int d;
	//cout<<"Enter the root data";
	cin>>d;
	node*root = new node(d);

	queue<node*> q;
	q.push(root);

	while(!q.empty()){
		node*temp = q.front();
		q.pop();

		//cout<<"Enter children of "<<temp->data<<endl;
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

int main(){
    TreeNode* root=NULL;
    root=levelOrderBuild();


    unordered_map<int, vector<int> > m;

    traverseTree(root,m);
    int min_key=INT_MAX, max_key=INT_MIN;

    for(auto it=m.begin();it!=m.end();it++){
        min_key = min(min_key,it->first);
        max_key = max(max_key,it->first);
    }

    for(int key = min_key;key<=max_key;key++){

        for(int i=0;i < m[key].size();i++){
            cout<< m[key][i] <<" ";
        }
        cout<<endl;
    }


return 0;
}
