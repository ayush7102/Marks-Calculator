#include <stdio.h>
#include <conio.h>
main(){
	int n,i,j;
	printf("Enter number of students: ");
	scanf("%i",&n);
	char name[n][30];
	char subName[6][30]={"Name","DSA","OOP","Python","Total","Average"};
	float score[n][5];
	for(i=0; i<n; i++){
		fflush(stdin);
		printf("Enter Name: ");
		//gets(name[i]);
		scanf("%[^\n]",name[i]);
		printf("Enter DSA Score: ");
		scanf("%f",&score[i][0]);
		printf("Enter OOP Score: ");
		scanf("%f",&score[i][1]);
		printf("Enter Python Score: ");
		scanf("%f",&score[i][2]);
		score[i][3]=score[i][0]+score[i][1]+score[i][2];
		score[i][4]=score[i][3]/3.0;
	}
	printf("*********************************************************************\n");
	printf("No");
	for(i=0; i<6; i++)
		printf("\t%s",subName[i]);
	printf("\n");
	for(i=0; i<n; i++){
		printf("%i",i+1);
		printf("\t %s",name[i]);
		for(j=0; j<5; j++){
			printf("\t %.2f",score[i][j]);
		}
		printf("\n");
	}
	getch();
}
