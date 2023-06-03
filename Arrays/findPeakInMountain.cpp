class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size();
        int s = 0;
        int e = size-1;
        int max = 0;
        int mid = s + (e-s)/2;

        while(s<e){
            max = arr[mid];
            if(arr[mid+1]>max){
                s = mid+1;
            }
            else{
                e = mid;
            }

            mid = s + (e-s)/2;
        }


        return s;
    }

};