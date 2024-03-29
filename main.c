#include <stdio.h>
#include <string.h>
#include "header.h"
#include "subjects.h"

int main() {
    const char *students[] = {"John", "Emma", "Michael", "Sophia", "William", "Olivia", "James", "Ava"};
    const int roll_numbers[] = {1, 2, 3, 4, 5, 6, 7, 8};
    const char *DOB[] = {"12-JAN-2005", "12-FEB-2005", "12-MARCH-2005", "12-APRIL-2005", "12-MAY-2005", "12-JUNE-2005", "12-JULY-2005", "12-AUG-2005"};
    int marks[][6] = {
        {78, 80, 90, 99, 88, 80},
        {75, 85, 96, 98, 70, 90},
        {85, 88, 92, 80, 0, 75},
        {90, 92, 88, 99, 85, 90},
        {70, 75, 68, 72, 65, 70},
        {82, 84, 78, 80, 85, 88},
        {88, 90, 65, 86, 90, 92},
        {92, 95, 40, 92, 64, 96}
    };

    int roll_number;
    printf("Enter student's roll number (1-8): ");
    scanf("%d", &roll_number);

    if (roll_number >= 1 && roll_number <= 8) {
        int student_index = roll_number - 1;

        printf("-------------------------------------------------\n");
        printf("Student name: %s\n", students[student_index]);
        printf("Roll number: %d\n", roll_numbers[student_index]);
        printf("Date of birth: %s\n", DOB[student_index]);
        printf("--------------------------------------------------\n");
        printf(" Subject     Exam 1  Exam 2  Average Grade\n");
        
        printMathsMarks(marks, student_index);
        
        printPhysicsMarks(marks, student_index);
        
        printChemistryMarks(marks, student_index);
    } else {
        printf("Invalid roll number. Please enter a number between 1 and 8.\n");
    }

    return 0;
}

