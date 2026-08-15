int searchInsert(int* nums, int numsSize, int target) {
    int n=numsSize;
    int t=target;
    int i,c=0;
    for(i=0;i<n;i++){
        if(nums[i]==t){
            i=c;
        }
        else if(nums[i]<t){
           c=i+1;
        }
    }
    return c;
}