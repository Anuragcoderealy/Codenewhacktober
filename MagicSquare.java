import java.util.Scanner;


public class MagicSquare   
{  
// Method for generating the odd-sized magic squares  
public void makeSquare(int s)  
{  
int magicSqr[][] = new int[s][s];  
  
// Initialize position for 1  
int r = s / 2;  
int c = s - 1;  
  
// One by one put all values in magic square  
for (int no = 1; no <= s * s;)   
{  
if (r == -1 && c == s) // 3rd rule  
{  
c = s - 2;  
r = 0;  
}  
else   
{  
// 1st rule helper if the next number  
// is going out of the range  
if (c == s)  
{  
c = 0;  
}  
  
// 1st rule helper if the next number is  
// going out of the range  
if (r < 0)  
{  
r = s - 1;  
}  
}  
  
// the 2nd rule  
if (magicSqr[r][c] != 0)   
{  
c = c - 2;  
r = r + 1;  
continue;  
}  
else  
{  
// setting the number  
magicSqr[r][c] = no;  
no = no + 1;  
}  
  
// the first condition  
c = c + 1;  
r = r - 1;  
}  
  
// printing the magic square  
System.out.println("The Magic Square for " + s + ": \n");  
System.out.println("Sum of each column or row " + s * (s * s + 1) / 2 + ": \n");  
for (r = 0; r < s; r++)   
{  
for (c = 0; c < s; c++)  
{  
System.out.print(magicSqr[r][c] + " ");  
}  
System.out.println();  
}  
}  
  
// main method  
public static void main(String[] argvs)  
{  
  
// n = 11 means a magic   
// square of order 11 is created  
//int n = 11;  
Scanner sc=new Scanner(System.in);
int n=sc.nextInt();
System.out.println(n);
 
MagicSquare obj = new MagicSquare();  
  
 
obj.makeSquare(n);  
  
}  
}  