#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int *temp = *a;
    *a = *b;
    *temp = b;
}

int main(){
    int arr[10] = {10,8,1,2,11,6,4,-1,0, 5};
    for(int i =0; i<10; i++){
        
        int minTerm = arr[i];
        for(int j = i+1; j<10; j++){
            if(arr[j] < arr[i]){
                minTerm = arr[j];
            }
        }
        swap(arr[i], minTerm);

    }
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
}