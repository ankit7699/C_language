#include <stdio.h>

// Global variable declarations
short int sh_int;
unsigned short int ush_int;
unsigned int u_int;
int int_val;
long int l_int;
unsigned long int ul_int;
long long int ll_int;
unsigned long long int ull_int;
signed char s_char;
unsigned char us_char;
float flt;
double dbl;
long double l_dbl;

int main() {
    printf("Default value of short int: %hd\n", sh_int);
    printf("Default value of unsigned short int: %hu\n", ush_int);
    printf("Default value of unsigned int: %u\n", u_int);
    printf("Default value of int: %d\n", int_val);
    printf("Default value of long int: %ld\n", l_int);
    printf("Default value of unsigned long int: %lu\n", ul_int);
    printf("Default value of long long int: %lld\n", ll_int);
    printf("Default value of unsigned long long int: %llu\n", ull_int);
    printf("Default value of signed char: %c\n", s_char);
    printf("Default value of unsigned char: %c\n", us_char);
    printf("Default value of float: %f\n", flt);
    printf("Default value of double: %lf\n", dbl);
    printf("Default value of long double: %Lf\n", l_dbl);
    
    return 0;
}