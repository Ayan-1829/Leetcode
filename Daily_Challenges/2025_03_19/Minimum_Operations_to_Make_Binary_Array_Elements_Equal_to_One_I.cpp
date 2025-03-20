#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minOperations(vector<int>& nums) {
            int ans = 0;
            int n = nums.size();
            for(int i=0; i<n; i++){
                if(nums[i]==0){
                    if((i+2)<n){
                        if(nums[i+1]==0 && nums[i+2]==0){
                            ans += 1;
                            nums[i] = 1;
                            nums[i+1] = 1;
                            nums[i+2] = 1;
                        }
                        else if(nums[i+1]==0 && nums[i+2]==1){
                            ans += 1;
                            nums[i] = 1;
                            nums[i+1] = 1;
                            nums[i+2] = 0;
                        }
                        else if(nums[i+1]==1 && nums[i+2]==0){
                            ans += 1;
                            nums[i] = 1;
                            nums[i+1] = 0;
                            nums[i+2] = 1;
                        }
                        else if(nums[i+1]==1 && nums[i+2]==1){
                            ans += 1;
                            nums[i] = 1;
                            nums[i+1] = 0;
                            nums[i+2] = 0;
                        }
                    }
                    else{
                        ans = -1;
                    }
                }
            }
            return ans;
        }
    };
    
    /*
    00010010
    00010101
    00011011
    00000111
    
    
    10100
    */