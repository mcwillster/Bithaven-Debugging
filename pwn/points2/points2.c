#include <stdio.h>
//gcc points2.c -o points2 -std=c99 -fno-stack-protector -z execstack -no-pie -fno-pie

void print_flag(){
  printf("Yay, you win! Wait a minute, how did you get in here????\n");
  printf("Anyways, here is your flag: \n");
  FILE *file = fopen("flag.txt", "r");
  int c;
  while ((c = fgetc(file)) != EOF) {
    putchar(c);
  }
  fclose(file);
}

void display(){
  char name[32];

  printf("Welcome to BitHaven Rewards Points V2!\n");
  printf("This program now uses fgets() instead of gets() so it is now 100 percent secure!! No more shenanigans!\n");
  printf("Please enter your name to check points balance:\n");
  fgets(name, 0x32, stdin);
  printf("Sorry you do not have enough points :( \n");

}

int main(){
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stdin, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);

  display();
  return 0;
}
