class Solution {
    public int findPeakElement(int[] nums) {
        if(nums.length == 1) {
            return 0;
        }
        if(nums.length == 2) {
            int max = Math.max(nums[0],nums[1]);
            if(max == nums[0]) {
                return 0;
            } else {
                return 1;
            }
        }
        int half = nums.length/2;
        System.out.println(3/2);
        while(half > 0 && half < nums.length-1) {
            if(nums[half] > nums[half-1] && nums[half] > nums[half+1]) {
                return half;
            } else if (nums[half] < nums[half-1]) {
                half = half-1;
            } else if (nums[half] < nums[half+1]) {
                half = half+1;
            }
        }
        
        return half;
    }
}