class Solution {
    public int[] twoSum(int[] nums, int target) {
        // int left=0,right=1,sum=0;
        Map<Integer,Integer> map = new HashMap<>();
        int ans[] = new int[2];
        for(int i=0;i<nums.length;i++){
            int otherelement = target - nums[i];
            if(map.containsKey(otherelement)){
                ans[0]=i;
                ans[1]=map.get(otherelement);
                break;
            }else{
                map.put(nums[i],i);
            }
        }
        return ans;
        
    }
}