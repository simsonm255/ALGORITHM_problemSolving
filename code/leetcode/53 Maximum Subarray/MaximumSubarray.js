var maxSubArray = function(nums) {
    
    var sum = Number.MIN_SAFE_INTEGER;
    var max = 0;
    for(var i=0;i<nums.length;i++){
       sum = nums[i]>(sum+nums[i])?nums[i]:sum+nums[i];
       max = sum>max?sum:max;
    }
    return max;

};
console.log(maxSubArray([-1]));