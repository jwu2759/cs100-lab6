#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorTest, StandardConstruct){
	Rectangle* rect = new Rectangle(3,4);
	ASSERT_EQ(rect->get_w(), 3);
	ASSERT_EQ(rect->get_h(), 4);
}

TEST(ConstructorTest, ZeroConstruct){
	Rectangle* rect = new Rectangle(0,0);
	ASSERT_EQ(rect->get_w(), 0);
	ASSERT_EQ(rect->get_h(), 0);
}

TEST(ConstructorTest, NegIntConstruct){
	Rectangle* rect = new Rectangle(-1,-2);
	ASSERT_EQ(rect->get_w(), -1);
	ASSERT_EQ(rect->get_h(), -2);
}
