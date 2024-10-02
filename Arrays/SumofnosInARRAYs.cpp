#include<bits/stdc++.h>
using namespace std;

int sumofnos(int arr[] , int n){
    int sum =0;
    for(int i=0 ; i<n ; i++){
        sum = sum + arr[i];
    }
    return sum;
}



int main()
{
    int arr[100];
    int size;
    cin>>size;
    for(int i=0 ; i<size ; i++){
        cin>>arr[i];
    }

    for(int i=0 ; i<size;i++){
        cout<<"Elements of array are: "<<arr[i]<<" ";
        cout<<endl;
    }
    cout<<"Sum of numbers in an array is : "<<sumofnos(arr,size)<<endl;
}