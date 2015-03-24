/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem035 extends Library 
{
    static boolean[] primes = primeSeive(1000000-1);
    
    public static void euler035()
    {
        int count = 0;
        for (int i = 2; i < primes.length; i++) 
            if (isCircular(i)) count++;
        System.out.println(count);
    }

    private static boolean isCircular(int num) 
    {
        String str = Integer.toString(num);
        
        //go through the string and check if permutations are in the prime sieve
        for (int i = 0; i < str.length(); i++) {
            if (!primes[Integer.parseInt(str.substring(i) + str.substring(0, i))]) 
                return false;
        }
        return true;
    }
    
}
