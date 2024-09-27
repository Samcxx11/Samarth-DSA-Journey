#include<bits/stdc++.h>
using namespace std;


int swapAlternate(int arr[] , int n){
    for(int i=0 ; i<n ; i=i+2){
        if(i<n){
            swap(arr[i], arr[i+1]);
            
        }
    }
}



int printArray(int arr[], int size){
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{

    int arr[6]={1,2,3,4,5,6};
    
    cout<<"Before swaping: "<<endl;
    printArray(arr,6);

    cout<<"After Swapping: "<<endl;
    swapAlternate(arr , 6);
    printArray(arr,6);



    return 0;
}