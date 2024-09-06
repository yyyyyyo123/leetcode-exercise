#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int minSubArrayLen(int target, int* nums, int numsSize) {
    int* addnums = (int*)malloc(sizeof(int) * (numsSize + 1));
    addnums[0] = 0;
    int addn = 0;
    for (int i = 0; i < numsSize; i++) {
        addn += nums[i];
        addnums[i + 1] = addn;
    }
    int p1 = 1; int p2 = 1;
    int ans = numsSize + 1;
    while (p1 <= p2 && p2 < numsSize + 1) {
        if (addnums[p2] - addnums[p1 - 1] < target) {
            p2++;
        }
        else if (addnums[p2] - addnums[p1 - 1] >= target) {
            if (p2 - p1 + 1 < ans) {
                ans = p2 - p1 + 1;
            }
            p1++;
        }
    }
    if (ans == numsSize + 1) {
        return 0;
    }
    else {
        return ans;
    }

}