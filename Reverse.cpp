#include<iostream>

using namespace std;

int ReverseDigit(int num){

int rem,rev=0;
  while (num > 0){
    rem  = num %10 ;
    num  = num/10;
    rev  = rev*10 + rem;
    }
return rev;
}
int main(){
    int x = 234;
    cout<<ReverseDigit(x)<<"\n";
}