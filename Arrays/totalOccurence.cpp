#include<iostream>
using namespace std;

int leftCount(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int count = 0;

    while(s<=e){
        if(arr[mid]==target){
            count++;
            e = mid-1;
        }
        else if(arr[mid]>target){
                e = mid-1;
            }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return count;
}


int rightCount(int arr[], int size, int target){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int count = 0;

    while(s<=e){
        if(arr[mid]==target){
            count++;
            s = mid+1;
        }
        else if(arr[mid]>target){
                e = mid-1;
            }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }

    return count;
}

int main(){
    int arr[6] = {1,2,3,3,3,3};
    int countL = leftCount(arr, 6, 3);
    cout<<countL<<endl;
    int countR = rightCount(arr, 6, 3);

    cout<<countR<<endl;
    

}