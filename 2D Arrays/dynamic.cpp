#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int **arr = new int *[n];

    for(int i =0; i<n; i++){
        arr[i] = new int[n]; //for every index of the arr we create another array
    }

    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    // Printing the arrat
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<arr[i][j]<<endl;
        }
    }
}