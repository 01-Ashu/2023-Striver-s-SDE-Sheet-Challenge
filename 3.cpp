#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
     //First Find the index where  the value is dropping from back 
        int ind=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
               ind=i;
break;
            }
        }
        if(ind==-1){
            sort(nums.begin(),nums.end());
        }
        else{
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;

            }
        }
      reverse(nums.begin()+ind+1,nums.end());
        }
        return nums;


}
