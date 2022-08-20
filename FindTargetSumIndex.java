
// Time Complexity O(n-1)

import java.io.*;
import java.util.*;

class FindTargetSumIndex {
    public static int[] twoSum(int[] nums, int target) {
        int[] result;
        int low = 0;
        int cnt=0;
        int high = nums.length-1;
        result = new int[2];
        while(low<=high){
           if(nums[low] + nums[high] == target){
               result[cnt] = low;
               result[++cnt] = high;
               break;
           }
           else if(nums[low] >= target){
               low++;
           } 
           else if(nums[high] >= target){
               high--;
           }
        }
        return result;
    }
    public static void main(String[] args){
        int[] result;
        int arr_size,target,elm;
        int[] arr;
        Scanner sc = new Scanner(System.in);
        target = sc.nextInt();
        arr_size = sc.nextInt();
        arr = new int[arr_size];
        for(int i=0;i<arr_size;i++){
            arr[i] = sc.nextInt();
        }
        result = twoSum(arr,target);
        for(int i=0;i<result.length;i++)
          System.out.println(result[i]);
    }
}