#include <stdio.h>

//gcc points.c -o points -std=c99 -fno-stack-protector -z execstack

void print_flag() {
    FILE *file = fopen("flag.txt", "r");
    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(c);
    }
    fclose(file);
}

int main(){
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  int points = 0; // 4 bytes
  char name[8];  // 8 bytes

  printf("Welcome to BitHaven rewards points!\n");
  printf("If you have %d points you win a prize!\n", 0x1337d00d);
  printf("Please enter your name to check rewards balance:\n");

  gets(name);

  if (points == 0x1337d00d){
    printf("Congratulations, you have enough points! Here is your prize:\n");
    print_flag();
  }

  else {
    printf("You do not have enough points :(\n");
    unsigned char *bytes = (unsigned char *)&points;
    printf("Points: %d\n", points);
    printf("%08x\n", points);
  }
 
}
