/*
mananshah	 
343A - Rational Resistance	 
Java 7	

Accepted	 
156 ms	
0 KB
*/

//This program won't compile unless you rename the file to "p343A" as opposed
//to 343A. The current name is 343A.java to follow repository naming conventions.

import java.util.*;

public class p343A 
{
    static long n = 0;
    static void resistance(long a, long b) 
    {
        n += a/b;
        a %= b;
        if(a!=0) resistance(b, a);
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        resistance(a, b);
        System.out.println(n);
    }
}
