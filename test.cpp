#include "pch.h"



#include "ApprovalTests.h"
TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
  Approvals::verify("Hello");
}