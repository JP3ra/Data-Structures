class Solution {
public:
    int returnPivot(vector<int>& nums, int n){
        int s =0;
        int e = n-1;
        int mid = s + (e-s)/2;

        while(s<e){
            if(nums[mid]>nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }

            mid = s + (e-s)/2;
        }
        return s;
    }

    int binarySearch(vector<int> &nums, int s, int e, int target){
        int mid = s + (e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotElement = returnPivot(nums, nums.size());

        if(nums[pivotElement]==target){
            return pivotElement;
        }
        
        int rightIndex = binarySearch(nums, pivotElement+1, nums.size()-1, target);
        int leftIndex = binarySearch(nums, 0, pivotElement-1, target);
    

        if(rightIndex!=-1){
            return rightIndex;
        }
        else if(leftIndex!=-1){
            return leftIndex;
        }
        else{
            return -1;
        }
    }
};