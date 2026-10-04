import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in =new Scanner(System.in);
		int l=in.nextInt();
		int n = in.nextInt();
		while(l-- >0){
		    if(n==in.nextInt()) {
		        System.out.println("Yes");
		        System.exit(0);
		    }
		}
		System.out.println("no");
		
	}
}
