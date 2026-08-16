int removeElement(int* nums, int numsSize, int val) {
    int n=numsSize;
    int i,j=0;
    for(i=0;i<n;i++){
        if(nums[i]!=val){
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}