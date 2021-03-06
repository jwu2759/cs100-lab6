#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(AreaTest, AreaStandard){
	Rectangle* rect = new Rectangle(3,4);
	EXPECT_EQ(rect->area(),12);
	delete rect;
}

TEST(AreaTest, AreaZero){
	Rectangle* rect = new Rectangle(0,0);
	EXPECT_EQ(rect->area(),0);
	delete rect;
}

TEST(AreaTest, AreaNeg){
	Rectangle* rect = new Rectangle(-2,3);
	EXPECT_EQ(rect->area(),6);
	delete rect;
}
