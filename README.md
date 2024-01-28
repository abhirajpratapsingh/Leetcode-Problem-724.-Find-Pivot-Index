
# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
- The intuition behind this solution is to maintain two sums: leftsum and totalsum. leftsum keeps track of the sum of elements to the left of the current index, and totalsum keeps track of the sum of all elements in the array. By iterating through the array and updating these sums, we can find the pivot index where the sum of elements to the left is equal to the sum of elements to the right.

---

![Screenshot (47).png](https://assets.leetcode.com/users/images/943c0af5-c232-40c8-8621-e614381cd00b_1704559152.3596091.png)

----

# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize leftsum and totalsum to 0.
2. Iterate through the array to calculate totalsum, which is the sum of all elements in the array.
3. Iterate through the array again. At each step, update leftsum by adding the current element, and check if leftsum is equal to the remaining sum (totalsum - leftsum). If they are equal, return the current index as the pivot index.
4. If no pivot index is found during the iteration, return -1 to indicate that there is no pivot index.

---


# Complexity
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
- **Time complexity: O(n) -** The algorithm iterates through the array twice, and each iteration takes linear time.

---


<!-- Add your space complexity here, e.g. $$O(n)$$ -->
- **Space complexity: O(1) -** The algorithm uses constant space for the variables leftsum and totalsum, regardless of the size of the input array.

---


# Code
```
class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<nums.size();i++)
          rightsum+=nums[i];
        for(int i=0;i<nums.size();i++)
        {
          leftsum=leftsum+nums[i];
          if(leftsum==rightsum)
            return i;
          rightsum=rightsum-nums[i];
        } 
        return -1;
    }
};
```


---
