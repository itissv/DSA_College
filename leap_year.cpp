#include<iostream>
using namespace std;
int main(){
    int year,temp;
    cout<<"Enter the Year , which has to be checked ";
    cin>>year;
    if(year%100==0){
        temp=year/100;
        if(temp%4==0){
             cout<<year<<" is a Leap year ";   
        } 
        else{
            cout<<year<<" is not a Leap year ";   
        }
    }
    else if(year%4==0){
        cout<<year<<" is a Leap year "; 
    }

    return 0;
}