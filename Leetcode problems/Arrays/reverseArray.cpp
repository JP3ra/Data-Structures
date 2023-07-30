#include<iostream>
#include<vector>


void reverse(vector<int> &arr, int n){
    int s = n+1;
    int e = arr.size()-1;

    while(s<e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

}

int main(){
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(10);

    cout<<"Before reversing"<<endl;
    for(int i =0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }

    reverse(nums, 3);

    cout<<"After reversing"<<endl;

    for(int i =0; i<nums.size(); i++){
        cout<<nums[i]<<endl;
    }
    cou

}