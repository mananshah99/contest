/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem009 extends Library {
    public static void euler009() 
    {
        int m = 1;
        while(true)
        {
            int a, b, c;
            for(int n=0; n<m; n++){
                
                a=((m*m)-(n*n));
                b = 2*m*n;
                c = ((m*m)+(n*n));
                if((a+b+c)==1000)
                {
                    System.out.println((a*b*c));
                    return;
                }
            }
            m++;
        }
    }
}
 
