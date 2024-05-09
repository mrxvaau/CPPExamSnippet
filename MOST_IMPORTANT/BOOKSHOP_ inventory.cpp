//Name: MRXVAU
//ID : 24-56434-1
//SERIAL : 28

/*n C++, design and implement a software program for a Bookstore Inventory Management System, aimed at assisting a mid-sized bookstore in efficiently managing 
its book stocks and sales transactions. Your task is to create a user-friendly system that allows bookstore staff to effectively oversee inventory and customer 
purchases. Here are the specific functionalities you need to implement:

➢ Add New Book: This function should allow the user to input details for a new book, including ISBN, title, author, genre, and price. 
The program should be able to handle up to 500 books. Implement error handling to validate input formats and ensure data integrity.

➢ Display All Books: Provide a detailed list of all books in inventory, showing ISBN, title, author, genre, and price. 
Use appropriate formatting to ensure readability and implement pagination to manage displays when the inventory list is extensive.

➢ Update Stock: Include a function to update the stock level for a given book. The user should enter the ISBN and the new stock level, 
with validations in place to ensure the book exists and the stock level is appropriate.

➢ Process Sale: Develop a function to process book sales, where the user enters the ISBN and quantity sold. Calculate the total cost for the sale,
 update the stock levels accordingly, and handle cases where the book is out of stock or the ISBN does not exist.

➢ Generate Sales Report: This function should compile and display a sales report for a given day, showing all books sold,
 quantities, and total sales amount. Handle any errors such as missing data or incorrect entries gracefully.

➢ Exit Program: Allow the user to exit the program. Make sure the exit option is prominently displayed and intuitive to use.
Your program will provide crucial support for bookstore operations, enabling staff to maintain up-to-date records and manage sales efficiently, 
thus enhancing the bookstore's service and profitability.

Sample Output for question 6:*/



#include <iostream>
using namespace std;

struct Book {
    int ISBN;
    string name;
    string writer;
    string genre;
    double price;
    int stock;
};

const int MAX_BOOKS = 9999;
Book books[MAX_BOOKS];
int initialStock[MAX_BOOKS] = {0};          
int numBooks = 0;


void addBOOKS() {
    cout<<"--- Add New Book ---"<<endl;
    if (numBooks < MAX_BOOKS) {
        cout << "Enter ISBN: ";
        cin >> books[numBooks].ISBN;
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, books[numBooks].name);
        cout << "Enter Author: ";
        getline(cin, books[numBooks].writer);
        cout << "Enter Price: $";
        cin >> books[numBooks].price;
        cout << "Enter Stock: ";
        cin >> books[numBooks].stock;
        numBooks++;

        cout << "Book added successfully!" << endl;
    }
    else {
        cout << "Maximum number of books reached!" << endl;
        return; 
    }
}

void displayBOOKS() {
    if (numBooks == 0) {
        cout << "No books in inventory." << endl;
        return;
    }

    cout << "Books in inventory:" << endl;
    for (int i = 0; i < numBooks; ++i) {
        cout << "ISBN: "<<books[i].ISBN<<", Title: "<<books[i].name << ", Aurthor: " << books[i].writer << ", Price: " << books[i].price << ", Stock: " << books[i].stock << endl;
    }
}

void updateSTOCK() {
    int isbn;
    cout << "Enter ISBN of the book to update stock: ";
    cin >> isbn;

    bool found = false;
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].ISBN == isbn) {
            found = true;
            cout << "Enter new stock quantity: ";
            cin >> books[i].stock;
            cout << "Stock updated successfully!" << endl;
            break;
        }
    }

    if (!found) {
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }
}



void salePROCESS() {
    int isbn;
    cout << "Enter ISBN of the book sold: ";
    cin >> isbn;

    bool found = false;
    for (int i = 0; i < numBooks; ++i) {
        if (books[i].ISBN == isbn) {
            found = true;
            int quantity;
            cout << "Enter quantity sold: ";
            cin >> quantity;
            if (books[i].stock >= quantity) {
                double totalCost = quantity * books[i].price;
                cout << "Total cost for " << quantity << " copies of " << books[i].name << ": $" << totalCost << endl;
                books[i].stock -= quantity;
                cout << "Remaining stock of " << books[i].name << ": " << books[i].stock << endl;
                cout << "Sale processed successfully!" << endl;
            } else {
                cout << "Insufficient stock for this sale." << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Book with ISBN " << isbn << " not found." << endl;
    }
}



void saleGENARATE() {
    cout << "Sales Report:" << endl;
    double totalSales = 0.0;
    for (int i = 0; i < numBooks; ++i) {
        int soldQuantity = books[i].stock - initialStock[i]; 
        double sales = books[i].price * soldQuantity;
        totalSales += sales;
        cout << "Title: " << books[i].name << ", Remaining Stock: " << books[i].stock 
             << ", Quantity Sold: " << soldQuantity << ", Amount: $" << sales << endl;
    }
    cout << "Total Sales of all books: $" << totalSales << endl;
}



void exitProgram() {
    cout << "Exiting program..." << endl;
    exit(0);
}

void ROOT() {
    int option;
    while (true){
        cout << "\nBookstore Inventory Management System\n"
        << "1. Add New Book\n"
        << "2. Display All Books\n"
        << "3. Update Stock\n"
        << "4. Process Sale\n"
        << "5. Generate Sales Report\n"
        << "6. Exit\n"
        << "Please select an option: ";

        cin >> option;

        switch (option){
            case 1:
                addBOOKS();
                break;
            case 2:
                displayBOOKS();
                break;
            case 3:
                updateSTOCK();
                break;
            case 4:
                salePROCESS();
                break;
            case 5:
                saleGENARATE();
                break;
            case 6:
                exitProgram();
                return; 
            default:
                cout << "Invalid option. Please select a valid option." << endl;
        }
    }
}


int main() {
    ROOT();
    return 0;
}
