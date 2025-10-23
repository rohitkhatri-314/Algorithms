#include <bits/stdc++.h>
using namespace std;


bool sieve(int n){
    vector<bool>isPrime(n+1,true);
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=n;j=j+i){
                isPrime[j]=false;
            }
        }
    }
    return isPrime[n];
}

int main()
{
 
 cout<<"is 217 a prime?"<<" ans: "<<sieve(217)<<endl;
return 0;
}