int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *ans = malloc(2 * sizeof(int));
    int i=0,j =numbersSize-1;
    while(i < j) {
        int sum=numbers[i] + numbers[j];
        if(sum==target){
            ans[0]=i+1;
            ans[1]=j+1;
            *returnSize = 2;
            return ans;
        }
        else if(sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    *returnSize = 0;
    free(ans);
    return NULL;
}