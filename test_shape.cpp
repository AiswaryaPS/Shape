#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>
namespace{
TEST(Circle,Area)
{
    Circle C(40);
    EXPECT_EQ(5024,C.area());
    EXPECT_EQ(251.2,C.circumference());
}
TEST(Triangle,Area)
{
    Triangle T(2,6,5);
    EXPECT_EQ(30,T.area());
    EXPECT_EQ(13,T.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle R(4,9);
    EXPECT_EQ(36,R.area());
    EXPECT_EQ(26,R.circumference());
}
}
