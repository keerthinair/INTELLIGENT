#include<sdio.h>
int main()
{
double number;
printf("Enter a number:");
scanf("%1f",&number);
if(number<0.0)
printf("You entered a negative number.");
else if(number>0.0)
printf("You entered a positive number.");
else
printf("You entered 0.");
return 0;
}
