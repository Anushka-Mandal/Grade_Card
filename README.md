This is a simple command-line application for managing student grade. 
It allows you to input student roll numbers then view the student information such as name, roll number , date of birth , marks obtaines each subject along with calculated grades.

To run this program, you need to have a C compiler installed on your system.
cd student-information-system
Compile the source files using the provided Makefile:
make

Directory Structure
main.c: Contains the main function and user interface logic.
subject.c: Implements functions for printing subject-wise marks.
grades.c: Implements the function for calculating grades.
header.h: Header file containing function prototypes and macros.
subjects.h: Header file containing function prototypes for subject-related functions.
Makefile: Makefile for compiling the project.
