#include<bits/stdc++.h>
using namespace std;

class node{
    public: 
        int data;
        node* left;
        node* right;

        node(int d){
            data =d ;
            left =nullptr;
            right =  nullptr;

        }


};


void Build_LOT(node* &root){
    cout<<"Data: "<<endl;
    int data;
    cin>>data;
    queue<node*>q;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left"<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"Enter right"<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }

    }
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


int main()
{
    node* root = nullptr;

    Build_LOT(root);
    cout<<endl;
    LOT(root);

    return 0;
}