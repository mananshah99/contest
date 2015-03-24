/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package projecteuler;

import static projecteuler.Library.isPrime;

/**
 *
 * @author Manan
 */

public class Problem037 extends Library 
{
    public static void euler037(){
        long sum = 0;
        int count = 0;
        int num = 10;
        while(count<11)
        {
            if(isTruncatableRight(num) && isTruncatableLeft(num) && isPrime(num)){
                sum += num;
                count++;
            }
            num++;
        }
        System.out.println(sum);
    }
    
    /* Tried to stay away from recursion for this problem;
     * I was worried that the huge numbers would cause stack overflow w/recursive
     * backtracking, so just stuck with for loops in these methods. 
     */
    public static boolean isTruncatableRight(long n)
    {
        int length = Long.toString(n).length();
        int reducingfactor = length;
        for(double i=(Math.pow(10., (double)length)); i>1; i = Math.pow(10., (double)reducingfactor)){
            reducingfactor--;
            long temp = (long)(n%i);
            if(!isPrime(temp)) return false;
        }
        return true;
    }

    public static boolean isTruncatableLeft(long n)
    {
        String num = Long.toString(n);
        int length = num.length();
        
        for(int i=1; i<length+1; i++){
            if(!isPrime(Long.parseLong(num.substring(0, i)))) return false;
        }
        return true;
    }
 }

