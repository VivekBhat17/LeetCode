#include<iostream>

using namespace std;

int ReverseDigit(int num){
<<<<<<< HEAD

int rem,rev=0;
  while (num > 0){
=======
int rem,rev=0;
while (num > 0){
>>>>>>> 14fa966d9c6f1f3b8043fbc85902b51fbe22adeb
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
