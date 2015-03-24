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
public class Problem065 {
    
    public static void euler065()
    {
        int result;
        BigInteger denominator = BigInteger.ONE;
        BigInteger numerator = BigInteger.valueOf(2L);

        for (int i = 2; i <= 100; i++) 
        {
            BigInteger temp = denominator;
            
            int x;
                if(i%3==0) x = 2*(i/3);
                else x = 1;
            
            denominator = numerator;
            numerator = (new BigInteger(Integer.toString(x)).multiply(denominator)).add(temp);
        }
        result = sumDigits(numerator);
        System.out.println(result);
    }
    
    private static int sumDigits(BigInteger n)
    {
        String s = n.toString();
        int sum = 0;
        for(int i=0; i<s.length(); i++)
        {
            sum += Integer.parseInt(Character.toString(s.charAt(i)));
        }
        return sum;
            
    }
}
