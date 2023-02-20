var productExceptSelf = function(nums) {
    let length = nums.length;
    let result = [1];
    let temp = 1;
    for (let i = 1; i < length; i++) {
        result[i] = result[i - 1] * nums[i - 1];
    };
    for (let i = length - 1; i > -1; i--) {
        result[i] = result[i] * temp;
        temp = temp * nums[i];
    };
    return result;
};

var nums=[1,2,3,4];

console.log(productExceptSelf(nums))
