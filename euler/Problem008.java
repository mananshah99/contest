/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

/**
 *
 * @author Manan
 */
public class Problem008 extends Library
{
        public static void euler008() throws IOException 
        {
            int max = 0;
            BufferedReader br = new BufferedReader(new FileReader("C:\\Users\\Manan\\Documents\\NetBeansProjects\\projectEuler\\src\\projecteuler\\Problem008.txt"));
            String line;
            while ((line = br.readLine()) != null) 
            {
                for (int i = 0; i < line.length() - 4; i++) //string of 5 chars
                {
                    int p = 1;
                    for (int j = i; j < i + 5; j++) //each character
                        p = p * Character.getNumericValue(line.charAt(j)); //get the product
                    if (p > max) max = p; //set as max
                }
            }
            br.close(); //close reader
            System.out.println(max);      
        }
}

