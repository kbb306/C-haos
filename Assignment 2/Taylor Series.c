#include<stdio.h>
#include<math.h>
//Declare Variables
int x, n, i, choice;
printf("Available functions\n");
printf("1. cos(x)\n");
printf("2. sin(x)\n");
printf("3. e^x\n");
int main {
	while choice != 4 {
		printf("Select a function to approximate:");
	scanf("%d",&choice);
		while(choice < 1 || choice > 4) {
			printf("Invalid choice\n");
			scanf("%d",&choice);
		}
		printf("Enter a value for the number of iterations:\n")
		scanf("%d",&n);
		while (n <= 0){
			printf("Must be more than zero\n");
			scanf("%d",n);
	    double sum = 0;

	for (i = 1; i <= n; i++) {
		if (choice == 1) {
			int factval = 1
			int factin 2*n
			for (int j = 1; j <= factin; j++) {
				factval *= i;}
			float fraction = (pow(x,2*n)/factval);
			double current = pow(-1,n)*fraction;
			sum += current;
		}

		else if (choice == 2) {
		}

		else if (choice == 3) {
		}
		else:
			break;
	return 0

// Created by User on 9/11/2025.
//