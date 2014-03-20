using System;

///uses the DateTime library in C# for computing Sundays
public class Problem019
{
	public static void Main() 
	{
		int sundays = 0;
        	for (int year = 1901; year <= 2000; year++){
            		for (int month = 1; month <= 12; month++) {
		        	DateTime t = new DateTime(year, month, 1);
                		if (t.DayOfWeek == DayOfWeek.Sunday) sundays++;
            		}
        	}
        	Console.WriteLine(sundays);
    	}
}
