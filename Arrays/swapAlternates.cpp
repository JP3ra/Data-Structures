#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void swapAltEven(int arr[], int n){
    for(int i = 0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int even[10] = {2,3,4,5,6,7,8,9,10,11};
    int arr1[9] = {10,11,12,13,14,15,16,17,18};

    swapAltEven(even, 10);

    printArray(even, 10);

    return 0;
}