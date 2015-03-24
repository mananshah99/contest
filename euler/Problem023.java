/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem023 extends Library 
{
    static boolean[] abundants = new boolean[28124];
    static boolean[] nums = new boolean[28124];
    static int sum = 0;
    public static void euler023()
    {
        for(int i=0; i<abundants.length; i++)
            abundants[i]=isAbundant(i);
        for(int i=0; i<nums.length; i++)
        {
            if(!isSumOf2Abundants(i)) 
            {
                sum+=i;
            }
        }
        System.out.println(sum);
    }
    private static boolean isSumOf2Abundants(int n) 
    {
           for (int i = 0; i <= n; i++) 
           {
               if (abundants[i] && abundants[n-i]) //check if it's the sum
                 return true;
           }
           return false;
    }
}

