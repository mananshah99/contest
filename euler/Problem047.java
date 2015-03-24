/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.util.HashSet;

/**
 *
 * @author Manan
 */
public class Problem047 
{
    public static void euler047()
    {
        int count = 0;
        long num = 120000;
        while(count < 4)
        {
            if(uniquePrimeFactors(num).size()==4) count++;
            else count = 0;
            num++;
        }
        System.out.println(num-4);
    }
    public static HashSet uniquePrimeFactors(long n) 
    {
        HashSet primeFactors = new HashSet();
        for (int i = 2; i <= n; i++) {
          while (n % i == 0) {
            primeFactors.add(i);
            n /= i;
          }
        }
        return primeFactors;
  }
}
