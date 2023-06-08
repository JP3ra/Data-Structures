#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i =0; i<n; i++){
        int minIndex = i;
        for(int j =0; j<n; j++){
            if(arr[j]<arr[i]){
                minIndex = j;
            }
        }
        if(i!=minIndex){
            swap(arr[i], arr[minIndex]);
        }
    }

}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;


    selectionSort(arr, 5);
    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}