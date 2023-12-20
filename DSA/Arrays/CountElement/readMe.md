Question: Given N array elements, Count the number of elements having atleast 1 element greater than itself

Example: {-3,-2,6,8,4,8,5}
Output: 5

Approach: Find the maximum element and compare the max with each element to find whether the element itself should be part of count.

TC: O(N)
SC: O(1)