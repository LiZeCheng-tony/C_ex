/* ex021201.c */
#include <stdio.h>
int main(void) {
    double ar, por, perc;
    printf("%-12s%12s%12s%12s\n", "State", "Area", "Forest", "Percent");
    printf("------------------------------------------------\n");
    ar = 50750;
    por = 33945;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "Alabama", ar, por, perc);
    ar = 591000;
    por = 201642;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "Alaska", ar, por, perc);
    ar = 114000;
    por = 30287;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "Arizona", ar, por, perc);
    ar = 53187;
    por = 26542;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "Arkansas", ar, por, perc);
    ar = 158706;
    por = 61532;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "California", ar, por, perc);
    ar = 104000;
    por = 33340;
    perc = por / ar * 100;
    printf("%-12s%12.0f%12.0f%10.2f%\n", "Colorado", ar, por, perc);
    printf("......\n");
    return 0;
}
