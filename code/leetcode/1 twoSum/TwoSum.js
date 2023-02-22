var twoSum = (nums,target) =>{
    var map = new Map();
    for(var i=0;i<n;i++){
        var other = target - nums[i];
        if(map.get(other)!==undefined){
            return [map.get(other),i];
        }
        else{
            map.set(nums[i],i);
        }
    }
}