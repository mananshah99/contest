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

//incomplete
public class Problem037 extends Library {
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
    
    
    /* To Do 
     * Supposed to check if a number is truncatable going left in
     */
    public static boolean isTruncatableLeft(long n)
    {
        int length = Long.toString(n).length();
        for(double i=(Math.pow(10., (double)length)); i>0; i-=10)
    }
 }

