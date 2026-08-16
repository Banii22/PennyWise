#include <iostream>
#include <vector>
#include <string>

using namespace std;


// This class represents ONE expense.
class Expense
{
public:

    int id;
    string name;
    string category;
    double amount;
    
    // This creates an expense and stores its information.
    Expense(int i, string n, string c, double a)
    {
        id = i;
        name = n;
        category = c;
        amount = a;
    }
};



