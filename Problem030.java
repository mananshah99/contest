/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem030 extends Library {
    public static void euler030()
    {
        int result = 0;
 
        for (int i = 2; i < 500000; i++) 
        {
            int sumOfPowers = 0;
            int num = i;
            while (num > 0) 
            {
                int div = num % 10;
                num /= 10;
 
                int temp = div;
                for(int j = 1; j < 5; j++)
                    temp *= div;
                
                sumOfPowers += temp;
            }
        if (sumOfPowers == i) result += i;
      }
   }
}
