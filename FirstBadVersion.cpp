//
// Created by yzund on 6/21/2022. Task 278
//
#include <iostream>

const int BAD = 1;

bool isBadVersion(int version){
    return version>=BAD;
}

int firstBadVersion(int n) {
    int low=1, high=n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(isBadVersion(mid)){
            if(!isBadVersion(mid-1)) return mid;
            else high = mid-1;
        }
        else{
            if(isBadVersion(mid+1)) return mid+1;
            else low = mid;
        }
    }
}

