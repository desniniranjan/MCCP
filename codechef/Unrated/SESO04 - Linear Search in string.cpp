import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in =new Scanner(System.in);
		String s = in.next();
// 		char []a = s.tocharArray();
		char q=in.next().charAt(0);
		for(int i=0;i<s.length();i++){
		    if(s.charAt(i)==q){
		        System.out.println(i);
		        System.exit(0);
		    } 
		}
		System.out.println(-1);
	}
}
