/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem003 {
    public static void euler003(long num)
    {
        long largest = 0;
        for (long i = 2; num > 1; i++) 
        {
            if (num % i == 0) 
            {
                if(isPrime(i))
                {
                    largest = i;
                }
                num /=i;
            }
        }
        System.out.println(largest);
    }
    public static boolean isPrime (long n)
    {
        boolean prime = true;
        for(long i=2; i<n; i++)
        {
            if(n%i==0)
            {
                prime = false;
                return prime;
            }
        }
        return prime;
    }
}
