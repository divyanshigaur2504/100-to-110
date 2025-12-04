/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include <stdio.h>

int pivotInteger(int n) {
    int totalSum = n * (n + 1) / 2; // sum from 1 to n

    for (int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2; // sum from 1 to x
        int rightSum = totalSum - (x - 1) * x / 2; // sum from x to n

        if (leftSum == rightSum) {
            return x; // pivot integer found
        }
    }
    return -1; // no pivot integer
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int result = pivotInteger(n);
    printf("%d\n", result);

    return 0;
}
