#include <stdio.h>

int main()
{
    int a[] = {1,3,5,6};
    printf("%d",searchInsert(a,4,7));
    return 0;
}
int searchInsert(int* nums, int numsSize, int target) {

    for(int i = 0; i < numsSize; i++) {
        if (target <= nums[0]) {
            return 0;
        } else if(nums[i] == target) {
            return i;
        } else if (nums[i] < target && nums[i+1] > target) {
            return i + 1;
        }
    }
    return numsSize;
}
