/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem049 extends Library
{
    static long result = 0;
    static boolean[] primes = primeSeive(10000);

    public static void euler049() 
    {
        for (int i = 1488; i < 10000; i++) 
        {
            if (primes[i]) 
            {
                for (int j = 1; j < 10000; j++) 
                {
                    int u = i + j;
                    int v = u + j;

                    if (u < 10000 && primes[u] && hasSameDigits(u, i)
                            && v < 10000 && primes[v] && hasSameDigits(v, i)) 
                        System.out.println("" + i + u + v);
                }
            }
        }
    }
}
