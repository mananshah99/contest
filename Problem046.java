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
public class Problem046 extends Library
{
    static boolean[] squares = new boolean[10000];
    static boolean[] primes;
    public static void euler046()
    {
        primes = primeSeive(10000);
        squares(squares);
        int count = 10;  
        while(true)
        {
            if(!isOk(count))
            {
                System.out.println(count);
                return;
            }
            count++;
        }
    }

    public static void squares(boolean[] squares)
    {
        Arrays.fill(squares, false);
        
        for(int i=1; i<squares.length; i++)
            if((2*i*i) < squares.length) squares[2*i*i] = true;
    }
    
    public static boolean isOk(int count)
    {
        for(int i=0; i<count; i++)
           if(((primes[i] && squares[count-i]) || (primes[count-i] && primes[i]))) return true;
        return false;
    }
}
