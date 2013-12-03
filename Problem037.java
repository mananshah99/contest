/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem037 {
    public static void euler037(){
        long sum = 0;
        int count = 0;
        int num = 10;
        while(count<11)
        {
            if(isTruncatable(num)){
                sum += num;
                count++;
            }
            num++;
        }
        System.out.println(sum);
    }
    public static boolean isPrime(long n)
    {
        if(n==2) return true;
        if(n%2==0) return false;
        if(n>3 && n%3==0) return false;
        if(n>5 && n%5==0) return false;
        for(int j=2; j<= Math.sqrt(n); j++)
        {
            if(n%j==0) return false;//if its not prime (has factors)
        }
        return true;
    }
    public static boolean isTruncatableRight(long n)
    {
        if(n<10)
        {
             if(isPrime(n)) return true;
        }
        else
        {
            long temp = n%10;
            if(!isPrime(temp)) return false;
            return isTruncatableRight(n/10);
        }
        return false;
    }
    public static boolean isTruncatableLeft(long n)
    {
        if(n<10)
        {
             if(isPrime(n)) return true;
        }
        else
        {
            long temp = n%10;
            if(!isPrime(temp)) return false;
            return isTruncatableRight(n/10);
        }
        return false;
    }
      }

