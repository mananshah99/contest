/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem033 extends Library {
    public static void euler033()
    {
        for(int numerator=10; numerator<98; numerator++)
        {
            for(int denominator=(numerator+1); denominator<=99; denominator++)
            {
                if(numerator%10 == 0 || denominator%10 == 0) continue;
                String tempnum = "";
                String tempden = "";
                for(int i=0; i<Integer.toString(numerator).length(); i++)
                {
                    for(int j=0; j<Integer.toString(denominator).length(); i++)
                    {
                        if(!(Integer.toString(numerator).charAt(i)==Integer.toString(denominator).charAt(j)))
                        {
                            tempnum += Integer.toString(numerator).charAt(i);
                            tempden += Integer.toString(denominator).charAt(j);
                        }
                    }
                }
            }
        }
    }
}
