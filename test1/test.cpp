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
	EXPECT_EQ(strToInt("110", 2), 6);
}
TEST(TestStrToInt, Test2) {
	EXPECT_EQ(strToInt("222", 3), 26);
}
TEST(TestStrToInt, Test3) {
	EXPECT_EQ(strToInt("444", 8), 292);
}
TEST(TestSplit, Test1) {
	EXPECT_EQ(split("HiWNice", 'W'), std::vector<std::string>({"Hi", "Nice"}));
}
TEST(TestSplit, Test2) {
	EXPECT_EQ(split("a b c", ' '), std::vector<std::string>({"a", "b", "c"}));
}
TEST(TestSplit, Test3) {
	EXPECT_EQ(split("ArZBrZCr", 'Z'), std::vector<std::string>({ "Ar", "Br", "Cr" }));
}
TEST(TestBubble, Test1) {
	EXPECT_EQ(bubble(std::vector<int>({ 3, 1, 2, 0 })), std::vector<int>({ 0, 1, 2, 3 }));
}
TEST(TestBubble, Test2) {
	EXPECT_EQ(bubble(std::vector<int>({ 5, 9, 1, 4, 3 })), std::vector<int>({ 1, 3, 4, 5, 9 }));
}
TEST(TestBubble, Test3) {
	EXPECT_EQ(bubble(std::vector<int>({ 29, 10, 15, 2 })), std::vector<int>({ 2, 10, 15, 29 }));
}