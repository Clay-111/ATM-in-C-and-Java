# ATM System in C

This project is a simple ATM system implemented in C. It allows users to create an account, deposit money, withdraw money, and check their account balance through a menu-driven interface.

## Features

- **Account Creation**: Generates a random 9-digit account number and a 4-digit PIN for the user.
- **Deposit**: Allows users to deposit money with a limit of 10,000 BDT per transaction.
- **Withdraw**: Allows users to withdraw money in multiples of 20, ensuring sufficient balance.
- **Balance Check**: Displays the current account balance.
- **Input Validation**: Ensures correct account number and PIN entry with a maximum of 3 retries.

## How It Works

1. **Account Creation**:
   - A random 9-digit account number and 4-digit PIN are generated.
   - The user is prompted to remember these credentials for future transactions.

2. **Menu Options**:
   - **1**: Deposit money into the account.
   - **2**: Withdraw money from the account.
   - **3**: Check the current account balance.
   - **4**: Exit the ATM system.

3. **Validation**:
   - The user must enter the correct account number and PIN to access the system.
   - After 3 incorrect attempts, the program exits.
