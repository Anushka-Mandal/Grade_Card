#include <stdio.h>
#include "header.h"

void printMathsMarks(int marks[][6], int student_index) {
    printf("  Maths       %d      %d      %.2f   %c\n", marks[student_index][0], marks[student_index][1], (marks[student_index][0] + marks[student_index][1]) / 2.0, calculateGrade((marks[student_index][0] + marks[student_index][1]) / 2.0));
}

void printPhysicsMarks(int marks[][6], int student_index) {
    printf("  Physics     %d      %d      %.2f   %c\n", marks[student_index][2], marks[student_index][3], (marks[student_index][2] + marks[student_index][3]) / 2.0, calculateGrade((marks[student_index][2] + marks[student_index][3]) / 2.0));
}

void printChemistryMarks(int marks[][6], int student_index) {
    printf("  Chem   %d      %d      %.2f   %c\n", marks[student_index][4], marks[student_index][5], (marks[student_index][4] + marks[student_index][5]) / 2.0, calculateGrade((marks[student_index][4] + marks[student_index][5]) / 2.0));
}




