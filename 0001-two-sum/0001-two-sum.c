int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int n=numsSize;
    int t=target;
    int i=0,j=0;
    int* ans = (int*)malloc(2 * sizeof(int));
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(t==(nums[i]+nums[j])){
                ans[0] = i;
                ans[1] = j;
                *returnSize=2;
                return ans;
            }
        }
    }
       *returnSize=0;
       free(ans);
       return 0;
}