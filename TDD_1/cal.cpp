class Account
{
public:
	explicit Account(int balance)
		: balance(balance)
	{
	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void withdraw(int i)
	{
		balance -= i;
	}

private:
	int balance;
};