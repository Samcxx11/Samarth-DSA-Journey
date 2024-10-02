#include<iostream>
using namespace std;

int sortarray(int arr[], int n){
    int i=0;
    int j=n-1;

    while(i<j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0 &&  i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}


int printarray(int arr[] , int n){

    for(int i=0 ;i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={0,1,0,0,1,1};
    cout<<"normal array: "<<endl;
    printarray(arr,6);
    sortarray(arr,6);
    cout<<"sorted array: "<<endl;
    printarray(arr,6);

    return 0;

}