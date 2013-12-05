/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem004 extends Library {
    public static void euler004() 
    {
        int temp = 0;
        String tempstring = "";
        int largestpalindrome = 0;
        for(int i=100; i<=999; i++)
        {
            for(int j=100; j<=999; j++)
            {
                temp = i*j;
                tempstring = Integer.toString(temp); 
                if(isPalindrome(tempstring))
                    if(temp>largestpalindrome) largestpalindrome = temp;
                }
            }
        System.out.println(largestpalindrome);
    }    
}
