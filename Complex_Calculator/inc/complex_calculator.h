#ifndef __COMPLEX_CALCULATOR_H__
#define __COMPLEX_CALCULATOR_H__

typedef enum error_complex{
    SUCCESS=1,
    ERROR_NULL_PTR=-1,
    ERROR_DIV_ZERO=-2,
}error;

typedef struct complex_calc{
    float real,imag;
}complex;

error complex_sum(complex *c1,complex *c2,complex *result);
error complex_dif(complex *c1,complex*c2,complex *result);
error complex_mul(complex *c1,complex *c2,complex *result);
error complex_div(complex *c1,complex *c2,complex *result);

#endif