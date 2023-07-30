#include<iostream>
#include<vector>
using namespace std;

int maxRow(int arr[]){
    
}


void rowWiseSum(int arr[][4]){
    int res[3];
    int k = 0;
    int sum = 0;
    for(int i =0; i<3; i++){
        for(int j = 0; j<4; j++){
            sum+=arr[i][j];
        }
        res[k++] = sum;
    }


    int max = res[0];
    for(int i = 1; i<3; i++){
        if(res[i]>max){
            max = res[i];
        }
    }

    for(int i = 0; i<3; i++){
        cout<<res[i]<<endl;
    }

    cout<<max<<endl;
    
}

int main(){

    vector<int> res;

    int arr[3][4];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>arr[i][j];
        }
    }

}