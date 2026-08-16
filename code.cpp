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
        if (expenses[count].amount <= 0)
        {
            cout << "Amount must be greater than 0.\n";
            return;
        }

        expenses[count].id = nextId;// Give the expense an ID.
        nextId++; // Increase ID for the next expense.
        count++;   // Increase the number of stored expenses.
        cout << "Expense added successfully!\n";
    }

    // Function to display all expenses.
    void viewExpenses()
    {
        if (count == 0)
        {
            cout << "\nNo expenses found.\n";
            return;
        }

        cout << "\n========== ALL EXPENSES ==========\n";

        for (int i = 0; i < count; i++)
        {
            cout << "\nID: " << expenses[i].id;
            cout << "\nName: " << expenses[i].name;
            cout << "\nCategory: " << expenses[i].category;
            cout << "\nAmount: Rs. " << expenses[i].amount;
            cout << "\n-----------------------------\n";
        }
    }

    // Function to delete an expense.
    void deleteExpense()
    {
        int id;

        cout << "\nEnter the ID of the expense you want to delete: ";
        cin >> id;

        for (int i = 0; i < count; i++)
        {
            if (expenses[i].id == id)
            {
                // Move all expenses after this one, one position back.
                for (int j = i; j < count - 1; j++)
                {
                    expenses[j] = expenses[j + 1];
                }
              
                count--;   // Reduce the number of expenses.
                cout << "Expense deleted successfully!\n";
                return;
            }
        }

        cout << "Expense not found.\n";
    }
    

