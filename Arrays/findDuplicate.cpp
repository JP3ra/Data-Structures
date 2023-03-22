#include<iostream>
using namespace std;


//with a complexity of O(n^2)
// int findDuplicate(int arr[], int size) 
// {


//     for(int i =0; i<size-1; i++){
//         for(int j = i+1; j<size; j++){
//             if(arr[i]==arr[j]){
//                 return arr[i];
//             }
//         }
//     }
	
// }

//With a complexity of O(n)

int findDuplicate(int arr[], int n) 
{
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans ^ arr[i];
    }

    for(int i = 1; i<n; i++){
        ans = ans ^ i;
    }

    return ans;
	
}

int main(){
    int arr[9] = {1,2,3,4,5,5,6,7,9};
    int res = findDuplicate(arr, 9);

    cout<<res<<endl;
}