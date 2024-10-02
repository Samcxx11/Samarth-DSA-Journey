#include<iostream>
using namespace std;

int Triplet(int arr[],int n){
    int target = 12;

    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ;j++){
            for(int k=j+1 ; k<n ; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<" at index: "<<i<<" and "<<arr[j]<<" at index: "<<j<<" and "<<arr[k]<<" at index: "<<k<<endl;
                    cout<<arr[i]<<" + "<<arr[j]<<" + "<<arr[k]<<" = "<<target<<endl;
                    break;
                }
            }
        }
    }
}


int printarray(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    Triplet(arr,size);

}