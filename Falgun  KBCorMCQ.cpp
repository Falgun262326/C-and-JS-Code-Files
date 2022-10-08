#include<stdio.h>
main()
{
	char enter;
	printf("\nKBC game \n Be the champion");
	printf("\nPress E to enter");
	scanf("%s",&enter);
	if (enter=='E'|| enter=='e')
	{
		printf("\n\n----------Welcome play with us------------");
		/*Question*/
		char op;
		printf("\n\n------Questoin------\nWhat is .h in C language\nOPTION\n\nA. Main function\t\t\t\tB. print function\nC. Header Extention\t\t\t\tD. int datatype.");
		printf("\nEnter answer ");
		scanf("%s",&op);
		if(op=='C'|| op=='c')
		{
			printf("\n\tcorrect answer");
		}

		
		else 
		{
			printf("\nWrong answer\nCorrect answer is option C");
		}
		printf("\n\n------Questoin------\nWhat is # in C language\nOPTION\n\nA. Pre processor\t\t\t\tB. print function\nC. Include File\t\t\t\tD. int datatype.");
		printf("\nEnter answer ");
		scanf("%s",&op);
		if(op=='A'|| op=='a')
		{
			printf("\n\tcorrect answer");
		}

		
		else 
		{
			printf("\nWrong answer\nCorrect answer is Option A");
		}
		printf("\n\n------Questoin------\nWhat is int in C language\nOPTION\n\nA. variable\t\t\t\tB. print function\nC. Include File\t\t\t\tD.  datatype.");
		printf("\nEnter answer ");
		scanf("%s",&op);
		if(op=='D'|| op=='d')
		{
			printf("\n\tcorrect answer");
		}

		
		else 
		{
			printf("\nWrong answer\nCorrect answer is option D");
		}
    }
    else 
    {
    	printf("\n\n---------Play with  us later------------");
	}
}
