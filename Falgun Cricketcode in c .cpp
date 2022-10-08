#include<stdio.h>
main()
{
	/*Enter intro */
	printf("\n\tIPL");
	printf("\n\nWe will play a 3 Round  Match");

	/*IF ELse match condtion and intro*/
		printf("\nWelcome to the game of cricket");
		printf("\n You have to give runs of the team");
		printf("\n\nFollowing are the teams >\n\nCSK\nRR\nGujarat Lions");
		int runs1csk,runs1rr,runs1gl,runs2csk,runs2rr,runs2gl,runs3csk,runs3rr,runs3gl;
		int totalcsk,totalrr,totalgl;
		printf("\n\n\nMatch 1");
		
			printf("CSK Runs >> ");
			scanf("%d",&runs1csk);
			printf("RR Runs >> ");
			scanf("%d",&runs1rr);
			printf("Gujarat Lions Runs >> ");
			scanf("%d",&runs1gl);
			
		printf("\n\n\nMatch 2");
		
			printf("CSK Runs >> ");
			scanf("%d",&runs2csk);
			printf("RR Runs >> ");
			scanf("%d",&runs2rr);
			printf("Gujarat Lions Runs >> ");
			scanf("%d",&runs2gl);
			
		printf("\n\n\nMatch 3");
		
			printf("CSK Runs >> ");
			scanf("%d",&runs3csk);
			printf("RR Runs >> ");
			scanf("%d",&runs3rr);
			printf("Gujarat Lions Runs >> ");
			scanf("%d",&runs3gl);
			
			
			totalcsk=runs1csk+runs2csk+runs3csk;
			totalrr=runs1rr+runs2rr+runs3rr;
			totalgl=runs1gl+runs2gl+runs3gl;

			printf("\nTotal of CSk = %d",totalcsk);
			printf("\nTotal of RR = %d",totalrr);
			printf("\nTotal of Gujarat Lions = %d",totalgl);
		
		
	
			
			/*If else statement for Winner*/
			if (totalcsk > totalrr && totalcsk > totalgl)
			{
				printf("\nWinner is CSK");
			}
			else if (totalrr > totalcsk && totalrr > totalgl)
			{
				printf("\nWinner is RR");
			}
			else if (totalgl > totalcsk && totalgl > totalrr)
			{
				printf("\nWinner is Gujarat Lions");
			}
			else 
			{
				printf("\nYou have made a wrong output");
			}
	}
	



