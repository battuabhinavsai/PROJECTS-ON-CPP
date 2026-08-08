// Problem: Count Alphabetic Characters in a String
#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[200];
    string name;
    cout<<"Enter your name:";
    getline(cin,name);
    int c = 0;
    for(char j:name){
        if(isalpha(j)){
            c++;
        }
    }
    cout<<c;
}