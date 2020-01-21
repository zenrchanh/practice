// Q8 Write a C program to find the largest of three numbers.

#include <stdio.h>
void main()
{
	int n1, n2, n3;

	if (n1 >= n2 && n1 >= n3) //check if n1 larger than n2 and n3
		printf("n1 is the largest number");
	else if (n2 >= n1 && n2 >= n3) //if n1 is not larger than both check if n2 is
		printf("n2 is the largest number")
	else// if n2 is not larger than both then n3 is larger.
		printf("n3 is the largest number");
}

//Q10 Write a C program to find the eligibility of admission for a professional course based on the following criteria
// CRITERIA:	Marks in Maths >=65 
//           	Marks in Phy >=55
//				Marks in Chem>=50
//				Total in all three subject >=180
//				or
//				Total in Math and Physics >=140 


#include <stdio.h>
void main()
{
	// subjects are math, physics, chemistry, also total of all subjects and lastly total of math and physics
	int m,p,c,t,mp;

	if(m >= 65, p>=55, c>=50)
		if((m+p+c)>=180 || (m+p) >= 140)
			printf("eligible for admission");
		else
			printf("not eligible for admission.");



	

}

//Q13 Write a C program to read temperature in centigrade and display a suitable message according to temperature state below
//	Temp < 0 then Freezing weather
//	Temp 0-10 then Very Cold weather
//	Temp 10-20 then Cold weather
//	Temp 20-30 then Normal in Temp
//	Temp 30-40 then Its Hot
//	Temp >=40 then Its Very Hot


#include <stdio.h>
void main()
{
	int temperature;

	if(temperature < 0)
		printf("freezing weather");
	else if(temperature < 10)
		printf("very cold weather");
	else if(temperature < 20)
		printf("cold weather");
	else if(temperature < 30)
		printf("normal weather");
	else if(temperature < 40)
		printf("hot weather");
	else
		printf("very hot weather");
}

//Q16 Write a C program to check whether a character is an alphabet, digit or special character

#include <stdio.h>
void main()
{
	char c;

	if(c >= 'a' && c <='z') //check if character is within alphabet, also statement requires body because if 'if' is ran and conditions are true do not need to proceed further and whatever is written inside of the brackets are apart of the statement.
	{
		printf("c is a letter");
	}
	else if(c >= '0' && c <= '9') //checking now if it is a digit, same thing requiring body as referred to previous comment.
	{
		printf("c is a digit");
	}
	else // if is not a letter or digit, it is a special character.
	{
		printf("c is a special character"); 
	}
	
}

//Q17 Write a C program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>
void main()
{
	char c;


	if( c == 'a' || c == 'e' || c == 'i' || c =='o' ) //aeiou not sure for simplicity purposes to incorporate 'y' but feel like that creates a more complicated program cause then needing to get into english technicalities of when y is a vowel. 
	{
		printf("alphabet is a vowel"); //requires body because do not need to proceed any further if statement is true.
	}
	else
	{
		printf("alphabet is a consonant"); //since c is not true to 'aeiou' is must be a consonant unsure
	}
}


//Q18 Write a C program to calculate profit and loss on a transaction


#include <stdio.h>
void main()
{
	int cost, sell, net //cost is cost of say item, sell is selling price of item and net is net loss or profit on sale.

	if(sell > cost) //calculate gained amount if true
	{
		net = sell - cost;
		printf("profit made: %d\n", net);
	}
	else if(cost > sell) // caluclate loss amount if gained is not true
	{
		net = cost - sell;
		printf("loss amount: %d\n", net);
	}
	else //if there is literally no loss or profit aka 0
	{
		printf("no profit or loss.")
	}
}


//Q1