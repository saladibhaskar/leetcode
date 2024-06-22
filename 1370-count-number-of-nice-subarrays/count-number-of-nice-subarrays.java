class Solution {
public int numberOfSubarrays(int[] nums, int k) {
int totalSubarrays = 0;
int countOddNumbers = 0;
int evenPrefixCount = 0;
int start = 0;

for (int end = 0; end < nums.length; end++) 
{
    if (nums[end] % 2 == 1) {
    countOddNumbers++;
    }

    if (countOddNumbers == k) {
        evenPrefixCount = 0;

        while (countOddNumbers == k) {
            countOddNumbers -= nums[start] % 2;
            evenPrefixCount++;
            start++;
        }
    }
    totalSubarrays += evenPrefixCount;
}
return totalSubarrays;
}
}