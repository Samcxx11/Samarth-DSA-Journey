#include<iostream>
using namespace std;

int pairsum(int arr[] , int n){
    
   int target = 5;
   for(int i=0 ; i<n ; i++){
    for(int j=i+1 ; j<n ; j++){
        if(arr[i] + arr[j] == target){
            cout<<arr[i]<<" at index: "<<i<<" and "<<arr[j]<<" at index: "<<j<<endl;
            cout<<arr[i]<<" "<<" + "<<" "<<arr[j]<<" = "<<target<<endl;
        }
    }
   }
}


int main()
{
    int arr1[10] = {1,-4,2,10,0,3,5,-5,9,4};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    pairsum(arr1 , size);
    

    
}