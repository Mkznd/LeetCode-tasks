//
// Created by yzund on 6/21/2022. Task 35
//

#include <vector>
#include <iostream>

int searchInsert(std::vector<int>& nums, int target) {
    auto n = nums.size();
    if(target>nums.back()) return n;
    if(target<nums.front()) return 0;
    int low = 0, high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(nums[mid]==target) return mid;
        if(nums[mid]>target) high = mid-1;
        else low = mid+1;
    }
    return low;
}

int main(){
    std::vector<int> a{1,3,5,6};
    std::cout<< searchInsert(a, 7);
}