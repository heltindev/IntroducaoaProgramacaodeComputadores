#include <stdio.h>
 
int main() {
    double preciseNumber = 3.141592653589793;
    long double veryPreciseNumber = 3.14159265358979323846;
 
    printf("Número preciso (double): %.15f\n", preciseNumber);
    printf("Número muito preciso (long double): %.21Lf\n", veryPreciseNumber);

    unsigned long int largePositiveNumber = 4000000000;
    printf("Número positivo grande: %lu\n", largePositiveNumber);
    

    return 0;
}