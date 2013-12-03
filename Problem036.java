/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem036 {
    public static void euler036()
    {
        int sum = 0;
        for(int i=0; i<=1000000; i++){
            String temp = Integer.toString(i);
            if(isPalindrome(temp) && isPalindrome(toBinary(i))) sum += i;
        }
        System.out.println(sum);
    }
    public static String toBinary(int num){
        return Integer.toBinaryString(num);
    }
    public static boolean isPalindrome (String str)
    {
	for(int i=0; i<(str.length()/2); i++)
	{
		if(str.charAt(i)==str.charAt(str.length()-(i+1))){} //checks if the character at place i is the same as its counterpart
		else return false; //it's already not a palindrome, so return false.
	}
	return true;
    }
}
