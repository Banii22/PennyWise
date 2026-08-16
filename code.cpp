#include <iostream>
#include <string>

using namespace std;


// This class represents one expense.
class Expense
{
public:
    int id;
    string name;
    string category;
    double amount;
};

// This class manages all expenses.
class ExpenseTracker
{
public:
    Expense expenses[100];    // Array to store up to 100 expenses.
    int count = 0;  // Keeps track of how many expenses are stored.
    int nextId = 1; // Used to give each expense a unique ID.

// Function to add a new expense.
    void addExpense()
    {
        if (count >= 100)
        {
            cout << "Expense limit reached!\n";
            return;
        }

        cout << "\nEnter expense name: ";
        cin >> expenses[count].name;

        cout << "Enter category: ";
        cin >> expenses[count].category;

        cout << "Enter amount: ";
        cin >> expenses[count].amount;