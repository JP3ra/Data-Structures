#include<iostream>

using namespace std;

void swap(int *a, int *b){
    int *temp = a;
    a = b;
    b = temp;
}


printArray(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[10] = {1,2,2,3,4,5,6};
    int n = 7;

    int i = 0;
    int j = 6;

    while(i<j){
        swap(&arr[i], &arr[j]);
        i++;
        j--;
    }

    printArray(arr, 7);

}