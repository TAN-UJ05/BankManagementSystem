# Ba# Bank Management System in C++

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)](https://isocpp.org/)

A simple **Bank Management System** implemented in C++ that allows users to create accounts, deposit and withdraw money, search accounts, and display all accounts via a console-based interface.

---

## Table of Contents

- [Features](#features)
- [Technologies Used](#technologies-used)
- [Code Structure](#code-structure)
- [How to Run](#how-to-run)
- [Usage Example](#usage-example)
- [Screenshots](#screenshots)
- [Contributing](#contributing)
- [License](#license)
- [Author](#author)

---

## Features

- Create a new bank account with:
  - Account Number
  - Account Holder Name
  - Initial Deposit
- Deposit money into an account
- Withdraw money from an account
- Search for an account by account number
- Display details of all accounts
- Input validation for amounts and duplicate accounts

---

## Technologies Used

- **C++**: Core programming language
- **STL (Standard Template Library)**: `vector` used to manage accounts
- **I/O Streams**: For console input/output

---

## Code Structure

- **`Account` class**:
  - Stores account information: account number, name, balance
  - Method: `display()` – shows account details

- **`Bank` class**:
  - Manages multiple accounts using a `vector<Account>`
  - Methods:
    - `createAccount()`
    - `displayAll()`
    - `depositMoney()`
    - `withdrawMoney()`
    - `searchAccount()`

- **`main()` function**:
  - Menu-driven interface for user interaction
  - Uses `do-while` loop and `switch` statements

---

## How to Run

1. Clone the repository:

```bash
git clone <repository_url>
