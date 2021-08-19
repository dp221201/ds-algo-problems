#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int key){
        this->key=key;
        left=right=NULL;

    }

};
bool search(Node*root,int key){
    if(root==NULL){
        return false;


    }
    if(root->key==key){
        return true;
    }
    if(key<root->key){
        return search(root->left,key);

    }
    return search(root->right,key);
}   
Node* remove(Node* root,int key){
    if(root==NULL){
        return NULL;
    }
    else if(key<root->key){
        root->left=remove(root->left,key);

    }
    else if(key>root->key){
        root->right=remove(root->right,key);

    }else{
        if(root->left=NULL&&root->right=NULL){
            delete root;
            root=NULL;

        }

    }
    else if(root->left=NULL){
        Node* temp=root;
        root=root->right;
        delete temp;
    }
    else if(root->right=NULL){
        Node* temp=root;
        root=root->left;
        delete root;
    
    }
    else{
        Node* temp=findmin(root->right);
        root->key=temp->key;
        root->right=remove(root->right,temp->key);
    }
    
}
Node* findmin(Node* root){
    while(root->left!=NULL){
        root=root->left;
        
    }
    return root;
}
    

void printInorder(Node* root){
    if(root==NULL){return;}
    printInorder(root->left);
    cout<<root->key;
    printInorder(root->right);

}
Node* insert(Node*root,int key)
{
    if(root==NULL){
        return new Node(key);

    }
    if(key<root->key){
        root->left=insert(root->left,key);

    }else{
        root->right=insert(root->right,key);

    }
    return root;
}

    
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
   // while(test--)
   /* {
        solve();
    }
    return 0;



*/

Node* root=NULL;
int arr[]={8,3,10,1,6,14,4,7,13};
for(int x :arr){
    root=insert(root,x);


}
}