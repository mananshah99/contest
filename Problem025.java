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
public class Problem025 extends Library {

    public static void euler025()
    {
        int xcount = 1;
        BigInteger x = BigInteger.ONE;
        BigInteger y= BigInteger.ONE;
        BigInteger z = BigInteger.ZERO;
        
        while(numDigits(x) != 1000 || numDigits(y) != 1000 || numDigits(z) != 1000)
        {
            z = new BigInteger((x.add(y)).toString());
            //next iteration
            x = new BigInteger(y.toString()); 
            xcount++;
            y = new BigInteger(z.toString());
        }
        System.out.println(xcount);
    }
    private static int numDigits(BigInteger bi)
    {
        String s = bi.toString();
        return s.length();
    }
}
