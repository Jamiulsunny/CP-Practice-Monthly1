#include <stdio.h>

int main() {

    int marks;

    printf("Enter your marks:");

    scanf("%d",&marks);

    if (marks >= 80 && marks<= 100) {
        printf("Grade: A+ \nGrade Point: 4.00\n");
    }
    else if (marks >= 75&& marks<80) {
        printf("Grade: A \nGrade Point: 3.75\n");
    }
    else if (marks >= 70&& marks<75) {
        printf("Grade: A- \nGrade Point: 3.50\n");
    }
    else if (marks >= 65&& marks<70) {
        printf("Grade: B+ \nGrade Point: 3.25\n");
    }
    else if (marks >= 60&& marks<65) {
        printf("Grade: B \nGrade Point: 3.00\n");
    }
    else if (marks >= 55&& marks<60) {
        printf("Grade: B- \nGrade Point: 2.75\n");
    }
    else if (marks >= 50&& marks<55) {
        printf("Grade: C+ \nGrade Point: 2.50\n");
    }
    else if (marks >= 45&& marks<50) {
        printf("Grade: C \nGrade Point: 2.25\n");
    }
    else if (marks >= 40&& marks<45) {
        printf("Grade: D \nGrade Point: 2.00\n");
    }
    else if (marks >= 0&& marks<40) {
        printf("Grade: F \nGrade Point: 0.00\n");
    }
    else {
        printf("Invalid marks!\n");
    }


}

