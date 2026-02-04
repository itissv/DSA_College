#include<iostream>
using namespace std;
int main(){
    int n,temp=0,num;
    cout << "Enter the number which you have to Check its Palindrom Nature\n";
    cin >> n;
    num=n;
    // we have to transfer the original value of n to another variable because if we direct perform the operation on input value then it will be update after completion of operation . and we will not able to compare original to reverse value and so we couldnot find whether it is palindrom or not.
    
    while(num>0){
        temp=temp*10+(num%10);
        num=num/10;        
    }
    if(n==temp){
        cout<< n << " is a Palindrom number ";
    }
    else{
        cout<< n << " is not a Palindrom number";
    }
    return 0;
}