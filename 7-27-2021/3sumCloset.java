class Solution {
    public int threeSumClosest(int[] nums, int target) {
        
        ArrayList<Integer> track = new ArrayList();
        int target2 = target;
        
        for(int i=0; i<nums.length-2; i++) {
            for(int q=i+1; q<nums.length-1; q++) {
                for(int w=q+1; w<nums.length; w++) {
                    int add = nums[i] + nums[q] + nums[w];
                    track.add(add);
                }
            }
        }
        
        while(track.contains(target) == false && track.contains(target2) == false) {
            target = target +1;
            target2 = target2 -1;
        }
        if(track.contains(target2)) {
            target = target2;
        }
        return target;
        
    }
}