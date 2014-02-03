package projecteuler;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 *
 * @author Manan
 */
public class Library 
{
    public static String reverse(String str) {
        return new StringBuilder(str).reverse().toString();
    }

    public static boolean isPalindrome(String str) {
        return str.equals(reverse(str));
    }

    public static boolean isPrime(long n) 
    {
        if (n==1) return false;
        if (n == 2) return true;
        if (n % 2 == 0) return false;
        if (n > 3 && n % 3 == 0) return false;
        if (n > 5 && n % 5 == 0) return false;
        for (int j = 2; j <= Math.sqrt(n); j++) {
            if (n % j == 0) 
                return false;//if its not prime (has factors)
        }
        return true;
    }

    public String factorial(int n) 
    {
        BigInteger factorial = BigInteger.valueOf(1);
        for (int i = 1; i <= n; i++) 
            factorial = factorial.multiply(BigInteger.valueOf(i));
        return factorial.toString();
    }

    public static int sumFactors(int num) 
    {
        int sum = 0;
        if (num <= 1) return 0;
        for (int k = 1; k < num; k++) 
            if (num % k == 0) sum += k;
        return sum;
    }
    
    public static boolean isAbundant(int num) 
    {   
        int sum=0;
        int i;
        for(i= num-1; i>0; i--)
        {
            if(num%i==0)
                sum+=i;
        }
        if(sum>num) 
           return true;
        else return false;
    }
    
    public static String toBinary(int num){
        return Integer.toBinaryString(num);
    }
    
    public static String toHex(int num){
        return Integer.toHexString(num);
    }
    
    public static String toOctal(int num){
        return Integer.toOctalString(num);
    }
    
    public static boolean isTriangular(int num)
    {
        int test = (8*num) + 1;
        if(isPerfectSquare(test)) return true;
        return false;
    }
    
    public static boolean isPerfectSquare(long n)
    {
        if (n < 0)
          return false;

        long test = (long)(Math.sqrt(n) + 0.5);
        return test*test == n;
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
    public int commonLetters(String s1, String s2)
    {
        int[] arr1 = new int[27];
        int[] arr2 = new int[27];
        
        for(int i=0; i<s1.length(); i++)
        {
            int temp = s1.charAt(i) - 'a' + 1; 
            arr1[temp] += 1;
        }
        
        for(int i=0; i<s2.length(); i++)
        {
            int temp = s2.charAt(i)- 'a' + 1;
            arr2[temp] += 1;
        }
        
        int count = 0;
        for(int i=0; i<arr1.length; i++)
            if(arr1[i]>0 && arr2[i]>0) count+=Math.min(arr1[i], arr2[i]);
        return count;
   }
    private static List<String> getPermutations(String prefix, String str) 
    {
        int n = str.length();
        List<String> list = new ArrayList<>();
        //if n is 0 we have a permutation (which is prefix)
        if (n == 0) {list.add(prefix);}
        else 
        {
            for (int i = 0; i < n; i++){
                getPermutations(prefix + str.charAt(i), str.substring(0, i) + str.substring(i+1, n));
            }
        }
        return list;
    }   
       public static long gcd(long u, long v)
   {
        long t, k;

        if (v == 0) return u;

        if (u < v)
        {
          t = u;
          u = v;
          v = t;
        }

        for(k = 1; (u & 1) == 0 && (v & 1) == 0; k <<= 1)
          u >>= 1; v >>= 1;

        t = (u & 1) != 0 ? -v : u;
        while (t != 0)
        {
          while ((t & 1) == 0) t >>= 1;
          if (t > 0)
            u = t;
          else
            v = -t;
          t = u - v;
        }
        return u * k;
      }
}