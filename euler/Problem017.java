/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package projecteuler;

/**
 *
 * @author Manan
 */
 
public class Problem017 {

    static int[] letterCounts = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3};
    static int[] tensPlaceLetterCounts = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
    static int thousandLetterCount = 8;
    static int hundredLetterCount = 7;

    public void euler017() {

        int max = 1000;

        int sum = 0;

        for (int i = 1; i <= max; i++) {
            sum += toWords(i);
        }
        System.out.println(sum);
    }

    public static int toWords(int val) {
        int sum = 0;
        int place = (int) (Math.pow(10, Integer.toString(val).length() - 1));
        int digit = val / place;

        if (place > 10) {
            if (place == 100) {
                sum += letterCounts[digit];
                sum += hundredLetterCount;
            } else if (place == 1000) {
                sum += letterCounts[digit];
                sum += thousandLetterCount;
            }
            if ((val % place) > 0) {
                sum += 3; //"and" - don't forget this
                sum += toWords(val % place);
            }
        } else {
            if (place == 1) {
                return letterCounts[val];
            }
            if (digit == 1) {
                switch (val % place) {
                    case 0:
                        sum += 3;
                        break;
                    case 1:
                    case 2:
                        sum += 6;
                        break;
                    case 3:
                    case 4:
                    case 8:
                    case 9:
                        sum += 8;
                        break;
                    case 5:
                    case 6:
                        sum += 7;
                        break;
                    case 7:
                        sum += 9;
                        break;
                }
            } else {
                sum += tensPlaceLetterCounts[digit] + toWords(val % place); //recursive call
            }
        }
        return sum;
    }
}
