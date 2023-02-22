
public class ContainerWithMostWater {

    public static int maxArea(int[] height) {
        int len = height.length;
        int max=0;
        int left=0,right=len-1;
        for(int i=0;i<len;i++){
            if(height[left]<height[right]){
                max = Integer.max(max,height[left]*(right-left));
                left++;
            }else{
                max = Integer.max(max,height[right]*(right-left));
                right--;
            }
        }
        System.out.println(max);
        return max; 
    }

    public static void main(String[] args) {

        int A[]= {1,8,6,2,5,4,8,3,7};
        System.out.println(maxArea(A));


    }
}
