class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        
        List<List<Integer>> ret = new ArrayList<List<Integer>>();
        
        for(int i = 0; i < nums.length -3; i++){
            for(int i2 = i+1; i2 < nums.length -2; i2++) {
                for(int i3 = i2+1; i3 < nums.length -1; i3++) {
                    for(int i4 = i3+1; i4 < nums.length; i4++) {
                        if(nums[i] + nums[i2] + nums[i3] + nums[i4] == target) {
                            ArrayList<Integer> ar = new ArrayList<Integer>();
                            ar.add(nums[i]);
                            ar.add(nums[i2]);
                            ar.add(nums[i3]);
                            ar.add(nums[i4]);
                            Collections.sort(ar);
                            if(ret.contains(ar) == false) {
                                ret.add(ar);

                            }
                        }
                    }
                }
            }
        }
        return ret;
        
    }
}