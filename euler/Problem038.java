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
public class Problem038 {

    public static void euler038()
    {
        long result;
        for (long i = 9999; i >= 9000; i--) 
        {
            result = Long.parseLong(i + "" + 2*i);
            if(isPandigital(Long.toString(result))){
                System.out.println(result);
                return;
            }
        }
    }

    private static boolean isPandigital(String num) {
        if (num.length() != 9)
            return false;
        char[] temp = num.toCharArray();
        Arrays.sort(temp);
        return new String(temp).equals("123456789");
    }
}
