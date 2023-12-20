Question: Given N array elements, check if there exists a pair i,j such that a[i]+ a[j] = k & i!=j. i and j are indices and k is the given sum.

Example: {3,-2,1,4,3,6,8},k=10
{4,6} & {6,4} are only pair which makes 10
Output: 2

Approach: Use frequency Map to store the count of array elements and then iterate to findout out count of all the pairs existing which can form sum of k.

TC: O(N)
SC: O(N)