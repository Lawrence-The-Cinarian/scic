#include <stdio.h>
#include <math.h>
#include "extramath.h"

int main() {

        char opt[6] = {'a', 'b', 'c', 'A', 'B', 'C'};
        float a, b, c, A, B, C;
        int operand, option;
        double answer, question;
              for (;;) {
                  puts("Cinari's Scientific Calculator");
                  puts("Instructions: Enter any of your preferred options");
                  puts("(1) Enter 1 for the Trigonometric Calculations");
                  puts("(2) Enter 2 for the Angle Calculations");
                  printf("Enter your Choice>> ");
                  scanf("%d", &operand);

                            if(operand == 1) {
                            puts("Trigonometric Calculator");
                            puts("(1) Sine");
                            puts("(2) Cosine");
                            puts("(3) Tangent");
                            puts("(4) Sine Inverse");
                            puts("(5) Cosine Inverse");
                            puts("(6) Tangent Inverse");
                            printf("Enter your Choice>> ");
                            scanf("%d", &option);
                            printf("Enter the Number>> ");
                            scanf("%lf", &question);


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
                                              }

                                              printf("Answer>> %.3f\n", answer);
                            }

                            else if(operand == 2) {
                            puts("Angled Calculator");
                            puts("For Sine Rule ");
                            puts(" (1) Find side b, when Angle A, Angle B, Angle C and side a and c are given");
                            puts(" (2) Find side a, when Angle A, Angle B  Angle C and side b and c are given");
                            puts(" (3) Find side c, when Angle A, Angle B  Angle C and side a and b are given");
                            printf("Enter choice>> ");
                            scanf("%d", &option);

                                              switch(option) {
                                              case 1:
                                              printf("Enter Angle B>> ");
                                              scanf("%f", &B);
                                              puts("You are to choose one angle for the calculation,");
                                              puts("Please you're strictly advised to follow the Sine Rules when Choosing the Angle");
                                              puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                                              puts("e.g; if Angle A given to you type A, if Angle C is given type C");
                                              printf("Enter>> ");
                                              scanf(" %c", opt);

                                              if(opt[0] == 'A') {
                                              printf("Enter Angle A>> ");
                                              scanf("%f", &A);

                                              }
                                              else if(opt[0] == 'C') {
                                              printf("Enter Angle C>> ");
                                              scanf("%f", &C);
                                              }
                                              puts("Enter The side you wish to if they are available to you");
                                              puts("e.g; if side a given to you type a, if side c is given type c");
                                              printf("Enter>> ");
                                              scanf(" %c", opt);
                                                    if(opt[0] == 'a') {
                                                    printf("Enter side a>> ");
                                                    scanf("%f", &a);
                                                    }
                                                    else if(opt [0] == 'c') {
                                                    printf("Enter side c>> ");
                                                    scanf("%f", &c);
                                                    }
                                                    else {
                                                    break;
                                                    return option;
                                                    }
                                                    answer = sine_to_find_side(a, A, B);
                                                    break;

                                              case 2:
                                              printf("Enter Angle A>> ");
                                              scanf("%f", &A);
                                              puts("You are to choose one angle for the calculation,");
                                              puts("Please you're strictly advised to follow the Sine Rules when Choosing the Angle");
                                              puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                                              puts("e.g; if Angle B given to you type B, if Angle C is given type C");
                                              printf("Enter>> ");
                                              scanf(" %c", opt);
                                              if(opt[0] == 'B') {
                                              printf("Enter Angle A>> ");
                                              scanf("%f", &B);
                                              }
                                              else if(opt[0] == 'C') {
                                              printf("Enter Angle C>> ");
                                              scanf("%f", &C);
                                              }
                                              puts("Enter The side you wish to if they are available to you");
                                              puts("e.g; if side b given to you type b, if side c is given type c");
                                              printf("Enter>> ");
                                              scanf(" %c", opt);
                                                    if(opt[0] == 'b') {
                                                    printf("Enter side a>> ");
                                                    scanf("%f", &a);
                                                    }
                                                    else if(opt [0] == 'c') {
                                                    printf("Enter side c>> ");
                                                    scanf("%f", &c);
                                                    }
                                                    else {
                                                    break;
                                                    return option;
                                                    }
                                                    answer = sine_to_find_side(a, A, B);
                                                    break;

                                                  case 3:
                                                  printf("Enter Angle C>> ");
                                                  scanf("%f", &C);
                                                  puts("You are to choose two angles for the calculation,");
                                                  puts("Please you're strictly advised to follow the Sine Rules when Choosing Angles");
                                                  puts("You are to make the Angles match well with the sides for Better Computation and Answer");
                                                  puts("e.g; if Angle A given to you type A, if Angle B is given type B");
                                                  printf("Enter>> ");
                                                  scanf(" %c", opt);
                                                  if(opt[0] == 'A') {
                                                  printf("Enter Angle A>> ");
                                                  scanf("%f", &A);
                                                  }
                                                  else if(opt[0] == 'B') {
                                                  printf("Enter Angle C>> ");
                                                  scanf("%f", &B);
                                                  }
                                                  puts("Enter The side you wish to if they are available to you");
                                                  puts("e.g; if side a given to you type a, if side b is given type b");
                                                  printf("Enter>> ");
                                                  scanf(" %c", opt);
                                                        if(opt[0] == 'a') {
                                                        printf("Enter side a>> ");
                                                        scanf("%f", &a);
                                                        }
                                                        else if(opt [0] == 'b') {
                                                        printf("Enter side c>> ");
                                                        scanf("%f", &c);
                                                        }
                                                        else {
                                                        break;
                                                        return option;
                                                        }
                                                        answer = sine_to_find_side(a, A, B);
                                                        break;
                                              }
                                              for(int i = 0; i = opt[6]; i++) {
                                              printf("Answer of side %c >> %.3f\n", opt[i], answer);
                                        }

                             }

                            else puts("Invalid Input");
            }

return 0;
}
