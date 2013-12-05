/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem005 extends Library {
    public static void euler005() 
    {
        int i = 20;
        int count = 0;
        while(true)
        {
            for(int j = 1; j<=20; j++)
            {
                if(i%j!=0)
                    break;
                else count++;
            }
            if(count==20)
            {
                System.out.println(i);
                return;
            }
            else
            {
                count=0;
                i++;
            }
        }
    }
}
