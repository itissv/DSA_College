#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,count=0;
    bool isPrime=true;
    cout<<"enter the number, which has to be checked ";
    cin>>num;


/*
  //  worst case
    for (int i=1;i<=num;i++){
        if (num%i==0){
            count++;
        }
    }
    if (count>2){
        cout<<num<<" is not a prime number";
    }
    else{
        cout<<num<<" is a prime number";
    }
*/

/*
    // optimised then previous
    for (int i=2;i<num/2;i++){
        if (num%i==0){
            count++;
        }
    }
   if (count>=1){
        cout<<num<<" is not a prime number";
    }
    else{
        cout<<num<<" is a prime number";
    }

*/

    // More Optimised
    if (num<=1){
        isPrime=false;
    }
    else{
    for (int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<num<<" is a prime number";
    }
    else{
    cout<<num<<" is not a Prime number";
    }
}


    return 0;
}
