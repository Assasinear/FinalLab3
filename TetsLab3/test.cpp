#include "pch.h"
#include "C:\Users\mayor\source\repos\Lab3\Lab3\Header.h"

TEST(Testconvert, Test1) {
  EXPECT_EQ(convert(16, 4), "100");
}
TEST(Testconvert, Test2) {
	EXPECT_EQ(convert(15, 3), "120");
}
TEST(Testconvert, Test3) {
	EXPECT_EQ(convert(5, 2), "101");
}
TEST(TestStrToInt, Test1) {
	EXPECT_EQ(strToInt("120"), 120);
}
TEST(TestStrToInt, Test2) {
	EXPECT_EQ(strToInt("50"), 50);
}
TEST(TestStrToInt, Test3) {
	EXPECT_EQ(strToInt("25"), 25);
}