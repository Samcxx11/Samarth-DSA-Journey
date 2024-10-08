
//! diameter of tree -> longest path b/w any two nodes => no. of nodes (also called width).
#include<iostream>
#include<queue>
using namespace std;

class node{
    public: 
        int data;
        node* left;
        node* right;

        node(int d){
            data =d ;
            left = nullptr;
            right = nullptr;
        }
};

node* buildTree(node* &root){
    int data;
    cout<<"Data: ";
    cin>>data;

    if(data ==-1){
        return NULL;
    }

    root = new node(data);

    cout<<"Enter data in left of"<<data<<" ";
    root->left = buildTree(root->left);

    cout<<"Enter data in right of"<<data<<" ";
    root->right = buildTree(root->right);

    return root;
}

void LOT(node* &root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}


node* inorder(node* &root , int &count){

    if(root==NULL){
        return 0;
    }

    inorder(root->left , count);

    if(root->left == NULL && root->right==NULL){
        count++;
    } 

    inorder(root->right , count);

    return root;

}

int height(node* &root){

    if(root==NULL){
        return 0;
    }

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1;

    return ans;
}

int no0fLeafNOdes(node* &root){
    int count =0;
    inorder(root,count);
    return count;
}


int Diameter(node* root){

    if(root==NULL){
        return 0;

    }

    int op1 = Diameter(root->right);
    int op2 = Diameter(root->left);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1 ,max(op2,op3));

    return ans;
}





int main(){
    node* root = nullptr;

    root = buildTree(root);

    cout<<endl;

    LOT(root);

    cout<<endl;

    cout<<"number of leaves in the tree is : "<<no0fLeafNOdes(root);

    cout<<endl;

    cout<<"height of the tree is: "<<height(root);

    cout<<endl;

    cout<<"Diameter is: "<<Diameter(root);

    // 1, 2, 4, 8, -1, -1, -1, 5, 9, -1, -1, -1, 3, 6, 10, -1, -1, -1, 7, 11, -1, -1, -1
    
    
    
    return 0;


}



