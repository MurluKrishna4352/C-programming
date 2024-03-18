#include <stdio.h>
#define PI 3.141
int main(){
    float radius, area;
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("The area of radius %f is: %f", radius, area);
}