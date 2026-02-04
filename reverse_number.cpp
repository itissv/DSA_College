#include<iostream>
using namespace std;
int main(){
    int num,temp=0;
    cout<<"Enter a Number Which you have to reverse \n";
    cin >> num;
    // while(num>0){
    //     temp=num%10;
    //     cout<<temp;
    //     num=num/10;
    // }
    while(num>0){
        temp=temp*10+(num%10);
        num=num/10;
    }
    cout <<temp;
    return 0;
}
