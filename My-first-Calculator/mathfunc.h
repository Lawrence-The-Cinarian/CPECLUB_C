#ifndef MATHFUNC_H
#define MATHFUNC_H
#include <math.h>

/* add stands for addition
 * sub for subtraction
 * mul for multiplication
 * div for division
 * sqre for power square
 * cube for power cube
 */
 double add(double a, double b) {
 return a+b;
 }
 double sub(double a, double b) {
 return a-b;
 }
 double mul(double a, double b) {
 return a*b;
 }
 double div(double a, double b) {
 return a/b;
 }
 double sqre(double a) {
 return pow(a, 2);
 }
 double cube(double a) {
 return pow(a, 3);
 }

#endif
