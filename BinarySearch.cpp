//
// Created by yzund on 6/21/2022. Task 704
//
#include <vector>

int binarySearch(const std::vector<int>& nums, int target){
    int low=0, high = nums.size()-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return -1;
}

