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
public class Problem025 {

    public static void euler025()
    {
        int zcount = 3;
        int xcount = 1;
        int ycount = 2;
        BigInteger x = BigInteger.ONE;
        BigInteger y= BigInteger.ONE;
        BigInteger z = BigInteger.ZERO;
        while(numDigits(x) != 1000 || numDigits(y) != 1000 || numDigits(z) != 1000)
        {
            z = new BigInteger((x.add(y)).toString());
            zcount++;
            //next iteration
            x = new BigInteger(y.toString()); 
            xcount++;
            y = new BigInteger(z.toString());
            ycount++;

        }
        System.out.println(xcount);
    }
    public static int numDigits(BigInteger bi)
    {
        int result = 0;
        String s = bi.toString();
        //System.out.println(s.length());
        return s.length();
    }
}
