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
		printf("Select a function to approximate:");
		scanf("%d",&choice);
		while(choice < 1 || choice > 4) {
			printf("Invalid choice\n");
			scanf("%d",&choice);
		}
		printf("Select a value for X");
		scanf("%d",&x);

		printf("Enter a value for the number of iterations:\n");
		scanf("%d",&n);
		while (n <= 0) {
			printf("Must be more than zero\n");
			scanf("%d",&n);
		}

			for (int i = 1; i <= n; i++) {

				if (choice == 1) {
					int factin = 2*i;
					for (int j = 1; j <= factin; j++) {
						factin *= j;}
					float fraction = pow(x,2*i)/factin;
					current = pow(-1,i)*fraction;


				}

				else if (choice == 2) {
					int factin = 2*i - 1;
					for (int j = 1; j <= factin; j++) {
						factin *= j;}
					float fraction = (pow(x,(2i-1))/factin);
					current = pow(-1,(i-1))*fraction;
				}

				else if (choice == 3) {
					int factin = i;
					for (int j = 1; j <= factin; j++) {
						factin *= j;}
					current = pow(x,i)/factin;
				}
				sum+=current;
			}
		return 0;
		}
	}


// Created by User on 9/11/2025.
//