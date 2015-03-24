/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem027 extends Library
{
    static boolean[] primes = new boolean[100000];
    public static void euler027()
    {
        int amax = 0, bmax = 0, nmax = 0;
        primes = primeSeive(1000000);

        for (int a = -1000; a <= 1000; a++) 
        {
            for(int b = -1000; b <= 1000; b++)
            {
                int n = 0;
                while ((primes[(Math.abs((n*n) + (a*n) + b))] == true))
                    n++;
                if (n > nmax) 
                {
                    amax = a;
                    bmax = b;
                    nmax = n;
                }
            }
        }
        System.out.println(amax + " " + bmax + " " + nmax);
    }
}
