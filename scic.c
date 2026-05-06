#include <stdio.h>
#include <math.h>
#include "extramath.h"

int main() {

  char opt[6] = {'a', 'b', 'c', 'A', 'B', 'C'};
  double a, b, c, A, B, C;
  double answer, question;
  int operand, option;

    for (;;) {
        puts("Cinari's Scientific Calculator");
        puts("");
        puts("Instructions: Enter any of your preferred options");
        puts("(1) Enter 1 for the Trigonometric Calculations");
        puts("(2) Enter 2 for the Angle Calculations");
        puts("(0) Enter for Exit");
        printf("Enter your Choice>> ");
        scanf("%d", &operand);
        puts("");
              if(operand == 0) {
              return 0;
              }
              
              else if(operand == 1) {
              puts("Trigonometric Calculator");
              puts("");
              puts("(1) Sine");
              puts("(2) Cosine");
              puts("(3) Tangent");
              puts("(4) Sine Inverse");
              puts("(5) Cosine Inverse");
              puts("(6) Tangent Inverse");
              puts("");
              printf("Enter your Choice>> ");
              scanf("%d", &option);
              puts("");
              printf("Enter the Number>> ");
              scanf("%lf", &question);
              puts("");

                  switch(option) {
                  case 1:
                  answer = disin(question);
                  break;

                  case 2:
                  answer = dicos(question);
                  break;

                  case 3:
                  answer = ditan(question);
                  break;

                  case 4:
                  answer = dinvs(question);
                  break;

                  case 5:
                  answer = dinvc(question);
                  break;

                  case 6:
                  answer = dinvt(question);
                  break;

                  default:
                  puts("Invalid Input");
                  puts("");
                  }

                  printf("Answer>> %.3f\n", answer);
                  puts("");
                  }

                      else if(operand == 2) {
                      puts("Angled Calculator");
                      puts("For Sine Rule ");
                      puts(" (1) Find side b, when Angle A, Angle B, Angle C and side a and c are given");
                      puts(" (2) Find side a, when Angle A, Angle B  Angle C and side b and c are given");
                      puts(" (3) Find side c, when Angle A, Angle B  Angle C and side a and b are given");
                      puts(" (0) Enter for Exit");
                      printf("Enter choice>> ");
                      scanf("%d", &option);
                      puts("");

                          switch(option) {
                          case 0:
                          return 0;
                          break;
                          
                          case 1:
                          printf("Enter Angle B>> ");
                          scanf("%lf", &B);
                          puts("");
                          puts("You are to choose one angle for the calculation,");
                          puts("Please you're strictly advised to follow the Sine Rules when Choosing the Angle");
                          puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                          puts("");
                          puts("e.g; if Angle A is given to you type A, if Angle C is given type C");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                          if(opt[0] == 'A') {
                          printf("Enter Angle A>> ");
                          scanf("%lf", &A);
                          puts("");
                          }
                          else if(opt[0] == 'C') {
                          printf("Enter Angle C>> ");
                          scanf("%lf", &C);
                          puts("");
                          }
                          puts("Enter The side you wish to, if they are available to you");
                          puts("e.g; if side a is given to you type a, if side c is given type c");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                                if(opt[0] == 'a') {
                                printf("Enter side a>> ");
                                scanf("%lf", &a);
                                puts("");
                                }
                                else if(opt [0] == 'c') {
                                printf("Enter side c>> ");
                                scanf("%lf", &c);
                                puts("");
                                }
                                else {
                                break;
                                }
                                answer = sine_to_find_side(a, A, B);  /* a serves as variable for side a and side c; A = it also serves as variable for Angle A and Angle C; Angle B is need to find side c so its seen as b constant*/
                                 printf("Answer of side b >> %.3f\n", answer);
                                break;

                          case 2:
                          printf("Enter Angle A>> ");
                          scanf("%lf", &A);
                          puts("");
                          puts("You are to choose one angle for the calculation,");
                          puts("Please you're strictly advised to follow the Sine Rules when Choosing the Angle");
                          puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                          puts("");
                          puts("e.g; if Angle B is given to you type B, if Angle C is given type C");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                          if(opt[0] == 'B') {
                          printf("Enter Angle B>> ");
                          scanf("%lf", &B);
                          puts("");
                          }
                          else if(opt[0] == 'C') {
                          printf("Enter Angle C>> ");
                          scanf("%lf", &C);
                          puts("");
                          }
                          puts("Enter The side you wish to, if they are available to you");
                          puts("");
                          puts("e.g; if side b is given to you type b, if side c is given type c");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                                if(opt[0] == 'b') {
                                printf("Enter side b>> ");
                                scanf("%lf", &b);
                                puts("");
                                }
                                else if(opt [0] == 'c') {
                                printf("Enter side c>> ");
                                scanf("%lf", &c);
                                puts("");
                                }
                                else {
                                break;
                                }
                                answer = sine_to_find_side(b, B, A); /*b serves as side b and side c; B also serves as Angle B and Angle C; Angle A is need to find side a so its seen as a constant*/
                                printf("Answer of side a >> %.3f\n", answer);
                                break;

                          case 3:
                          printf("Enter Angle C>> ");
                          scanf("%lf", &C);
                          puts("");
                          puts("You are to choose two angles for the calculation,");
                          puts("Please you're strictly advised to follow the Sine Rules when Choosing Angles");
                          puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                          puts("");
                          puts("e.g; if Angle A is given to you type A, if Angle B is given type B");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                          if(opt[0] == 'A') {
                          printf("Enter Angle A>> ");
                          scanf("%lf", &A);
                          puts("");
                          }
                          else if(opt[0] == 'B') {
                          printf("Enter Angle B>> ");
                          scanf("%lf", &B);
                          puts("");
                          }
                          puts("Enter The side you wish to, if they are available to you");
                          puts("e.g; if side a is given to you type a, if side b is given type b");
                          printf("Enter>> ");
                          scanf(" %c", opt);
                          puts("");
                                if(opt[0] == 'a') {
                                printf("Enter side a>> ");
                                scanf("%lf", &a);
                                puts("");
                                }
                                else if(opt [0] == 'b') {
                                printf("Enter side b>> ");
                                scanf("%lf", &b);
                                puts("");
                                }

                                else {
                                break;
                                }
                                answer = sine_to_find_side(a, A, C); /*a serves as side a and side b; A also serves as Angle A and Angle B; Angle C is need to find side c so its seen as a constant*/
                                printf("Answer of side c >> %.3f\n", answer);
                                break;
                          }

             }

            else puts("Invalid Input");
      }

return 0;
}
