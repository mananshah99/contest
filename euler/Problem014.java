/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
public class Problem014 extends Library {
    public static void euler014()
    {
        int MAX_LENGTH = 0;
        int startnum = 0; //number with maximum path length
        
        for(int n = 2; n < 1000001; n++){
            long num = n;
            int count = 1;
            
            while(num > 1)
            {
                if(num % 2 == 0) num = num / 2;
                else num = (num * 3) + 1;
                count ++;
            }
             
            if(count > MAX_LENGTH)
            {
                MAX_LENGTH = count;
                startnum = n;
            }
        }
        System.out.println(startnum);
    }
}
