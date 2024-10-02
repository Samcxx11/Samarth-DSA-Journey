#include<iostream>
using namespace std;

int getlenght(char name[]){
    int count =0;
    for(int i=0 ; name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}



int main()
{
    char name[20];
    cout<<"Enter name: ";
    cin>>name;

    cout<<"your name is : "<<name<<endl;

    // '\0' -> null char

    cout<<"lenght: " <<getlenght(name);
    return 0;
}