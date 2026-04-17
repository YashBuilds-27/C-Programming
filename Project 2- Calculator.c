//Project 2: Calculator 
#include <stdio.h>

//Functionns
float add(int a,int b) {
    return a+b;
}
float sub(int a,int b) {
    return a-b;
}
float product(int a,int b) {
    return a*b;
}
void div(int a,int b) {
    if (b!=0) {
        printf("\nDivision : %.2f\n",a/b);
    } else {
        printf("\nDivide by Zero Error\n");
    }
}
float sq(float n) {
    return n*n;
}
float cube(float n) {
    return n*n*n;
}

//Main Function 
void main() {
    int ch;
    float num1,num2,num3,result;
    printf("C A L C U L A T O R\n");
    while(1) {
        printf("\n||-------Menu-------||\n");
        printf("Press 1 for Addition\n");
        printf("Press 2 for Subtraction\n");
        printf("Press 3 for Multiplition\n");
        printf("Press 4 for Division\n");
        printf("Press 5 for Square\n");
        printf("Press 6 for Cube\n");
        printf("Press 7 to Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        if(ch>=1 && ch<=4) {
            printf("\nEnter first number : ");
            scanf("%f",&num1);
            printf("Enter second number : ");
            scanf("%f",&num2);
            if(ch==1) {
                result=add(num1,num2);
                printf("\nSum : %.2f\n",result);
            } else if(ch==2) {
                result=sub(num1,num2);
                printf("\nDifference : %.2f\n",result);
            } else if(ch==3) {
                result=product(num1,num2);
                printf("\nProduct : %.2f\n",result);
            } else if(ch==4) {
                div(num1,num2);
            }
        } else if(ch==5 || ch==6) {
            printf("Enter number : ");
            scanf("%f",&num3);
            if(ch==5) {
                result=sq(num3);
                printf("\nSquare : %.2f\n",result);
            } else if(ch==6) {
                result=cube(num3);
                printf("\nCube : %.2f\n",result);
            }
        } else if(ch==7) {
            printf("\nExited...");
            break;
        } else {
            printf("\nInvalid Choice\n");
        }
    }
}