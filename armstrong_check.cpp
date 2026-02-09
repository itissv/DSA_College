#include<iostream>
using namespace std;
int power(int base,int pow){
    if(pow==0)
    return 1;

    if (pow==1)
    return base;

    int half=power(base,pow/2);

    
    // if pow is even 
    if(pow%2==0){
        return half*half;
    }

    else{
        return base*half*half;
    }

}
int main(){
    int num,pow=0,n,temp,sum=0;
    cout <<"Enter a Number which you have to check its armstrong nature ";
    cin >>num;
    // trnsfer the value to a temp variable n
    n=num;
    while(n>0){
        // n%10;
        pow++;
        n=n/10;
    }
    temp=num;
    while(temp>0){
        n=temp%10;
        sum=sum+power(n,pow);
        temp=temp/10;
    }

    if(num==sum){
        cout<< num <<" is a Armstrong number ";
    }
    else{
        cout<<num <<" is not a Armstrong number ";
    }
    return 0;
}