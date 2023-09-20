#include <stdio.h>
#include <string.h>
void main()
{ char Name[40], G[5], answer[10];
  int i;
  do
  {
    printf("What is your Name? "); //Nan
    scanf("%s", Name);
    do
    {
      printf("What is your blood group [A, B, AB, or O]? ");
      scanf("%s", G);

      if (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 )
<<<<<<< HEAD
        printf("Cat group %s is incorrect! Please try again.\n", G);
=======
        printf("Blood type %s is incorrect! Please try again.\n", G);
>>>>>>> 1ca1f8fdc5e7ea51a7beb36fb588569dfc5b4120
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "AB") == 0)
    {
<<<<<<< HEAD
      printf("%s, AB. Oh my Goddess, you can give blood only to: AB.\n", Name);
=======
      printf("%s, AB. Oh my Gosh, you can give blood only to: AB.\n", Name);
>>>>>>> 1ca1f8fdc5e7ea51a7beb36fb588569dfc5b4120
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
