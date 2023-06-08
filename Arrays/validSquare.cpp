class Solution {
public:
    bool isPerfectSquare(int num) {
        int s =0;
        int e = num;
        long long int mid = s + (e-s)/2;
        long long int ans =-1;
        while(s<=e){
            if(mid*mid == num){
                ans = mid;
                break;
            }
            else if(mid*mid > num){
                e = mid-1;
            }
            else{
                s = mid+1;
            }

            mid = s + (e-s)/2;
        }

        if(ans==-1){
            return 0;
        }
        else{
            return 1;
        }
    }
};