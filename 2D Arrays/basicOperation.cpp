#include<iostream>
using namespace std;

int linearSearch(int arr[][3], int key){
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }

    return -1;
}

int main()
{
    int arr[3][3];

    // Row wise input
    // for(int i =0; i<3; i++){
    //     for(int j = 0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // Column wise input 
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>arr[i][j];
        }
    }

    // Searching

    int res = linearSearch(arr, 5);
    if(res!=-1){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }


    // Printing 
    // for(int i =0; i<3; i++){
    //     for(int j = 0; j<3; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
 return 0;
}