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
public class Problem092 {

    public static void euler092()
    {
        int result = 0;
        Boolean[] cache = new Boolean[568];
        Arrays.fill(cache, false);
        
        for (int i = 1; i < cache.length; i++) {
            //current value in sequence
            int curr = getNext(i);

            while (curr > i && curr != 89) {
                curr = getNext(curr);
            }

            if (cache[curr] || curr == 89) {
                result++;
                cache[i] = true;
            }
        }

        for (int i = cache.length; i <= 10000000; i++) {
            if (cache[getNext(i)]) 
                result++;
        }
        System.out.println(result);
    }

    //gets the next number
    private static int getNext(int num) 
    {
            int x = 0;
        while (num > 0) 
            {
            x += (num%10) * (num%10);
            num /= 10;
        }
        return x;
    }
}
