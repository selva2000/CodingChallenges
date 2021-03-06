#include<iostream>
#include<queue>
using namespace std;


class node{

public:
	int data;
	node* left;
	node* right;

	node(int d){
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree(){

	int d;
	cin>>d;

	if(d==-1){
		return NULL;
	}

	node* root = new node(d);
	root->left = buildTree();
	root->right = buildTree();
	return root;
}

void print(node* root){//preorder: (N L R)

	if(root==NULL){
		return;
	}

	//print root first and followed by root sub-trees(childerens)
	cout<<root->data<<" ";
	print(root->left);
	print(root->right);

}

void print_inorder(node* root){//Inorder: (L N R)

	if(root==NULL){
		return;
	}

	print_inorder(root->left);
	cout<<root->data<<" ";
	print_inorder(root->right);
}

void print_postorder(node* root){//Post order: (L R N)

	if(root==NULL){
		return;
	}

	print_postorder(root->left);
	print_postorder(root->right);
	cout<<root->data<<" ";
	
}

int height(node* root){

	if(root==NULL){
		return 0;
	}

	int left_side = height(root->left);
	int right_side = height(root->right);
	return max(left_side, right_side) + 1;
}

void kthlevel(node* root, int k){

	if(root==NULL){
		return;
	}

	if(k==1){
		cout<<root->data<<" ";
		return;
	}

	kthlevel(root->left, k-1);
	kthlevel(root->right, k-1);
	return;
}

void allLevel(node* root){

	int H = height(root);

	for(int i=1;i<=H;i++){
		kthlevel(root,i);
		cout<<endl;
	}
	return;
}

void bfs(node* root){

	//conside input:
	//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

	queue<node*> q; 
	//node - used because i need 1st element(8) of the queue. 
	//node* - used to get address instead copying the data.
	
	//we did'nt used queue<int> Even though we know the 1st element is int(8), but we need node* to get the address so we can use it to get children of the node.
	

	q.push(root);
	// initially 8
	//Why we are pushing before while loop, bcoz we don't want our queue to be empty.
	q.push(NULL);
	//Immediately adding NULL..

	while(!q.empty()){

		//Getting front element to store
		node* front = q.front(); // intially front = 8
		if(front==NULL){
			cout<<endl; //making new line for each level order
			q.pop();    //poping out NULL.
			if(!q.empty()){
				q.push(NULL); //Adding NULL after the addition of children
			}
		}
		else{
			cout<<front->data<< ",";

		//Poping it
			q.pop();

		//Pushing it childrens if it exist

			if(front->left!=NULL){
				q.push(front->left);
			}

			if(front->right!=NULL){
				q.push(front->right);
			}
		}

	}
	return;
}

int main(){

	node* root = buildTree();
	/*cout<<"Preorder Traversal: ";
	print(root);
	cout<<endl;

	cout<<"Inorder Traversal: ";
	print_inorder(root);
	cout<<endl;

	cout<<"Postorder Traversal: ";
	print_postorder(root);
	cout<<endl;

	cout<<"Height of the tree: ";
	cout<<height(root);
	cout<<endl;

	cout<<"Kth-Level: ";
	kthlevel(root,3);
	cout<<endl;*/

	cout<<"All levels - O(N^2) ( using recursion ): "<<endl;
	allLevel(root);
	cout<<endl;

	cout<<"BFS - O(N) (using queue) : "<<endl;
	bfs(root);
}
