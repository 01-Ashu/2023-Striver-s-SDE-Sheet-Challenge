#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){//high ke high-1 se 2 hai high tak nahi isliye mid<=high
        //here we increase the value of both because mid knows what was behind and because of this mid and low is increamented
  if(nums[mid]==0){
      swap(nums[low],nums[mid]);
      low++;
      mid++;
  }
 else if(nums[mid]==1){
      mid++;
  }
  else {
      swap(nums[mid],nums[high]);
      high--;
  }
    }
}
