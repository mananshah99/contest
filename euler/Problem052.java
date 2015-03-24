/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem052 extends Library {
    public static void euler052()
    {
        long num =1;            
        while(true)
        {
            //2x, 3x, 4x, 5x, and 6x number
            long num2 = num*2;
            long num3 = num*3;
            long num4 = num*4;
            long num5 = num*5;
            long num6 = num*6;
            
            //lengths of each
            int numlen = Long.toString(num).length();
            int num2len = Long.toString(num2).length();
            int num3len = Long.toString(num3).length();
            int num4len = Long.toString(num4).length();
            int num5len = Long.toString(num5).length();
            int num6len = Long.toString(num2).length();
            
            //check if all the lengths are equal - cuts running time
            if(isSameLength(numlen, num2len, num3len, num4len, num5len, num6len))
            {
                if(hasSameNumbers(num, num2, num3, num4, num5, num6))
                {
                    System.out.println(num);
                    return;
                }
            }
            num++;
         }
    }
    private static boolean isSameLength(int numlen, int num2len, int num3len, int num4len, int num5len, int num6len)
    {
       if((numlen == num2len) && (numlen == num3len) && (numlen == num4len) && (numlen == num5len) && (numlen == num6len))
       {
           return true;
       }
       else return false;
    }
    private static boolean hasSameNumbers(long num, long num2, long num3, long num4, long num5, long num6)
    {
        int numlen = Long.toString(num).length();
        for(int i=0; i<numlen; i++)
        {
            if(Long.toString(num2).indexOf(Long.toString(num).charAt(i))!=-1 
                    && Long.toString(num3).indexOf(Long.toString(num).charAt(i))!=-1 
                    && Long.toString(num4).indexOf(Long.toString(num).charAt(i))!=-1 
                    && Long.toString(num5).indexOf(Long.toString(num).charAt(i))!=-1 
                    && Long.toString(num6).indexOf(Long.toString(num).charAt(i))!=-1) //if each of the characters match in num2
            {
                if(i==numlen-1)
                {
                    return true;
                }
            }
            else return false;
        }
        return true;
    }
}
