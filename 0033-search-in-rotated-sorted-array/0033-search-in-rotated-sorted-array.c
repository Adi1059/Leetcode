int search(int* nums, int numsSize, int target) {
    int n=numsSize;
    int t=target;
    int i=0,c=0;
    for(i;i<n;i++){
        if(nums[i]==t){
            c++;
            return i;
        }
    }
    if(c==0){
        return -1;
    }
    return 0;
}
