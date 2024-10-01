#include<bits/stdc++.h>
#include<string>
using namespace std;


int length(char name[]){
    int count =0;
    for(int i=0 ; name[i]!='\0';i++){
        count++;
    }

    return count;

}



int checkPalindrome(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        if(name[s]!=name[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

    
}


int main()
{
    char name[20];
    cin>>name;
    cout<<name;

    int len = length(name);

    cout<<"palindrome or not: "<<checkPalindrome(name,len)<<endl;

    
    
    return 0;


    
}