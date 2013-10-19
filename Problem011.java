/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;

/**
 *
 * @author Manan
 */
public class Problem011 {
    public static void euler011() throws IOException {
         ArrayList arr = new ArrayList<Integer>();         
         BufferedReader br = new BufferedReader(new FileReader("C:\\Users\\Manan\\Documents\\NetBeansProjects\\projectEuler\\src\\projecteuler\\Problem013.txt"));
         String astring;
         
         while((astring = br.readLine())!=null)
         {
            for(int i=0; i<astring.length()-2; i++)
            {
                String temp = astring.substring(i, i+2);
                arr.add(Integer.parseInt(temp));
                i+=2;
            }
            //for(int j=0; j<arr.size(); j++){
            //    System.out.println(arr.get(j));
            //}
         }
         for(int j=0; j<arr.size(); j++){
            int MAX = totheleft();
            down();
            diagonal();
         }
     }
     public static int totheleft(){
         
         int product;
         product *=(arr.get())
     }
    public static int down() 
    {
        
    }

    public static int diagonal() {
        
    }
    }
}
