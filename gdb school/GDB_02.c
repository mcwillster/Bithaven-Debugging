#include<stdio.h>
int main(int argc, char ** argv, char ** envp) {
    int i;
    int var_1;
    var_1 = 0x1e0da;
    for (i = 0; i < 0x25f; i++) {
        var_1 += i;
    }
    printf("%d", var_1);
}
