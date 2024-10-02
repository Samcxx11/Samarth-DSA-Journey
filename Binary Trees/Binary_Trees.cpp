#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            data =d;
            left = nullptr;
            right = nullptr;
        }
};

node* build_tree(node* root){
    
    cout<<"Data: "<<" ";
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data in left of "<<data<<" ";
    root->left = build_tree(root->left);

    cout<<"Enter data in right of "<<data<<" ";
    root->right = build_tree(root->right);

}

void LOT(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
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

node* inorder(node* root){
    if(root==NULL){
        return NULL;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

    return root;
}

node* preorder(node* root){
    if(root==NULL){
        return NULL;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

    return root;

}

node* postorder(node* root){
    if(root==NULL){
        return NULL;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

    return root;

}





int main()
{
    node* root = nullptr;
 
    root = build_tree(root);

    cout<<endl;
    LOT(root);

    cout<<endl;

    cout<<"inorder: "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"preorder: "<<endl;
    preorder(root);
    
    cout<<endl;
    cout<<"postorder: "<<endl;
    postorder(root);


    // 1 2 4 -1 -1 5 -1 -1 3 11 -1 -1 7 -1 -1
    cout<<endl;
    cout<<endl;





    return 0;

}


