#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "polygon.h"

class Rectangle : public Polygon {
  int  a_length;
  int  b_breadth;

public:
  Rectangle(int x ,int y);
  double area();
  double circumference();
};

#endif

