/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem004 {
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
                tempstring = Integer.toString(temp); //throws a dereferencing error - broken code
                if(isPalindrome(tempstring))
                    if(temp>largestpalindrome) largestpalindrome = temp;
                }
            }
        System.out.println(largestpalindrome);
        }    
    public static boolean isPalindrome (String str)
    {
	for(int i=0; i<str.length(); i++)
	{
		if(str.charAt(i)==str.charAt(str.length()-(i+1))){} //checks if the character at place i is the same as its counterpart
		else return false; //hey, it's already not a palindrome, so return false.
	}
	return true;
    }
}
