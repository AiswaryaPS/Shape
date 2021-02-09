#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
  int  n_x;
  int  n_y;
  int  n_z;

public:
  Triangle(int a,int b,int c);
  double area() ;
  double circumference();
};

#endif
