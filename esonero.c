#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char M[128], K[128];
  char C[128];
  char c;
  int choice;
  time_t t;

  printf("Insert your string, using no more than 128 characters: ");
  fgets(M, 128, stdin);
  printf("This is your initial string: %s\n", M);
  printf("Press 1 to write manually your key.\nPress 2 to get randomically a key. \n");
  scanf("%d", &choice);
  while ((c = getchar()) != '\n' && c != EOF);

 if (choice == 1) {
 do  {
printf("Choose a key that is not shorter than the initial string: ");
   fgets(K, 128, stdin);
   if (strlen(K) < strlen(M)) {
   printf("Choose another key.\n");
 }
} while(strlen(K) < strlen(M));
 printf("This is your key: %s", K);
 for (int i = 0; i < strlen(M); i++) {
    C[i] = M[i]^K[i];
  }
           printf("This is your cripted string: ");
           for (int i = 0; i < strlen(M); i++) {
             printf("%x", C[i]);
           }
for (int i = 0; i < strlen(C); i++){
M[i] = C[i]^K[i];
}
          printf("\nThis was your initial string: %s\n", M);
}

if (choice == 2) {
  srand((unsigned)time(&t));
  for (int i = 0; i < strlen(M); i++) {
  K[i] = 32 + rand()%96;
}
  printf("This is your randomically assigned key: ");
     printf("%s\n", K);

  for (int i = 0; i < strlen(M); i++) {
     C[i] = M[i]^K[i];
   }
            printf("This is your cripted string: ");
            for (int i = 0; i < strlen(M); i++) {
              printf("%x", C[i]);
            }
 for (int i = 0; i < strlen(C); i++){
 M[i] = C[i]^K[i];
 }
           printf("\nThis was your initial string: %s\n", M);
 } }
