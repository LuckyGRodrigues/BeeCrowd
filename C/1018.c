#include <stdio.h>
 
int main() {
    int num, i;
    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};
    int cedulasqtd[7] = {0};
    
    scanf("%d", &num);
    printf("%d\n", num);
    
    for (i = 0; i < 7; i++) {
        cedulasqtd[i] = num / cedulas[i];
        num %= cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", cedulasqtd[i], cedulas[i]);
    }
 
    return 0;
}