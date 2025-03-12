#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
#include <vector>

using namespace std;

// Structure to store item details
struct MenuItem {
    string name;
    double price;
};

// Structure to store order details
struct Order {
    string itemName;
    int quantity;
    double price;
};

// Function to set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display the bakery name
void displayBakeryName() {
    setColor(14); // Yellow color
    cout << "=============================================\n";
    cout << "          WELCOME TO HOME BAKING CAFE        \n";
    cout << "=============================================\n";
    setColor(7); // Reset to default color
}

// Function to display the menu
void displayMenu(const vector<MenuItem>& menu, const string& category) {
    setColor(10); // Green color
    cout << "\n----------------- " << category << " -----------------\n";
    for (size_t i = 0; i < menu.size(); i++) {
        cout << i + 1 << ". " << menu[i].name << " - Rs " << menu[i].price << endl;
    }
    cout << "----------------------------------------\n";
    setColor(7); // Reset to default color
}

// Function to display deals
void displayDeals() {
    setColor(11); // Light cyan color
    cout << "\n----------------- DEALS -----------------\n";
    cout << "1. Combo Deal: Fried Hot Wings + Cold Coffee - Rs 900\n";
    cout << "2. Sweet Deal: Molten Lava Cake + Chai - Rs 700\n";
    cout << "----------------------------------------\n";
    setColor(7); // Reset to default color
}

// Function to display chef's recommendation
void displayChefRecommendation() {
    setColor(12); // Light red color
    cout << "\nChef's Recommendation: Fish n Chips + Pina Colada - Rs 1000\n";
    setColor(7); // Reset to default color
}

// Function to place an order
void placeOrder(vector<Order>& orders, const vector<MenuItem>& menu, const string& category) {
    int choice, quantity;
    cout << "\nEnter the item number to order from " << category << " (0 to finish): ";
    cin >> choice;

    if (choice > 0 && choice <= menu.size()) {
        cout << "Enter quantity: ";
        cin >> quantity;

        if (quantity > 0) {
            Order newOrder;
            newOrder.itemName = menu[choice - 1].name;
            newOrder.quantity = quantity;
            newOrder.price = menu[choice - 1].price;
            orders.push_back(newOrder);
            cout << "Item added to order!\n";
        } else {
            cout << "Invalid quantity!\n";
        }
    } else if (choice != 0) {
        cout << "Invalid choice!\n";
    }
}

// Function to calculate total bill
double calculateTotal(const vector<Order>& orders, double& discount, double& serviceCharge) {
    double total = 0;
    for (const auto& order : orders) {
        total += order.quantity * order.price;
    }

    // Apply discount (10% if total > 2000)
    if (total > 2000) {
        discount = total * 0.10;
        total -= discount;
    }

    // Apply service charge (7%)
    serviceCharge = total * 0.07;
    total += serviceCharge;

    return total;
}

// Function to generate invoice
void generateInvoice(const vector<Order>& orders, double discount, double serviceCharge, double total) {
    setColor(13); // Pink color
    cout << "\n----------------- INVOICE -----------------\n";
    cout << setw(20) << "Item" << setw(10) << "Qty" << setw(10) << "Rate" << setw(15) << "Total" << endl;
    cout << "----------------------------------------\n";
    for (const auto& order : orders) {
        cout << setw(20) << order.itemName << setw(10) << order.quantity << setw(10) << order.price << setw(15) << order.quantity * order.price << endl;
    }
    cout << "----------------------------------------\n";
    cout << setw(40) << "Total Before Discount: Rs " << total + discount - serviceCharge << endl;
    cout << setw(40) << "Discount: Rs " << discount << endl;
    cout << setw(40) << "Service Charge (7%): Rs " << serviceCharge << endl;
    cout << setw(40) << "Subtotal: Rs " << total << endl;
    cout << "----------------------------------------\n";
    setColor(7); // Reset to default color
}

// Function to handle payment
void handlePayment(double total) {
    int paymentMethod;
    cout << "\nChoose payment method:\n";
    cout << "1. Cash\n";
    cout << "2. Card\n";
    cin >> paymentMethod;

    if (paymentMethod == 1) {
        cout << "Please pay Rs " << total << " in cash.\n";
    } else if (paymentMethod == 2) {
        string cardNumber, expiryDate, cvv;
        cout << "Enter card number: ";
        cin >> cardNumber;
        cout << "Enter expiry date (MM/YY): ";
        cin >> expiryDate;
        cout << "Enter CVV: ";
        cin >> cvv;
        cout << "Payment of Rs " << total << " processed successfully!\n";
    } else {
        cout << "Invalid payment method!\n";
    }
}

int main() {
    // Initialize menu items
    vector<MenuItem> appetizers = {
        {"Fried Hot Wings", 550},
        {"French Fries", 250},
        {"Mozzarella Sticks", 400},
        {"Fish n Chips", 800}
    };

    vector<MenuItem> barMenu = {
        {"Hot Coffee", 400},
        {"Cold Coffee", 450},
        {"Chai", 200},
        {"Pina Colada", 250}
    };

    vector<MenuItem> desserts = {
        {"Molten Lava Cake", 550},
        {"Slice Cake", 300},
        {"Chocolate Chip Cookies", 150},
        {"Donut", 200}
    };

    vector<Order> orders;
    double discount = 0, serviceCharge = 0, total = 0;
    int choice;

    do {
        displayBakeryName();
        cout << "\n1. Display Menu\n";
        cout << "2. Show Deals\n";
        cout << "3. Chef's Recommendation\n";
        cout << "4. Place Order\n";
        cout << "5. Generate Invoice\n";
        cout << "6. Exit Cafe\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayMenu(appetizers, "APPETIZERS");
                displayMenu(barMenu, "BAR MENU");
                displayMenu(desserts, "DESSERTS");
                break;
            case 2:
                displayDeals();
                break;
            case 3:
                displayChefRecommendation();
                break;
            case 4:
                placeOrder(orders, appetizers, "APPETIZERS");
                placeOrder(orders, barMenu, "BAR MENU");
                placeOrder(orders, desserts, "DESSERTS");
                break;
            case 5:
                total = calculateTotal(orders, discount, serviceCharge);
                generateInvoice(orders, discount, serviceCharge, total);
                handlePayment(total);
                break;
            case 6:
                cout << "Thank you for visiting Home Baking Cafe!\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 6);

    return 0;
}