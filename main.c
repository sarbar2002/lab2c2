// Author: Sarthak Singh sxs6666@psu.edu
// Collaborator: Nicholas Cole nyc5096@psu.edu
// Collaborator: Bryce Awono bna5160@psu.edu
// Section: 12R
// Breakout: 8
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>


int main(void) {
  char * grade = readline("Enter your CMPSC 131 grade: ");
  double gradeInt = atof(grade);

  if (gradeInt>= 93) {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (gradeInt>= 90) {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (gradeInt>= 87) {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (gradeInt>= 83) {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (gradeInt>= 80) {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (gradeInt>= 77) {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (gradeInt>= 70) {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (gradeInt>= 60) {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else if (gradeInt< 60) {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
  }
