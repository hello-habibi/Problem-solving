public class ProblemTest {

    public void merge(int[] nums1, int m, int[] nums2, int n) {
     int i = m-1 ;
     int j = n - 1;
     int k = m+n-1;
     while(j>=0){
        if(nums1[i]>= nums2[j]){
            nums1[k--] = nums1[i--];
        }else{
            nums1[k--] = nums1[j--];
        }
     } 
    }
    public static void main(String[] args) {
        
    }
}