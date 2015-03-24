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
public class Problem021 extends Library {
    public static void euler021()
    {
        int result = 0;
        boolean[] nums = new boolean[10000];
        Arrays.fill(nums, false);
        
        for(int i=0; i<10000; i++)
        {
            int temp = sumFactors(i);
            if(temp < 10000)
            {
                if(sumFactors(temp)==i) 
                {
                    if(i != sumFactors(i)){
                        nums[i]= true;
                        nums[sumFactors(i)] = true;
                    }
                }
            }
        }
        for(int i=0; i<10000; i++)
            if(nums[i]==true) result += i;
        System.out.println(result);
    }
}