#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
	int* answer = (int*) malloc(sizeof(int) * numsSize);
	*returnSize = numsSize;
	int aim1 = numsSize - 1;
	int i = 0;
	for (int j = numsSize - 1; i <= j;) {
		if (nums[i] * nums[i] > nums[j] * nums[j]) {
			answer[aim1] = nums[i] * nums[i];
			i++;
		}
		else {
			answer[aim1] = nums[j] * nums[j];
			j--;
		}
		aim1--;
	}
	return answer;
}