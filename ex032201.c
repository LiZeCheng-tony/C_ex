/* ex032201.c */
#include <stdio.h>
int main(void) {
    int cocks = 0;
    printf("%8s%8s%8s\n", "cooks", "hens", "chicks");
    while (cocks <= 19) {
        int hens = 0;
        while (hens <= 33) {
            int chicks;
            chicks = 100 - cocks - hens;
            if (5 * cocks + 3 * hens + chicks / 3.0 == 100)
                printf("%8d%8d%8d\n", cocks, hens, chicks);
            hens++;
        }
        cocks++;
    }
    return 0;
}
