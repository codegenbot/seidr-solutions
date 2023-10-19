#include <vector>
#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given an array of integers and an integer k, you need to find the total number of continuous 
subsequences (chunks) of array A that add up to sum k.

For example,
input : [6, 12, 1, 7, 5, 2, 3], k = 14
output : 4
explaination :
the subsequences are [6], [12, 1, 7], [1, 7], [5, 2] so the result is 4.
note : [6, 12, 1, 7, 5, 2, 3]
          |_____________|
             |_______|
                 |_____|

*/

void findSequences(int* ptr, int k, int index, int curSum, int* result) {
  int val = ptr[index];
  curSum = curSum + val;
  if (curSum < k) {
    result[index] = result[index - 1];
    if (curSum == k) {
      result[index] += 1;
    }
    findSequences(ptr, k, index - 1, curSum, result);
  }
  else if (curSum > k) {
    
  }
  else {
    
  }
}

int countSubsequences(int *ptr, int k) {
  int index = k - 1;
  int curSum = 0;
  int* result = new int[k];
  findSequences(ptr, k, index, curSum, result);
  return result[k];
}

int main() {
  int k = 14;
  int* ptr = new int[7];
  ptr[0] = 6;
  ptr[1] = 12;
  ptr[2] = 1;
  ptr[3] = 7;
  ptr[4] = 5;
  ptr[5] = 2;
  ptr[6] = 3;
}
/*
void findSequences(int* ptr, int k, int index, int curSum, int* result) {
  
}
int countSubsequences(int A, int k) {
  int layers = log2(A.size());
  int* current = new int[layers];
  for (int i = 0; i < layers; i++) {
    current[i] = A[i];
  }
  int* result = new int[layers];
  findSequences(current, k, layers - 1, 0, result);
}
*/
