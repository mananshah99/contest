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
    public static boolean isPrime(long n)
    {
        if(n==2) return true;
        if(n%2==0) return false;
        if(n>3 && n%3==0) return false;
        if(n>5 && n%5==0) return false;
        boolean isPrime = true;
        for(int j=2; j<= Math.sqrt(n); j++)
        {
            if(n%j==0) isPrime = false;//if its not prime (has factors)
        }
        return isPrime;
    }
}
