#include<iostream>
#include<conio.h>
using namespace std;
int main() {
    int n;
    int x=77;
    int count = 0;
    cout<<"GUESS A NUMBER BETWEEN 1-100:";
    for(int i=1;i<=10;i++){
        cin>>n;
        count=i;
        if(n<x){
            cout<<"THE NUMBER IS TOO LOW!"<<endl<<"GUESS A GREATER NUMBER :";
        }
        else if(n>x){
            cout<<"THE NUMBER IS TOO HIGH!"<<endl<<"GUESS A SMALLER NUMBER :";
        }
        else{
        	cout<<"_______________________________________"<<endl;
            cout<<"CONGRATULATIONS, YOUR GUESS IS CORRECT!"<<endl;
        }
        if(n==x){
            break;
        }
        
    }
    cout<<"YOU TOOK "<<count<<" CHANCES.";
    return 0;
}
