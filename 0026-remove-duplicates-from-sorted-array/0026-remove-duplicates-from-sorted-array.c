int removeDuplicates(int* nums, int numsSize) {
    int n=numsSize;
    int i =0,j=1;
    for(i=1;i<n;i++){
         if (nums[i] != nums[i - 1]) {
             nums[j]=nums[i];
             j++;
            }
        }
    return j;
}