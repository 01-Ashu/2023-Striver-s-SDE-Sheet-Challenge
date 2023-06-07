#include <bits/stdc++.h> 
long long maxSubarraySum(int nums[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long  ans=0;
        long long sum=0;

        for(int i=0;i<n;i++){
            if(sum<0){
                sum=0;

            }
            sum+=nums[i];
            ans=max(ans,sum);
        }

        // if(sum==0){
        //     for(int i=0;i<n;i++)
        //    ans=max(nums[i],ans);
        // }
        return ans;
}
