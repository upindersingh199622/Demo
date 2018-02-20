/*program to add two numbers */
# include <stdio.h>
# include <conio.h>
int main () //mainfunction starts
{
	int a,b,s; //semicolon-end of statement
	printf ("enter two numbers\n"); //\n-next line
	scanf ("%d%d",&a,&b); // &-address operator
	s=a+b;
	printf ("sum of numbers is %d",s);
	getch(); // to hold the screen
}
