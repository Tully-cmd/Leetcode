public class Solution {
    public int MinOperations(int[] nums) {
        
        int operations = 0;
        int lastIndex = nums.Length;
        int headIndex = 0;
        
        Console.WriteLine(lastIndex);
        
        while(headIndex <= lastIndex) {
            if((headIndex != 0) && (headIndex != lastIndex)) {
                while(nums[headIndex] <= nums[headIndex-1]) {
                    operations = operations + 1;
                    nums[headIndex] = nums[headIndex] + 1;
                }
            }
            headIndex = headIndex + 1;
        }
        return operations;
    }
}
