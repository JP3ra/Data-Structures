#include<iostream>
using namespace std;

//Brute force approach complexity is O(n^2)

int findIntersection(int arr1[], int n, int arr2[], int m){

    int res[5];
    int key = 0;

    for(int i = 0; i<n;i++){

        int element = arr1[i];

        for(int j = 0; j<m; j++){
            if(element == arr2[j]){
                res[key++] = element;
                arr2[j] = -193010;
                break;
            }
        }
    }
    return res;
}

