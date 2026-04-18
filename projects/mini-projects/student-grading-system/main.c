//Student Grade Calculator
#include<stdio.h>
char grade(int gd) {
    if(gd>=90) {
        return 'A';
    } else if(gd>=80) {
        return 'B';
    } else if(gd>=70) {
        return 'C';
    } else if(gd>=60) {
        return 'D';
    } else {
        return 'E';
    }
}
void main() {
    int sub,ch=1;
    float marks,total,avg;
    while(ch==1) {
        printf("Enter number of subjects : ");
        scanf("%d",&sub);
        for (int i=1; i<=sub; i++) {
            printf("Enter marks of subject %d : ",i);
            scanf("%f",&marks);
            total+=marks;
        }
        if(sub==0) {
            printf("No subjects provided...");
        } else {
            avg=total/sub;
            char st_grade=grade(avg);
            printf("\nAverage : %.2f\n",avg);
            printf("Grade : %c\n",st_grade);
        }
        printf("\nPress 1 to check more : ");
        scanf("%d",&ch);
    }
}
