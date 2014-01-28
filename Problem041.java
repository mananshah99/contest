package projecteuler;

import java.util.Arrays;

/**
 * 
 * @author Manan
 */
public class Problem041 extends Library 
{
    static boolean[] primes = primeSeive(8000000);

    public static void euler041()
    {
        for(int i=8000000; i>=0; i--)
        {
            if(isPandigital(Integer.toString(i)) && primes[i])
            {
                System.out.println(i);
                return;
            }
        }
    }
    private static boolean isPandigital(String num) 
    {
        char[] temp = num.toCharArray();
        Arrays.sort(temp);
        return new String(temp).equals("1234567");
    }
    
    public static boolean[] primeSeive(int len)
    {
        boolean[] primes = new boolean[len];
        Arrays.fill(primes, true);
        
        for (int i = 2; i*i <= primes.length; i++) 
        {
            if (primes[i]) 
            {
                for (int j = i; i*j <= primes.length; j++) 
                    if(i*j < primes.length) primes[i*j] = false;
            }
        }
        return primes;
    }
}
