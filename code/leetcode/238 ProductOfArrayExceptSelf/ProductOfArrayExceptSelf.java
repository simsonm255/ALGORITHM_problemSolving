

class Solution {
    public int mul(int []a,int i){
        int pro=1;
        //    boolean isZeroPresent = false;
        for(int j=0;j<a.length;j++){
            if(j!=i)
                pro*=a[j];
        }
        System.out.println("called");
        return pro;

    }
    public int[] productExceptSelf(int[] nums) {

        boolean isZeroPresent = false;
        int ans[] = new int[nums.length];

        for(int i=0;i<nums.length;i++){

            ans[i]= mul(nums,i);
        }


        return ans;
    }
}

public class ProductOfArrayExceptSelf {
    public static void main(String[] args) {
        System.out.println("heelo");
        int ar[] = {-1,1,0,-3,3};
        Solution sol = new Solution();
        int ans[] = sol.productExceptSelf(ar);
        for(int i=0;i<ans.length;i++)
            System.out.println(ans[i]);

    }

}
