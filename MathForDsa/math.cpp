#include<iostream>
#include<vector>
using namespace std;

// Sieve of eranthosesis 
int countPrimes(int n) {
        int count = 0;
        
        vector<bool> prime(n+1, true);
        
        prime[0] = prime[1] = false;
        
        for(int i =2; i<n; i++){
            
            if(prime[i]){
                count++;
                
                for(int j = 2*i; j<n; j+=i){
                    prime[j]= false;
                }
            }
        }
        
        return count;
}

// evaluate gcd 

int euclidGCD(int a, int b){

    if(a>b){
        while(a!=0){
            a = a-b;
            
        }
        return b;
    }
    else{
        while(b!=0){
            b = b-a;
        }
        return a;
    }
}
int checkPrime(int n){
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}
int main(){
    int n;
    cin>>n;

    if(checkPrime(n)){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not a prime numer"<<endl;
    }

    int b, a;
    cin>>a>>b;
    int gcd1 = euclidGCD(a, b);

    cout<<"gcd is: "<<gcd1<<endl;

}