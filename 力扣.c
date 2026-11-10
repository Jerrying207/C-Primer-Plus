void nextPermutation(int* nums, int numsSize) {
    //找谷底，从倒数第二个数开始往左找；
    int i=numsSize-2;
    while(i>=0&&nums[i]>=nums[i+1])//只要后面的数<=前面的数，就一直往前找；
    {
        i--;
    }
    //循环结束，i要么找到第一个升序的，要么变成-1；
    if(i>=0)//如果找到了
    {
        int j=numsSize-1;//从最右边往前找，找到第一个比nums[i]大的数
        while(nums[j]<=nums[i])
        {
            j--;
        }       
        //找到后，原地交换；
        int t=nums[i];
        nums[i]=nums[j];
        nums[j]=t; 
    }
    //反转后半段
    //此时i后面的部分肯定是降序的，用左右指针把它反转成升序
    int left=i+1;
    int right=numsSize-1;
    while(left<right)
    {
        int t=nums[left];
        nums[left]=nums[right];
        nums[right]=t;
        //指针向中间靠拢
        left++;
        right--;
    }
}