/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem023 
{
    static boolean[] abundants = new boolean[28124];
    static boolean[] nums = new boolean[28124];
    static int sum = 0;
    public static void euler023()
    {
        for(int i=0; i<abundants.length; i++)
        {
            abundants[i]=isAbundant(i);
        }
        for(int i=0; i<nums.length; i++)
        {
            if(!isSumOf2Abundants(i)) 
            {
                sum+=i;
                System.out.println(i + " is the sum of abundants");
                        
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
    public static boolean isAbundant(int num) {   
        int sum1=0;
        int i;
        for(i= num-1; i>0; i--)
        {
            if(num%i==0)
            {              
                sum1+=i;
            }
       }
       if(sum1>num) 
       {
           return true;
       }
       else return false;
    }
}

