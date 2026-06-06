#include "Account.h"
#include "Transaction.h"

#include <cassert>
#include <stdexcept>

int main() {
  Account account{1, 100};
  assert(account.id() == 1);
  assert(account.GetBalance() == 100);

  bool unlocked_error = false;
  try {
    account.ChangeBalance(10);
  } catch (const std::runtime_error&) {
    unlocked_error = true;
  }
  assert(unlocked_error);

  account.Lock();
  account.ChangeBalance(50);
  account.Unlock();
  assert(account.GetBalance() == 150);

  Account from{2, 500};
  Account to{3, 100};
  Transaction transaction;
  bool result = transaction.Make(from, to, 100);
  assert(result);

  return 0;
}
