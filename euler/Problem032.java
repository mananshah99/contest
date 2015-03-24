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
public class Problem032 
{
    public static void euler032() 
    {
        int sum = 0;
        for (int i = 1; i < 10000; i++) 
            if (isPandigitalProduct(i)) sum += i;
        System.out.println(sum);
    }
    private static boolean isPandigitalProduct(int n) {
        for (int i = 1; i <= n; i++) 
            if (n%i == 0 && isPandigital("" + n + i + n/i)) return true;
        return false;
    }        
    private static boolean isPandigital(String num) {
        if (num.length() != 9)
            return false;
        char[] temp = num.toCharArray();
        Arrays.sort(temp);
        return new String(temp).equals("123456789");
    }
}
