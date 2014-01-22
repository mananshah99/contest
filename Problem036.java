/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem036 extends Library 
{
    public static void euler036()
    {
        int sum = 0;
        for(int i=0; i<=1000000; i++){
            String temp = Integer.toString(i);
            if(isPalindrome(temp) && isPalindrome(toBinary(i))) sum += i;
        }
        System.out.println(sum);
    }
}
