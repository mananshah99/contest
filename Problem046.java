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
public class Problem046 
{
    static boolean[] primes = new boolean[10000];
    static boolean[] squares = new boolean[10000];
    public static void main(String[] args) {
        euler046();
    }
    public static void euler046()
    {
        primeSeive(primes);
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
    public static void primeSeive(boolean[] primes)
    {
        Arrays.fill(primes, true);
        
        for (int i = 2; i*i <= primes.length; i++) 
        {
            if (primes[i]) 
            {
                for (int j = i; i*j <= primes.length; j++) 
                    if(i*j < primes.length) primes[i*j] = false;
            }
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
