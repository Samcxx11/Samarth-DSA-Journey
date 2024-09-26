#include<bits/stdc++.h>
using namespace std;

bool Search(int arr[] , int n , int key){
    //*  1-> true    0-> false
    for(int i=0 ; i<n ; i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}

int main()
{
    
    int arr[5] = {1,5,7,3,29};
    int key;
    cout<<"Enter key: ";
    cin>>key;

    bool found  = Search(arr , 5 , key);
    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is not present "<<endl;
    }

    return 0;
}