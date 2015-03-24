/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.math.BigInteger;

/**
 *
 * @author Manan
 */
public class Problem026 extends Library 
{

    public static void euler026()
    {
        //BROKEN - DOES NOT WORK
        long NUMERATOR = 1;
        int MAX = 0;
        for(int i=2; i<4; i++)
        {
            long bi = ((NUMERATOR)/(long)i);
            System.out.println(bi);
            String s = String.valueOf(bi);
            for(int j=0; j<s.length()-1;j++)
            {
                String temp = s.substring(0, j);
                if(s.indexOf(temp) != -1)
                {
                    if(temp.length()>MAX) MAX = temp.length();
                }
            }
        }
        System.out.println(MAX);
    }
}
