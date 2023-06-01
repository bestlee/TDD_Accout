#include "pch.h"
#include <vector>
#include "../TDD_1/cal.cpp"

using namespace std;
TEST(TestCaseName, CreateAccountInit10000won)
{
	Account account(10000);
	int ret = account.getBalance();
	EXPECT_EQ(10000, ret);
}
TEST(TestCaseName, Deposit)
{
	Account account(10000);
	account.deposit(500);
	int ret = account.getBalance();
	EXPECT_EQ(10500, ret);
}

TEST(TestCaseName, Withdraw)
{
	Account account(10000);
	account.withdraw(600);
	int ret = account.getBalance();
	EXPECT_EQ(9400, ret);
}