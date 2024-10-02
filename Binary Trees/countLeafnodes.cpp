#include<bits/stdc++.h>
using namespace std;

class node {
    public: 
        int data;
        node* left;
        node* right;

        node(int d) {
            data = d;
            left = nullptr;
            right = nullptr;
        }
};

node* build_tree(node* &root) {
    cout << "Data: " << " ";
    int data;
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    root = new node(data);

    cout << "Enter data in left of " << data << " ";
    root->left = build_tree(root->left);

    cout << "Enter data in right of " << data << " ";
    root->right = build_tree(root->right);

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


void inorder(node* root, int &count) { 
    if (root == NULL) {
        return;
    }

    inorder(root->left, count);
    
    if (root->left == NULL && root->right == NULL) { 
        count++;
    }

    inorder(root->right, count);
}

int noofleafs(node* root) {
    int count = 0;
    inorder(root, count); 
    return count;
}

int main() {
    node* root = nullptr;
 
    root = build_tree(root);

    cout << endl;
    LOT(root);

    cout << endl;

    cout << "no of leaves: " << noofleafs(root);
    cout << endl;

    return 0;
}
