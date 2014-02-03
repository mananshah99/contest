/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.math.BigInteger;

/**
 *
 * @author Manan
 */
public class Problem055 extends Library
{
    public static void euler055()
    {
        int numLychrel = 0;
        for(int i=0; i<10000; i++){
            if(isLychrel(i)){
                numLychrel++;
            }
        }
        System.out.println(numLychrel);
    }

    public static boolean isLychrel(int num) {
        BigInteger large = BigInteger.valueOf(num);
        for (int i = 0; i < 50; i++) {
            large = large.add(reverse(large));
            if (isPalindrome(large.toString())) 
                return false;
        }
        return true;
    }

    //uses reverse method in library
    public static BigInteger reverse(BigInteger num) {
        return new BigInteger(reverse(num.toString()));
    }
}