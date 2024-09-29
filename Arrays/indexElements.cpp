#include<iostream>
using namespace std;

int commonElement(int arr[] , int arr2[], int n, int m){
    for(int i=0 ; i<n ; i++){
        if(arr[i] == arr2[i]){

            cout<<"element found: "<<arr[i]<<endl;
        }

    }
}


int printArray(int arr[], int arr2[], int n){

    for(int i=0 ; i<n ; i++){
        cout<<"element at index "<<i<<" is: "<<arr[i]<<","<<arr2[i]<<" "<<endl;   
    }
    cout<<endl;
}

int main()
{
    
    int arr1[5]={10,6,43,66,5};
    int arr2[5]={1,66,3,4,5};



    commonElement(arr1,arr2,5);


    printArray(arr1,arr2,5);



    return 0;

}