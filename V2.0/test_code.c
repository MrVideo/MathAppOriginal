#include <stdio.h>
#include <stdlib.h>

int main()
	{
		char sel_st;
		int flag_exit=0;	
		
		for( ; ; )
			{	
				system("clear");
				printf("Selezione: ");
				scanf("\t%c",&sel_st);
				switch(sel_st)
					{
						case 'a':
							printf("Caso A\n");
							printf("Terminare? (1/0) ");
							scanf("\t%i",&flag_exit);
							switch(flag_exit)
							   {
							   		case 0:
							   			break;
							   		case 1:
							   			return 0;
							   			break;
							   	}
							break;
						case 'b':
							printf("Caso B\n");
							printf("Terminare? (1/0) ");
							scanf("\t%i",&flag_exit);
							switch(flag_exit)
							   {
							   		case 0:
							   			break;
							   		case 1:
							   			return 0;
							   			break;
							   	}
							break;
						case 'c':
							printf("Caso C\n");
							printf("Terminare? (1/0) ");
							scanf("\t%i",&flag_exit);
							switch(flag_exit)
							   {
							   		case 0:
							   			break;
							   		case 1:
							   			return 0;
							   			break;
							   	}
							break;
					}
			}
	}