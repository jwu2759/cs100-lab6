#include "constructor_test.cpp"
#include "area_test.cpp"
#include "perimeter_test.cpp"
#include "gtest/gtest.h"


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
