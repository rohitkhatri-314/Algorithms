#include <bits/stdc++.h>
using namespace std;

//function to calculate a^b (optimal way) using binary exponentiation
int power(int a, int b){
    int res=1;
    while(b>0){
        if(b%2==1){
            res*=a;
        }
        a=a*a;
        b=b/2;
    }
    return res;
}

int main(){
    cout<<power(2,5);
    cout<<power(1,12);
    cout<<power(3,9);
    return 0;
}