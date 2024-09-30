#include<bits/stdc++.h>
using namespace std;

class node{

    public:

        int data;
        node* left;
        node* right;

        node(int d){
            data = d;
            left = nullptr;
            right = nullptr;
        }


};

node* built_tree(node* root){
    cout<<"Value: "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data ==-1){
        return nullptr;
    }


    cout<<"Enter data in left of "<<data<<endl;
    root->left = built_tree(root->left);

    cout<<"Enter data in right of "<<data<<endl;
    root->right = built_tree(root->right);

    return root;

}

void LOT(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root){
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    
}

void preorder(node* root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

    
}


void postorder(node* root){
    if(root==NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

    
}





int main()
{
    node* root = nullptr;

    root = built_tree(root);

    cout<<endl;
    LOT(root);
    cout<<endl;

    cout<<"Inorder: "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"preorder: "<<endl;
    preorder(root);

    cout<<endl;
    cout<<"postorder: "<<endl;
    postorder(root);


}