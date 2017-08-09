int main()
{
//    int a[5] = {2,3,3,2,4};
//    int b = removeElement(a,5,3);
//    printf("%d",b);
    return 0;
}

int removeElement(int* nums, int numsSize, int val) {
    int j = 0;
    for(int i = 0;i < numsSize;i++) {
        if(nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}
