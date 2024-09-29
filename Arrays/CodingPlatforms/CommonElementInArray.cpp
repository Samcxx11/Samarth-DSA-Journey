#include<iostream>
using namespace std;

int commonElement(int arr[] , int arr2[], int n, int m){
    for(int i=0 ; i<n ; i++){
        int element = arr[i];
        for(int j=0 ; j<m ; j++){
            if(element == arr2[j]){
                cout<<"common element in both array is : "<<element<<endl;
                break;
            }
            
        }
    }
    cout<<endl;
}


int main()
{
    
    int arr1[1000]={10,6,43,66,5};
    int arr2[1000]={1,66,3,4,5};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr1)/sizeof(arr2[0]);



    commonElement(arr1,arr2,size1,size2);




    return 0;

}