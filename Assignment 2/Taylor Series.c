#include<stdio.h>
#include<math.h>
//Declare Variables

int main() {
	int x, choice=0, n;
	double current = 0, sum = 0;
	printf("Available functions\n");
	printf("1. cos(x)\n");
	printf("2. sin(x)\n");
	printf("3. e^x\n");
	printf("4. Quit\n");
	while (choice != 4) {
		sum = 0;
		printf("Select a function to approximate: ");
		scanf("%d",&choice);
		while(choice < 1 || choice > 4) {
			printf("Invalid choice\n");
			scanf("%d",&choice);
		}
		printf("Select a value for X: ");
		scanf("%d",&x);

		printf("Enter a value for the number of iterations: ");
		scanf("%d",&n);
		while (n <= 0) {
			printf("Must be more than zero\n");
			scanf("%d",&n);
		}


		if (choice == 1) { // cos()
			for (int i = 0; i < n; i++) {
				unsigned long long fact = 1;
				float factin = 2*i;
				for (int j = factin; j > 1; j--) {
					fact *= j;}
				double fraction = pow(x,2*i)/(fact);
				current = pow(-1,i)*fraction;
				sum+=current;
			}

		}

		else if (choice == 2) { //sin()
			for (int i = 1; i < n; i++) {
				unsigned long long fact = 1;
				float factin = 2*i - 1;
				for (int j = factin; j > i; j--) {
					fact *= j;}
				double fraction = (pow(x,(2*i-1))/(fact);
				current = pow(-1,(i-1))*fraction;
				sum+=current;
			}
		}

		else if (choice == 3) { // e^x
			for (int i = 0; i < n; i++) {
				unsigned long long fact = 1;
				float factin = i;
				for (int j = factin; j > i; j--) {
					fact *= j;}
				current = pow(x,i)/(fact);
				sum+=current;
			}
		}
		else if (choice == 4) {
			break;
		}
		printf("Your result is: %f\n",sum);
		sum = 0;
		current = 0;
	}
	return 0;
}


// Created by User on 9/11/2025.
