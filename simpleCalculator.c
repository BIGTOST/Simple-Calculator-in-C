#include <stdio.h>

//Function Declaration
void printStartMenu(void);



int main()
{
	//i could use the "isFinished has the operationSelector but i choose separete the "
	int isFinished = 1, operationSelector = 0,firstValue =0, secondValue=0;
	// programer runner
	do{

		printStartMenu();
		scanf("%d",&operationSelector);
		if(operationSelector != 0)
		{
			switch(operationSelector){
				case 1:
				{
					printf("Insert the augent(first value):");
					scanf("%d",&firstValue);
					printf("Insert the addend(second value):");
					scanf("%d", &secondValue);
					printf("The result of the Addition  of the values %d + %d is %d.\n", firstValue, secondValue,firstValue+secondValue);
				}break;
				case 2:
				{
					printf("Insert the minuend(first value):");
					scanf("%d",&firstValue);
					printf("Insert the subtrahend(second value):");
					scanf("%d", &secondValue);
					printf("The result of the subtraction of the values %d - %d is %d.\n", firstValue, secondValue,firstValue-secondValue);
				}break;
				case 3:
				{
					printf("Insert multiplier(first value):");
					scanf("%d",&firstValue);
					printf("Insert the multiplicand(second value):");
					scanf("%d", &secondValue);
					printf("The result of the Multiplication of the values %d * %d is %d.\n", firstValue, secondValue,firstValue*secondValue);
				}
				break;
				case 4 :
				{
					printf("Insert the dividend(first value):");
					scanf("%d",&firstValue);

					do
					{
						printf("Insert the divisor(second value):");
						scanf("%d", &secondValue);
						if(secondValue == 0)
							printf("The divisor cannot be 0.");
					}while(secondValue == 0);

					printf("The result of the division  of the values %d / %d is %d.\n", firstValue, secondValue,firstValue/secondValue);
				}break;
				default:
				{
					printf("Selected number Unknown");
				}break;
			}
		}
		else
		{
			isFinished = 0;
		}
	}while(isFinished != 0);
	return 0 ;

}


void printStartMenu()
{
	printf("-----------Simple Calculator Software-----------\n");
	printf("\tSelect the operation number\n");
	printf("\t\t     Add-Operation-[1]\n");
	printf("\t\tSubtract-Operation-[2]\n");
	printf("\t\tMultiply-Operation-[3]\n");
	printf("\t\tDivision-Operation-[4]\n");
	printf("\tEnd Program        \t   [0]\n");
}



