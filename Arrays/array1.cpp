#include<bits/stdc++.h>
using namespace std;


//? aise type ki list jisme hum same type ke items dal sakte hai. (ya to sambhar ya to idli ya dosa teeno ek sath nahi aa sakte array me eg. string int char lmao) int -> 4 bytes , array is contiguous , are accesibile from there index starting from 0 to n. and location is 0 to n-1.
//* why we use array -> to store multiple values in single variable.


int printArray(int arr[], int size){

    cout<<"Elements are :"<<endl;
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

    
}





int main()
{
    //? initializing values of array with same number.
    int arr[4];
    for(int i=0 ; i<4 ;i++){
        arr[i] = 5;
    }

    //? printing values of array.
    // for(int i=0 ; i<4 ;i++){
    //     cout<<arr[i]<<endl;
    // }
    // cout<<endl;

    printArray(arr , 4); // ! NOTE: we can make function and call it will be easier for array printing and  for other operations too. 


    //* to find the size of array.
    int size = sizeof(arr)/sizeof(int);
    cout<<"size of arr is: "<<size<<endl;
    cout<<endl;

    //? accessing through indexes.
    int first[4]={1,2,3,4};
    cout<<"first element: "<<first[0]<<endl;
    cout<<"second element: "<<first[1]<<endl;
    cout<<"third element: "<<first[2]<<endl;
    cout<<"fourth element: "<<first[3]<<endl;

    cout<<endl;

    for(int i=0 ; i<4 ; i++){
        cout<<"Element at index: "<<i<<" is "<<first[i]<<endl;
    }
    cout<<endl;


    //! taking input in array
    int arr2[4];
    cout<<"Enter Elements: ";
    for(int i=0;i<4;i++){
        cin>>arr2[i];
    }
    printArray(arr2,4);
}



