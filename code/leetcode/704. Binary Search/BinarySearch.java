class Solution {
    public int search(int[] nums, int target) {
        int j=-1;
        for(int i:nums){
            j++;
            if(i==target)
                return j;
        }
        return -1;
    }
}