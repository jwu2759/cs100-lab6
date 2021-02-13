#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(PerimeterTest, PerimeterPos){
	Rectangle* rect = new Rectangle(2,4);
	EXPECT_EQ(rect->perimeter(), 12);
}

TEST(PerimeterTest, PerimeterZero){
	Rectangle* rect = new Rectangle(0,0);
	EXPECT_EQ(rect->perimeter(), 0);
}

TEST(PerimeterTest, PerimeterNeg){
	Rectangle* rect = new Rectangle(-3, 3);
	EXPECT_EQ(rect->perimeter(), 0);
}
