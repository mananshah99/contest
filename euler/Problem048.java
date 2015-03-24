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
public class Problem048 extends Library
{
    public static void euler048()
    {
        BigInteger bi = BigInteger.ZERO;
        BigInteger power;
        for(int i=1; i<=1000; i++)
        {
            power = BigInteger.valueOf(i).pow(i);
            bi = bi.add(power);
            //System.out.println(i);
            //System.out.println("integer is " + bi + " power is " + power);
        }
        BigInteger mod = BigInteger.valueOf(10).pow(10);
        System.out.println(bi.mod(mod));
    }
}
