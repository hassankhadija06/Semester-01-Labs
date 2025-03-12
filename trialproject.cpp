#include <iostream>
#include <iomanip>
#include <windows.h> // For SetConsoleTextAttribute
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

// Structure to represent a menu item
struct MenuItem {
    string name;
    double price;
};

// Structure to represent a deal
struct Deal {
    string description;
    double price;
};

// Structure to represent an order item
struct OrderItem {
    string name;
    int quantity;
    double price;
};

// Function to set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display the bakery name
void displayBakeryName() {
    setColor(14); // Yellow
    cout << "========================================\n";
    cout << "          WELCOME TO HOME BAKING        \n";
    cout << "========================================\n";
    setColor(7); // Reset to default color
}

// Function to display the main menu
void displayMainMenu() {
    setColor(11); // Light cyan
    cout << "\n-------- MAIN MENU --------\n";
    cout << "1. Display Menu\n";
    cout << "2. Show Deals\n";
    cout << "3. Chef's Recommendation\n";
    cout << "4. Place Order\n";
    cout << "5. Generate Invoice\n";
    cout << "6. Exit Cafe\n";
    setColor(7); // Reset to default color
}

// Function to display the menu
void displayMenu(const MenuItem appetizers[], const MenuItem barMenu[], const MenuItem desserts[], int size) {
    setColor(11); // Light cyan
    cout << "\n-------- HOME BAKING MENU --------\n";
    
    setColor(14); // Yellow
    cout << "\nAPPETIZERS:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << appetizers[i].name << " - Rs " << appetizers[i].price << endl;
    }

    setColor(10); // Green
    cout << "\nBAR MENU:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << barMenu[i].name << " - Rs " << barMenu[i].price << endl;
    }

    setColor(13); // Pink
    cout << "\nDESSERTS:\n";
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << desserts[i].name << " - Rs " << desserts[i].price << endl;
    }

    setColor(7); // Reset to default color
}

// Function to display the deals menu
void displayDeals(const Deal deals[], int dealSize) {
    setColor(11); // Light cyan
    cout << "\n-------- DEALS MENU --------\n";
    for (int i = 0; i < dealSize; i++) {
        setColor(14); // Yellow
        cout << "DEAL " << i + 1 << ":\n";
        setColor(7); // Reset to default color
        cout << deals[i].description << " - Rs " << deals[i].price << endl;
    }
}

// Function to recommend a Chef's Special item
MenuItem recommendChefSpecial(const MenuItem appetizers[], const MenuItem barMenu[], const MenuItem desserts[], int size) {
    srand(time(0));
    int category = rand() % 3; // Randomly select a category
    int item = rand() % size;  // Randomly select an item

    setColor(12); // Light red
    cout << "\nChef's Special Recommendation: ";
    switch (category) {
        case 0: 
            cout << appetizers[item].name << " - Rs " << appetizers[item].price << endl;
            return appetizers[item];
        case 1: 
            cout << barMenu[item].name << " - Rs " << barMenu[item].price << endl;
            return barMenu[item];
        case 2: 
            cout << desserts[item].name << " - Rs " << desserts[item].price << endl;
            return desserts[item];
    }
    setColor(7); // Reset to default color
    return {"", 0}; // Default return (should not happen)
}

// Function to generate the invoice
void generateInvoice(const OrderItem order[], int orderSize, double total, double discount, double serviceCharge) {
    setColor(14); // Yellow
    cout << "\n-------- INVOICE --------\n";
    setColor(7); // Reset to default color
    cout << left << setw(25) << "Item Name" << setw(10) << "Quantity" << setw(10) << "Rate" << setw(15) << "Total" << endl;
    cout << "--------------------------------------------\n";
    for (int i = 0; i < orderSize; i++) {
        cout << left << setw(25) << order[i].name << setw(10) << order[i].quantity << setw(10) << order[i].price << setw(15) << order[i].quantity * order[i].price << endl;
    }
    cout << "--------------------------------------------\n";
    cout << right << setw(40) << "Total Before Discount: Rs " << total << endl;
    cout << right << setw(40) << "Discount: Rs " << discount << endl;
    cout << right << setw(40) << "Service Charge: Rs " << serviceCharge << endl;
    cout << right << setw(40) << "Subtotal: Rs " << total - discount + serviceCharge << endl;
}

int main() {
    // Menu items
    const int SIZE = 4;
    MenuItem appetizers[SIZE] = {
        {"Fried Hot Wings", 550},
        {"French Fries", 250},
        {"Mozzarella Sticks", 400},
        {"Fish n Chips", 800}
    };
    MenuItem barMenu[SIZE] = {
        {"Hot Coffee", 400},
        {"Cold Coffee", 450},
        {"Chai", 200},
        {"Pina Colada", 250}
    };
    MenuItem desserts[SIZE] = {
        {"Molten Lava Cake", 550},
        {"Slice Cake", 300},
        {"Chocolate Chip Cookies", 150},
        {"Donut", 200}
    };

    // Deals
    const int DEAL_SIZE = 10;
    Deal deals[DEAL_SIZE] = {
        {"1 SMALL PIZZA, 500ML DRINK", 850},
        {"3 PREMIUM CRISPY BURGER, CHICKEN CHEESE WRAP, 500ML DRINK", 1350},
        {"1 CRISPY MUSHROOM BURGER, 1 CRISPY CHEESE BURGER, 1 SMALL FRIES, 500ML DRINK", 1250},
        {"1 INDIAN PIZZA, 1 CRISPY BURGER, 1 SMALL FRIES, 1L DRINK", 2100},
        {"6 PREMIUM CRISPY BURGER, 1 LOADED FRIES, 1.5L DRINK", 3550},
        {"6 HOT WINGS, 1 CHICKEN BURGER, 1 SMALL FRIES, 1L DRINK", 1150},
        {"1 LOADED PIZZA, 6 NUGGETS, 1.5L DRINK", 2150},
        {"5 CHICKEN MUSHROOM BURGER, 2 BRO WRAP, 1 SMALL FRIES, 1L DRINK", 2100},
        {"1 PREMIUM CRISPY BURGER, 1 CHICKEN MUSHROOM BURGER, 1 CHICKEN CHEESE WRAP, 1 BRO WRAP, 1.5L DRINK", 1900},
        {"12 NUGGETS, 2 SMALL PIZZA, 2 KEBAB SHARWARMA, 1.5L DRINK", 2950}
    };

    // Variables for user input
    OrderItem order[100];
    int orderSize = 0;
    double total = 0;
    double discount = 0;
    double serviceCharge = 0;

    // Display bakery name
    displayBakeryName();

    // Main loop
    while (true) {
        displayMainMenu();
        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            displayMenu(appetizers, barMenu, desserts, SIZE);
        } else if (choice == 2) {
            displayDeals(deals, DEAL_SIZE);
        } else if (choice == 3) {
            MenuItem recommendedItem = recommendChefSpecial(appetizers, barMenu, desserts, SIZE);
            cout << "Would you like to order this? (1-Yes, 0-No): ";
            int orderChoice;
            cin >> orderChoice;
            if (orderChoice == 1) {
                cout << "Enter the quantity: ";
                int quantity;
                cin >> quantity;
                order[orderSize++] = {recommendedItem.name, quantity, recommendedItem.price};
                total += quantity * recommendedItem.price;
                setColor(10); // Green
                cout << quantity << " x " << recommendedItem.name << " added to your order!\n";
                setColor(7); // Reset to default color
            }
        } else if (choice == 4) {
            int category, item, quantity;
            cout << "Enter the category number (1-Appetizers, 2-Bar Menu, 3-Desserts): ";
            cin >> category;
            if (category >= 1 && category <= 3) {
                cout << "Enter the item number (1-4): ";
                cin >> item;
                if (item >= 1 && item <= SIZE) {
                    cout << "Enter the quantity: ";
                    cin >> quantity;
                    if (quantity > 0) {
                        string itemName;
                        double itemPrice;
                        if (category == 1) {
                            itemName = appetizers[item - 1].name;
                            itemPrice = appetizers[item - 1].price;
                        } else if (category == 2) {
                            itemName = barMenu[item - 1].name;
                            itemPrice = barMenu[item - 1].price;
                        } else if (category == 3) {
                            itemName = desserts[item - 1].name;
                            itemPrice = desserts[item - 1].price;
                        }
                        order[orderSize++] = {itemName, quantity, itemPrice};
                        total += quantity * itemPrice;
                        setColor(10); // Green
                        cout << quantity << " x " << itemName << " added to your order!\n";
                        setColor(7); // Reset to default color
                    } else {
                        setColor(12); // Light red
                        cout << "Invalid quantity! Please try again.\n";
                        setColor(7); // Reset to default color
                    }
                } else {
                    setColor(12); // Light red
                    cout << "Invalid item number! Please try again.\n";
                    setColor(7); // Reset to default color
                }
            } else {
                setColor(12); // Light red
                cout << "Invalid category number! Please try again.\n";
                setColor(7); // Reset to default color
            }
        } else if (choice == 5) {
            if (total > 3000) {
                discount = total * 0.1;
            } else if (total > 2500) {
                discount = 0;
                setColor(10); // Green
                cout << "\nCongratulations! You get a free beverage of your choice!\n";
                setColor(7); // Reset to default color
            }
            serviceCharge = total * 0.07;
            generateInvoice(order, orderSize, total, discount, serviceCharge);
        } else if (choice == 6) {
            setColor(14); // Yellow
            cout << "\nThank you for visiting HOME BAKING! Have a great day!\n";
            setColor(7); // Reset to default color
            break;
        } else {
            setColor(12); // Light red
            cout << "Invalid choice! Please try again.\n";
            setColor(7); // Reset to default color
        }
    }

    return 0;
}
