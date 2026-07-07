#include <bits/stdc++.h>
using namespace std;

/*
349. Intersection of Two Arrays
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.

Constraints:
1 <= nums1.length, nums2.length <= 1000
0 <= nums1[i], nums2[i] <= 1000
*/

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
  int hash1[1001] = {0};
  int hash2[1001] = {0};
  vector<int> vc;
  for (int i = 0; i < nums1.size(); i++)
  {
    hash1[nums1[i]]++;
  }
  for (int i = 0; i < nums2.size(); i++)
  {
    hash2[nums2[i]]++;
  }
  for (int i = 0; i < 1001; i++)
  {
    if (hash1[i] > 0 && hash2[i] > 0)
    {
      vc.push_back(i);
    }
  }
  return vc;
}

int main()
{
  int n1;
  cout << "enter the numbers of num you need in num1: ";
  cin >> n1;
  vector<int> nums1(n1);
  for (int i = 0; i < n1; i++)
  {
    cout << "enter the number: ";
    cin >> nums1[i];
  }
  int n2;
  cout << "enter the numbers of num you need in num2: ";
  cin >> n2;
  vector<int> nums2(n2);
  for (int i = 0; i < n2; i++)
  {
    cout << "enter the number: ";
    cin >> nums2[i];
  }
  vector<int> result = intersection(nums1, nums2);
  for (int i : result)
  {
    cout << i << " ";
  }
  return 0;
}