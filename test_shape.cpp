#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"rectangle.h"
#include"triangle.h"
#include<gtest/gtest.h>
namespace{
TEST(Circle,Area)
{
    Circle C(50);
    EXPECT_EQ(7850,C.area());
    EXPECT_EQ(314,C.circumference());
}
TEST(Triangle,Area)
{
    Triangle T(3,4,5);
    EXPECT_EQ(6,T.area());
    EXPECT_EQ(12,T.circumference());
}
TEST(Rectangle,Area)
{
    Rectangle R(6,5);
    EXPECT_EQ(30,R.area());
    EXPECT_EQ(22,R.circumference());
}
}