// Q-1. count the digits of a given number. 
/*
    To count the digits of the number, we have to take the number from user and after that we have to get the module of 10, now we have the reminder and it will be count to know the number of digits . and after every iteration we have to divide the number by 10 to exclude the last digit of the number. 
*/ 
#include<iostream>
using namespace std;
int main(){
   long int num,count=0,temp;
    cout<< "Enter the Number , To know how many digits in it ";
    cin>>num;

    // we should transfer the value of input in another variable for further uses. and perform the operations on temp variale
    temp=num;

    while(temp>0){
        temp%10;
        count++;
        temp=temp/10;
    }
    cout<< "There are " << count << " digits in " << num;
return 0;
}
