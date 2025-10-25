//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/

#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    scanf("%d", &target);

    int hash[100001] = {0};

    for(int i = 0; i < n; i++) {
        int complement = target - nums[i];

        if(complement >= 0 && hash[complement] != 0) {
            printf("%d %d", hash[complement] - 1, i);
            return 0;
        }
        hash[nums[i]] = i + 1;
    }

    printf("-1 -1");
    return 0;
}