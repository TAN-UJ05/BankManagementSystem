# 🏦 Bank Management System

![C++](https://img.shields.io/badge/Language-C++-blue?style=for-the-badge&logo=c%2B%2B)

A **console-based Bank Management System** in C++ to manage bank accounts.  
It allows creating accounts, depositing and withdrawing money, searching accounts, and displaying all account details.  
Demonstrates **object-oriented programming (OOP)** concepts using classes, objects, and vectors.

---

## ✨ Features

| Feature | Description |
|---------|-------------|
| 🆕 Create Account | Add a new account with a unique account number and initial deposit |
| 📄 Display All | View all accounts and their balances |
| 🔍 Search Account | Search accounts by account number |
| 💵 Deposit Money | Deposit money into an account |
| 💸 Withdraw Money | Withdraw money from an account |
| ✅ Validation | Prevents duplicate accounts and invalid transactions |

---

## 🏷️ Classes Overview

### 1️⃣ Account
Represents a bank account.  

- **Attributes:** `accountNumber`, `name`, `balance`  
- **Methods:**  
  - Constructor to initialize account  
  - `display()` to show account details  

### 2️⃣ Bank
Manages multiple accounts.  

- **Attributes:** `accounts` (vector of `Account` objects)  
- **Methods:**  
  - `createAccount()` - Adds a new account  
  - `displayAll()` - Displays all accounts  
  - `depositMoney()` - Deposit money into an account  
  - `withdrawMoney()` - Withdraw money from an account  
  - `searchAccount()` - Search for an account by number  

---

## ⚡ How to Run

1. Install a C++ compiler (like `g++`)  
2. Save your source code as `main.cpp`  
3. Compile the program:  
```bash
g++ main.cpp -o BankSystem
```  
4. Run the program:  
```bash
./BankSystem
```  
5. Follow the interactive menu  

---

## 📊 Sample Menu

```
***** BANK MANAGEMENT SYSTEM *****
1. Create Account
2. Display All Accounts
3. Search Account
4. Deposit Money
5. Withdraw Money
6. Exit
Enter your choice:
```

---

## 💡 Example Usage

**Create Account**
```
Enter Account Number: 101
Enter Name: Alice
Enter Initial Deposit: 500
Output: Account created successfully!
```

**Deposit Money**
```
Enter Account Number: 101
Enter Amount to Deposit: 200
Output: Deposited $200 successfully!
```

**Withdraw Money**
```
Enter Account Number: 101
Enter Amount to Withdraw: 100
Output: Withdrew $100 successfully!
```

**Search Account**
```
Enter Account Number: 101
Output:
Account Number: 101
Name: Alice
Balance: $600
```

---

## 📝 Notes
- Account numbers must be unique  
- Deposits and withdrawals must be positive  
- No persistent storage; all data is lost after closing the program  

---

## 🚀 Future Improvements
- Add file/database storage  
- Implement authentication  
- Include interest calculation and multiple account types  
- Upgrade to a GUI interface  

---

## 📫 Contact

- **GitHub:** [YourGitHubUsername](https://github.com/YourGitHubUsername)  
- **Email:** [youremail@example.com](mailto:youremail@example.com)

---

## ⚖️ License
MIT License  
Made with ❤️ in C++
