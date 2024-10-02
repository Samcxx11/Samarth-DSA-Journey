#include<iostream>
using namespace std;

int printarray(int arr[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
    cout<<endl;
}


int uniqueElement(int arr[] , int n){
    int ans = 0;
    for(int i=0 ; i<n ; i++){
        ans = ans^arr[i];               //! ^(XOR) operator // [int ^ 0 = int]
    }
    return ans;
}


int main()
{
    int arr[100]={1,2,4,2,1};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Unique element: "<<uniqueElement(arr,size)<<endl;



    return 0;


}