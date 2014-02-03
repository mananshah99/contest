/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.util.Arrays;

/**
 *
 * @author Manan
 */
public class Problem112 extends Library
{
    public static void euler112() 
    {
        int bouncy = 0;
	for (int i = 1; ; i++) 
        {
            if (isBouncy(i)) bouncy++;
            if (bouncy * 100 == i * 99)
                System.out.println(Integer.toString(i));
	}
    }
    
    public static boolean isBouncy(long n)
    {if(n<100) return false; return !(isDecreasing(n) || isIncreasing(n));}
    
    public static boolean isDecreasing(long n)
    {
        String num = Long.toString(n);
        char[] prev = num.toCharArray();
        char[] sorted = Arrays.copyOf(prev, prev.length);
        Arrays.sort(sorted);
        for(int i=0; i<sorted.length; i++)
        {
            char u = prev[i];
            char v = sorted[sorted.length-i-1];
            if(u!=v) return false;
        }
        return true;
    }
    public static boolean isIncreasing(long n)
    {
        String num = Long.toString(n);
        char[] prev = num.toCharArray();
        char[] sorted = Arrays.copyOf(prev, prev.length);
        Arrays.sort(sorted);
        for(int i=0; i<sorted.length; i++)
        {
            char u = prev[i];
            char v = sorted[i];
            if(u!=v) return false;
        }
        return true;
    }
}
