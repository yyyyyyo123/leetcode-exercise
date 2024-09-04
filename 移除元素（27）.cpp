#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int removeElement(int* nums, int numsSize, int val) {
	int p1 = 0; int p2 = numsSize - 1;
	while (nums[p2] == val) {
		p2 -= 1;
	}
	while (nums[p2] != val && p2 > p1) {
		if (nums[p1] == val) {
			int aim = nums[p2];
			nums[p1] = aim;
			nums[p2] = val;
			p1++;
			p2--;
		}
		else {
			p1++;
		}
	}
	return p1+1;
<<<<<<< HEAD
}
=======
}
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
