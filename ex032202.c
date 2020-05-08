/* ex032202.c */
#include <stdio.h>
int main(void) {
    int cocks;
    printf("%8s%8s%8s\n", "cocks", "hens", "chicks");
    for (cocks = 0; cocks <= 19; cocks++) {
        int hens;
        for (hens = 0; hens <= 33; hens++) {
            int chicks;
            chicks = 100 - cocks - hens;
            if (5 * cocks + 3 * hens + chicks / 3.0 == 100)
                printf("%8d%8d%8d\n", cocks, hens, chicks);
        }
    }
    return 0;
}
