#include "determinant.h"

float divide(float a, float b) {
return a/b;
}
float solve(float a1, float b1, float c1, float a2, float b2, float c2) {
return (a1*b2)-(a2*b1);
}
float solve2(float a1, float b1, float c1, float a2, float b2, float c2) {
return (c1*b2)-(c2*b1);
}
float solve3(float a1, float b1, float c1, float a2, float b2, float c2) {
return (a1*c2)-(a2*c1);
}
