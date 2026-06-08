#include "Account.h"
#include "Transaction.h"

#include <gtest/gtest.h>
#include <stdexcept>

TEST(Banking, AccountAndTransaction)
{
  Account account{1, 100};
  EXPECT_EQ(account.id(), 1);
  EXPECT_EQ(account.GetBalance(), 100);

  EXPECT_THROW(account.ChangeBalance(10), std::runtime_error);

  account.Lock();
  account.ChangeBalance(50);
  account.Unlock();
  EXPECT_EQ(account.GetBalance(), 150);

  Account from{2, 500};
  Account to{3, 100};
  Transaction transaction;
  EXPECT_TRUE(transaction.Make(from, to, 100));
}
