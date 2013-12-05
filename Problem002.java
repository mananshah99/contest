/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem002 extends Library {
    public static void euler002()
    {
        int x= 1;
        int y=1;
        int z = 0;
        int result = 0;
        while(z<4000000)
        {
            z = (x+y);
            if(z%2==0) result += z;
            //next iteration
            x = y;
            y = z;
        }
        System.out.println(result);
    }
}
