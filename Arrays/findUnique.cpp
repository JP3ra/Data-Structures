#include<iostream>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;
    for(int i =0; i<n;i++){
        ans = ans ^ arr[i];
    }

    return ans;
}


int main(){
    int arr[9] = {1,2,3,4,5,4,3,2,1};

    int res = findUnique(arr, 9);
    cout<<res<<endl;
}