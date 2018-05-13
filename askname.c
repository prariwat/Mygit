#include <stdio.h>
#include <string.h>

void main()
{
	int age;

	puts("How old are you? ");
	scanf("%d",&age);

	if (age>=20 && age<=30) 
	{
		char name[50];
		puts ("\n****************");
		puts ("Wellcome to my program");
		puts ("What is you name? ");

		scanf("%s",name);
		printf("Hello khun %s\n",name);
	}
	else puts ("Go away!!");
}
