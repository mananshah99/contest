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
public class Problem056 
{
    public static void euler056()
    {
        int total = Integer.MIN_VALUE;
        for(int a = 1; a < 100; a++) 
        {
            for(int b = 1; b < 100; b++) 
            {
               BigInteger base = BigInteger.valueOf(a);
               BigInteger power = base.pow(b);
               char[] number = power.toString().toCharArray();
               int temp = 0;
               for(Character c: number)
               {
                   String ctos = Character.toString(c);
                   int val = Integer.parseInt(ctos);
                   temp += val;
               }
               if(temp > total) total = temp;
            }
        }
        System.out.println(total);
    }
}

