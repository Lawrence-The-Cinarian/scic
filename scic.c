#include <stdio.h>
#include <math.h>
#include "extramath.h"

int main() {

        int operand;
        int option;
        double answer;
        double question;

              for (;;) {
                  puts("Cinari's Scientific Calculator");
                  puts("Instructions: Enter any of your preferred options");
                  puts("(1) Enter 1 for the trigonometric Calculations");
                  puts("(2) Enter 2 for Right Angled Calculations");
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
                            printf("Enter the the Number in Degrees>> ");
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

                                              printf("Answer = %.6f\n", answer);
                            }

                            else if(operand == 2) {
                            puts("Right Angled Calculator");
                            puts("");
                            puts("");
                            puts("");
                            puts("");
                            
                            }

                            else puts("Invalid Input");
            }
            
return 0;
}
