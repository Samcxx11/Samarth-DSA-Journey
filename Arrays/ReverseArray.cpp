#include<bits/stdc++.h>
using namespace std;

int reverseArray(int arr[] , int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

}


int printArr(int arr[] , int n){
    for(int i=0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[5] = {4,5,3,2,1};
    int arr2[6] = {6,8,2,1,5,3};
    cout<<"Before reversing: "<<endl;
    printArr(arr,5);
    printArr(arr2,6);


    cout<<"After reversing: "<<endl;
    reverseArray(arr,5);
    reverseArray(arr2,6);

    printArr(arr,5);
    printArr(arr2,6);


    
}