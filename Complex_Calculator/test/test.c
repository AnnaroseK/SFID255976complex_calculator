#include "complex_calculator.h"
#include "unity.h"

static complex c1 = {0, 0};
static complex c2 = {0, 0};
static complex result = {0, 0};

void setup(){}
void tearDown(){}

void test_sum(void){
    c1=NULL;
    c2=NULL;
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=0;
    c1.imag=0;
    c2.real=0;
    c2.imag=0;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=10;
    c1.imag=50;
    c2.real=20;
    c2.imag=30;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(30,result->real);
    TEST_ASSERT_EQUAL(80,result->imag);
    
    c1.real=-10;
    c1.imag=-50;
    c2.real=20;
    c2.imag=30;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(10,result->real);
    TEST_ASSERT_EQUAL(-20,result->imag);

    c1.real=-10;
    c1.imag=-50;
    c2.real=-20;
    c2.imag=-30;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(-30,result->real);
    TEST_ASSERT_EQUAL(-80,result->imag);
}

void test_dif(void){
    c1=NULL;
    c2=NULL;
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,complex_dif(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=0;
    c1.imag=0;
    c2.real=0;
    c2.imag=0;
    TEST_ASSERT_EQUAL(SUCCESS,complex_dif(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=30;
    c2.imag=40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_dif(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(-20,result->real);
    TEST_ASSERT_EQUAL(-20,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=-30;
    c2.imag=-40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_dif(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(40,result->real);
    TEST_ASSERT_EQUAL(60,result->imag);
}

void test_mul(void){
    c1=NULL;
    c2=NULL;
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,complex_mul(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=0;
    c1.imag=0;
    c2.real=0;
    c2.imag=0;
    TEST_ASSERT_EQUAL(SUCCESS,complex_mul(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=30;
    c2.imag=40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_mul(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(-500,result->real);
    TEST_ASSERT_EQUAL(1000,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=-30;
    c2.imag=-40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_mul(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(500,result->real);
    TEST_ASSERT_EQUAL(-1000,result->imag);    
}

void test_div(void){
    c1=NULL;
    c2=NULL;
    TEST_ASSERT_EQUAL(ERROR_NULL_PTR,complex_mul(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=0;
    c1.imag=0;
    c2.real=0;
    c2.imag=0;
    TEST_ASSERT_EQUAL(ERROR_DIV_ZERO,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result->real);
    TEST_ASSERT_EQUAL(0,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=30;
    c2.imag=40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(110,result->real);
    TEST_ASSERT_EQUAL(200,result->imag);

    c1.real=10;
    c1.imag=20;
    c2.real=-30;
    c2.imag=-40;
    TEST_ASSERT_EQUAL(SUCCESS,complex_sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(-1100,result->real);
    TEST_ASSERT_EQUAL(-200,result->imag);
}