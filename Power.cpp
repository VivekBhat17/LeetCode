#include<iostream>

using namespace std;

bool power(int num){
    while (num > 0)
    {
        int res = num%3;
        if(res > 1){
            return false;
        }
        num/=3;
        if(num == 1 || num ==0){
            return true;
        }
    }
    return false;
}
int main(){
    int num = 21;
    cout<<power(num);
}