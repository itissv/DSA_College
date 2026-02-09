#include<iostream>
using namespace std;
int power(int base, int pow){

    if(pow==0)
    return 1;

    if(pow==1)
    return base;

    // recurison
    int half = power(base,pow/2);
    

    // check if power is even
    if(pow%2==0){
        return half*half;
    }

    else{
        return base*half*half;
    }
}


int main(){
    int base,pow, ans;
    cout<< "Enter the Base ";
    cin>> base;
    cout<< "Enter the Pow ";
    cin>>pow;

    ans=power(base,pow);
    cout<<"the ans is "<< ans;
    return 0;
}