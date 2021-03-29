#include <stdio.h>
#include "complex_calculator.h"

error complex_sum(complex *c1,complex *c2,complex *result){
    if(NULL == c1 || NULL == c2){
        return ERROR_NULL_PTR;
    }
    result->real=c1->real+c2->real;
    result->imag=c1->imag+c2->imag;
    return SUCCESS;
}

error complex_dif(complex *c1,complex *c2,complex *result){
    if(NULL == c1 || NULL == c2){
        return ERROR_NULL_PTR;
    }
    result->real=c1->real-c2->real;
    result->imag=c1->imag-c2->imag;
    return SUCCESS;
}

error complex_mul(complex *c1,complex *c2,complex *result){
    if(NULL == c1 || NULL == c2){
        return ERROR_NULL_PTR;
    }
    result->real=(c1->real*c2->real)-(c1->imag*c2->imag);
    result->imag=(c1->real+c2->imag)+(c2->real*c1->imag);
    return SUCCESS;
}

error complex_div(complex *c1,complex *c2,complex *result){
    if(NULL == c1 || NULL == c2){
        return ERROR_NULL_PTR;
    }
    if(c2->real == 0 && c2->imag == 0){
        return ERROR_DIV_ZERO;
    }
    float den=(c2->real*c2->real)+(c2->imag*c2->imag);
    result->real=((c1->real*c2->real)+(c1->imag*c2->imag))/den;
    result->imag=((c1->imag*c2->real)-(c2->imag*c1->real))/den;
    return SUCCESS;
}