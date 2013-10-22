/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.util.Arrays;

/**
 *
 * @author Manan
 */
public class Problem021 {
    public static void euler021()
    {
        int result = 0;
        boolean[] nums = new boolean[10000];
        Arrays.fill(nums, false);
        for(int i=0; i<10000; i++)
        {
            int temp = getSumFactors(i);
            if(temp < 10000){
                if(getSumFactors(temp)==i) 
                {
                    if(i != getSumFactors(i)){
                        nums[i]= true;
                        nums[getSumFactors(i)] = true;
                        // Debugging System.out.println("Set " + i + " to true with " + getSumFactors(i));
                    }
                }
            }
        }
        for(int i=0; i<10000; i++)
        {
            if(nums[i]==true) result += i;
        }
        System.out.println(result);
    }
    public static int getSumFactors(int num)
    {
        int sum = 0;
        if(num<=1) return 0;
        for(int k=1; k<num; k++)
        {
            if(num%k == 0)
            {
                sum+=k;
            }
        }
        return sum;
    }
}