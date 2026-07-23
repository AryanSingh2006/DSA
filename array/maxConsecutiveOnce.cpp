#include <bits/stdc++.h>
using namespace std;

/*
485. Max Consecutive Ones
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.
*/

int findMaxConsecutiveOnes(vector<int> &nums)
{
  int count = 0;
  int maxCount = 0;

  for (int num : nums)
  {
    if (num == 1)
    {
      count++;
      maxCount = max(maxCount, count);
    }
    else
    {
      count = 0;
    }
  }

  return maxCount;
}