//
// Created by devops on 23. 4. 14.
//

#include "stdio.h"
#include "math.h"

void areaPeri(double radius ,double length ,double breadth ,double *cirArea,
              double *cirPeri, double *recArea ,double *recPeri );

int main(){
    double cirArea, cirPeri, recArea, recPeri;

    areaPeri(1, 1, 1, &cirArea, &cirPeri, &recArea, &recPeri);

    printf("circle area = %f", cirArea);
    return 0;
}

void areaPeri(double radius ,double length ,double breadth ,double *cirArea,
              double *cirPeri, double *recArea ,double *recPeri ) {
    //calculate the area and perimeter (circumference) of the circle
    //store the output in the location pointed to by cirArea and cirPeri

//    double circle_aread = M_PI * radius * radius;
//    printf("Circle Area = %f", circle_aread);
//    cirArea = &circle_aread;
//
//    double circle_perimeter = M_PI * radius;
//    cirPeri = &circle_perimeter;
//
//    double  rect_area = length * breadth;
//    recArea = &rect_area;
//
//    double rect_periment = length * 2 + breadth * 2;
//    recPeri = & rect_periment;

    const double PI = 3.14;
    *cirArea = PI * radius * radius ;
    *cirPeri = 2 * PI * radius ;
    *recArea = length * breadth ;
    *recPeri = 2 * ( length + breadth ) ;
}