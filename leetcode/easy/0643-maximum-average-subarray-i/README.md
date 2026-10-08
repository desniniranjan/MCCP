# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 75.40%)  
**Memory:** 69.7 MB (beats 25.63%)  
**Submitted:** 2026-10-08T15:07:50.312Z  

```java
class Solution {
    public double findMaxAverage(int[] nums, int k) {
        double s=0;
        for(int i = 0 ; i<k;i++){
            s+=nums[i];
        }
        double max=s;
        for(int i = k;i<nums.length;i++){
            s-=nums[i-k];
            s+=nums[i];
            if(max<s) max=s;
        }
        return max/k;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)