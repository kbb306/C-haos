#include <stdio.h>
#include<math.h>
unsigned long long factorial(int n) {
        if (n == 0) {
                return 1;
        }
        long long  start = 1;
        int i;
        for(i = n; i > 1; i--) {
                start *= i;
        }

}

int main() {
        int end, choice = 0, x;
        double sum, formula = 0;
        while (choice !=4) {
                sum= 0;
                printf("Welcome to Taylor Series\n");
                printf("1. Approximate cos(x)\n");
                printf("2. Approximate sin(x)\n");
                printf("3. Approximate e^x\n");
                printf("4. Quit\n");
                printf("Select a choice: ");
                scanf("%d",&choice);
                if (choice >0 && choice <4) {
                        printf("Enter the value of x: ");
                        scanf("%d",&x);
                        printf("Enter the number of iterations: ");
                        scanf("%d",&end);
                        while (end <=0 ) {
                                printf("Please enter another number of iterations: ");
                                scanf("%d",&end);
                        }

                        switch(choice) {
                                case 1: {
                                        if (end > 10) {
                                                printf("long long variable space exceeded, defaulting to maximum.");
                                                end = 10;
                                        }
                                        for (int n = 0; n < end; n++) {
                                                printf("Fact =%lld\n",factorial(2*n));
                                                formula = pow(-1, n) * (pow(x,2*n)/factorial(2*n));
                                                sum += formula;
                                        }
                                        printf("The sum of the series is: %lf\n",sum);
                                        break;
                                }

                                case 2: {
                                        if (end > 10) {
                                                printf("long long variable space exceeded, defaulting to maximum.");
                                                end = 10;
                                        }
                                        for (int n = 1; n < end; n++) {
                                                printf("Fact =%lld\n",factorial(2*n));

                                                formula = (pow(-1, n-1) * pow(x,(2*n)-1))/factorial(2*n-1);
                                                sum += formula;
                                        }
                                        printf("The sum of the series is: %lf\n",sum);
                                        break;
                                }


                                case 3: {
                                        for (int n = 0; n <= end; n++) {
                                                if (end > 20) {
                                                        printf("long long variable space exceeded, defaulting to maximum.");
                                                        end = 20;
                                                }
                                                formula = pow(x,n)/factorial(n);
                                                sum += formula;
                                        }
                                        printf("The sum of the series is: %lf\n",sum);
                                        break;
                                }
                        }
                }
        }
        return 0;
}






