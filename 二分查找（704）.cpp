#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
<<<<<<< HEAD
//ÒÔÏÂÊÇµÚÒ»°æ´íÎó°æ
=======

//ä»¥ä¸‹æ˜¯ç¬¬ä¸€ç‰ˆé”™è¯¯ç‰ˆ
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
/*int search(int* nums, int numsSize, int target) {
	int answer = -1;
	int left = -1; int right = numsSize;
	while (left +1 != right) {
		int middle = (left + right) / 2;
		if (nums[middle] < target) {
			left = middle;
		}
		else {
			right = middle;
		}
	}
	if (nums[right] = target) {
		answer = right;
	}
	return answer;
}

int main() {
	int n;
	cin >> n;
	int a[10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	int answer = search(a, n, target);
	printf("%d", answer);
}*/
<<<<<<< HEAD
//¶þ¸Ä½«ÅÐ¶Ï¾ä¡°=¡±¸Ä³É¡°==¡±
//Èý¸ÄÈçÏÂ°æ±¾£¬accept
=======
//äºŒæ”¹å°†åˆ¤æ–­å¥â€œ=â€æ”¹æˆâ€œ==â€
//ä¸‰æ”¹å¦‚ä¸‹ç‰ˆæœ¬ï¼Œaccept
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
int search(int* nums, int numsSize, int target) {
	int answer = -1;
	int left = -1; int right = numsSize;
	while (left + 1 != right) {
		int middle = (left + right) / 2;
		if (nums[middle] < target) {
			left = middle;
		}
		else {
			right = middle;
		}
		if (right != numsSize && nums[right] == target) {
			answer = right;
		}
		return answer;
	}
}

int main() {
	int n;
	cin >> n;
	int a[10];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	int answer = search(a, n, target);
	printf("%d", answer);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4939e828138a0074e461ad756c4d322884ed1e48
