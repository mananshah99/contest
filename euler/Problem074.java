/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;
import java.util.HashSet;
import java.util.List;

/**
 *
 * @author Manan
 */
public class Problem074 
{
    public static void euler074()
    {
        int total = 0;
        for(int i = 1; i <= 1000000; i++)
        {
            HashSet<Integer> set = new HashSet<>();
            
            //for holding the next number
            int temp = i;

            while(!set.contains(temp))
            {
                set.add(temp);
                temp = digitFactorialSum(temp);
            }
                 
            if (set.size()==60) total++;
        }
        System.out.println(total);
    }
    public static int digitFactorialSum(int num)
    {
        int[] factorials = {1,1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
        int temp = num;
        
        int sum = 0;
        while (temp > 0) {
            sum += factorials[temp % 10];
            temp /= 10;
        }
        return sum;
    }
}
