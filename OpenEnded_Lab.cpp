#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h> // For SetConsoleTextAttribute
#include <algorithm> // For input validation
using namespace std;

// Function prototypes
void setColor(int color);
void displayWelcomeMessage();
void getPersonalDetails(string &name, string &phone, string &table);
void displayMenu();
void displayDeals();
void takeOrder(float &subtotal);
void customizeOrder(int choice, float &subtotal);
void displayChefsRecommendation(float &subtotal);
void calculateBill(float &subtotal, float &total, string &discountCode);
void paymentMethod(string &paymentMethodChoice, string &cardNumber, string &expiryDate, string &cvv);
void generateInvoice(float subtotal, float total, string paymentMethodChoice, string name, string phone, string table, string cardNumber = "", string expiryDate = "", string cvv = "");
bool isValidDiscountCode(const string &code);
bool isValidYesNo(char input);

int main() {
    float subtotal = 0.0, total = 0.0;
    string paymentMethodChoice, name, phone, table, cardNumber, expiryDate, cvv, discountCode;

    // Display welcome message
    displayWelcomeMessage();

    // Get personal details
    getPersonalDetails(name, phone, table);

    // Display menu and deals
    displayMenu();
    displayDeals();

    // Take order
    takeOrder(subtotal);

    // Display chef's recommendation
    displayChefsRecommendation(subtotal);

    // Calculate the total bill
    calculateBill(subtotal, total, discountCode);

    // Ask for payment method and card details if applicable
    paymentMethod(paymentMethodChoice, cardNumber, expiryDate, cvv);

    // Generate and display the invoice
    generateInvoice(subtotal, total, paymentMethodChoice, name, phone, table, cardNumber, expiryDate, cvv);

    return 0;
}

// Function to set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to display the welcome message
void displayWelcomeMessage() {
    setColor(11); // Bright Cyan
    std::cout << "  _    _  ____  __  __ ______   ____          _  _______ _   _  _____  " << std::endl;
    std::cout << " | |  | |/ __ \\|  \\/  |  ____| |  _ \\   /\\   | |/ /_   _| \\ | |/ ____| " << std::endl;
    std::cout << " | |__| | |  | | \\  / | |__    | |_) | /  \\  | ' /  | | |  \\| | |  __  " << std::endl;
    std::cout << " |  __  | |  | | |\\/| |  __|   |  _ < / /\\ \\ |  <   | | | . ` | | |_ | " << std::endl;
    std::cout << " | |  | | |__| | |  | | |____  | |_) / ____ \\| . \\ _| |_| |\\  | |__| | " << std::endl;
    std::cout << " |_|  |_|\\____/|_|  |_|______| |____/_/    \\_\\_|\\_\\_____|_| \\_|\\_____| " << std::endl;
    std::cout << "                                                                        " << std::endl;
    std::cout << "                                                                        " << std::endl;
    setColor(7); // Reset to default color (white)
}

// Function to get personal details
void getPersonalDetails(string &name, string &phone, string &table) {
    setColor(14); // Bright Yellow
    cout << "\nPlease enter your details for a better experience:\n";
    cout << "Enter your name: ";
    setColor(7); // Reset to default color
    getline(cin, name);
    setColor(14);
    cout << "Enter your phone number: ";
    setColor(7);
    getline(cin, phone);
    setColor(14);
    cout << "Enter your table number (if applicable): ";
    setColor(7);
    getline(cin, table);
}

// Function to display the menu
void displayMenu() {
    setColor(10); // Bright Green
    cout << "\nAPPETIZERS" << endl;
    setColor(7); // Reset to default color
    cout << "1. Garlic Bread - PKR 500" << endl;
    cout << "2. Bruschetta - PKR 700" << endl;
    cout << "3. Cheese Platter - PKR 1000" << endl;
    cout << "4. Soup of the Day - PKR 600" << endl;

    setColor(10);
    cout << "\nBAR MENU" << endl;
    setColor(7);
    cout << "5. Cold Coffee - PKR 400" << endl;
    cout << "6. Hot Coffee - PKR 350" << endl;
    cout << "7. Pina Colada - PKR 600" << endl;
    cout << "8. Mint Margarita - PKR 550" << endl;

    setColor(10);
    cout << "\nDESSERTS" << endl;
    setColor(7);
    cout << "9. Chocolate Lava Cake - PKR 800" << endl;
    cout << "10. Cheesecake - PKR 700" << endl;
    cout << "11. Tiramisu - PKR 900" << endl;
    cout << "12. Ice Cream Sundae - PKR 600" << endl;
}

// Function to display deals
void displayDeals() {
    setColor(11); // Light Cyan
    cout << "\n=====================================" << endl;
    cout << "              DEALS                  " << endl;
    cout << "=====================================" << endl;
    cout << "13. Deal 1: Appetizer + Dessert - PKR 1200 (Save PKR 300)" << endl;
    cout << "14. Deal 2: Bar Menu + Dessert - PKR 1500 (Save PKR 400)" << endl;
    cout << "15. Deal 3: Full Meal (Appetizer + Bar Menu + Dessert) - PKR 2500 (Save PKR 700)" << endl;
    setColor(7); // Reset to default color
}

// Function to take the user's order
void takeOrder(float &subtotal) {
    int choice, quantity;
    char addMore;
    do {
        setColor(14); // Bright Yellow
        cout << "\nEnter the item number you want to order: ";
        setColor(7); // Reset to default color
        cin >> choice;

        // Validate menu choice
        while (choice < 1 || choice > 15) {
            setColor(12); // Bright Red
            cout << "Invalid choice! Please enter a number between 1 and 15: ";
            setColor(7);
            cin >> choice;
        }

        setColor(14);
        cout << "Enter the quantity: ";
        setColor(7);
        cin >> quantity;

        // Validate quantity
        while (quantity <= 0) {
            setColor(12); // Bright Red
            cout << "Invalid quantity! Please enter a positive number: ";
            setColor(7);
            cin >> quantity;
        }

        // Use a switch statement to get the price of the selected item
        float price = 0.0;
        switch (choice) {
            case 1: price = 500; break;
            case 2: price = 700; break;
            case 3: price = 1000; break;
            case 4: price = 600; break;
            case 5: price = 400; break;
            case 6: price = 350; break;
            case 7: price = 600; break;
            case 8: price = 550; break;
            case 9: price = 800; break;
            case 10: price = 700; break;
            case 11: price = 900; break;
            case 12: price = 600; break;
            case 13: price = 1200; break;
            case 14: price = 1500; break;
            case 15: price = 2500; break;
        }

        // Update subtotal
        subtotal += price * quantity;

        // Customize the order if applicable
        if (choice >= 1 && choice <= 12) {
            customizeOrder(choice, subtotal);
        }

        setColor(14);
        cout << "Do you want to add more items? (Y/N): ";
        setColor(7);
        cin >> addMore;
        while (!isValidYesNo(addMore)) {
            setColor(12); // Bright Red
            cout << "Invalid input! Please enter Y or N: ";
            setColor(7);
            cin >> addMore;
        }
    } while (addMore == 'Y' || addMore == 'y');
}

// Function to customize the order
void customizeOrder(int choice, float &subtotal) {
    char customize;
    setColor(14); // Bright Yellow
    cout << "Would you like to customize this order? (Y/N): ";
    setColor(7);
    cin >> customize;
    while (!isValidYesNo(customize)) {
        setColor(12); // Bright Red
        cout << "Invalid input! Please enter Y or N: ";
        setColor(7);
        cin >> customize;
    }

    if (customize == 'Y' || customize == 'y') {
        int option;
        setColor(11); // Light Cyan
        switch (choice) {
            case 1: // Garlic Bread
                cout << "Customization options for Garlic Bread:\n";
                cout << "1. Add Extra Cheese (+PKR 100)\n";
                cout << "2. Add Herbs (+PKR 50)\n";
                cout << "3. Add Extra Garlic (+PKR 70)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 100;
                else if (option == 2) subtotal += 50;
                else if (option == 3) subtotal += 70;
                break;

            case 2: // Bruschetta
                cout << "Customization options for Bruschetta:\n";
                cout << "1. Add Extra Tomatoes (+PKR 50)\n";
                cout << "2. Add Extra Basil (+PKR 30)\n";
                cout << "3. Add Extra Olive Oil (+PKR 20)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 50;
                else if (option == 2) subtotal += 30;
                else if (option == 3) subtotal += 20;
                break;

            case 3: // Cheese Platter
                cout << "Customization options for Cheese Platter:\n";
                cout << "1. Add Extra Cheese (+PKR 200)\n";
                cout << "2. Add Extra Crackers (+PKR 100)\n";
                cout << "3. Add Extra Fruits (+PKR 150)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 200;
                else if (option == 2) subtotal += 100;
                else if (option == 3) subtotal += 150;
                break;

            case 4: // Soup of the Day
                cout << "Customization options for Soup of the Day:\n";
                cout << "1. Add Extra Bread (+PKR 50)\n";
                cout << "2. Add Extra Cream (+PKR 30)\n";
                cout << "3. Add Extra Herbs (+PKR 20)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 50;
                else if (option == 2) subtotal += 30;
                else if (option == 3) subtotal += 20;
                break;

            case 5: // Cold Coffee
                cout << "Customization options for Cold Coffee:\n";
                cout << "1. Add Whipped Cream (+PKR 50)\n";
                cout << "2. Add Caramel Syrup (+PKR 30)\n";
                cout << "3. Add Ice Cream (+PKR 100)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 50;
                else if (option == 2) subtotal += 30;
                else if (option == 3) subtotal += 100;
                break;

            case 6: // Hot Coffee
                cout << "Customization options for Hot Coffee:\n";
                cout << "1. Add Extra Sugar (+PKR 10)\n";
                cout << "2. Add Extra Cream (+PKR 20)\n";
                cout << "3. Add Extra Shot of Espresso (+PKR 50)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 10;
                else if (option == 2) subtotal += 20;
                else if (option == 3) subtotal += 50;
                break;

            case 7: // Pina Colada
                cout << "Customization options for Pina Colada:\n";
                cout << "1. Add Extra Rum (+PKR 100)\n";
                cout << "2. Add Extra Coconut Cream (+PKR 50)\n";
                cout << "3. Add Extra Pineapple Juice (+PKR 30)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 100;
                else if (option == 2) subtotal += 50;
                else if (option == 3) subtotal += 30;
                break;

            case 8: // Mint Margarita
                cout << "Customization options for Mint Margarita:\n";
                cout << "1. Add Extra Tequila (+PKR 100)\n";
                cout << "2. Add Extra Lime Juice (+PKR 30)\n";
                cout << "3. Add Extra Mint Leaves (+PKR 20)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 100;
                else if (option == 2) subtotal += 30;
                else if (option == 3) subtotal += 20;
                break;

            case 9: // Chocolate Lava Cake
                cout << "Customization options for Chocolate Lava Cake:\n";
                cout << "1. Add Vanilla Ice Cream (+PKR 200)\n";
                cout << "2. Add Strawberries (+PKR 150)\n";
                cout << "3. Add Chocolate Sauce (+PKR 50)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 200;
                else if (option == 2) subtotal += 150;
                else if (option == 3) subtotal += 50;
                break;

            case 10: // Cheesecake
                cout << "Customization options for Cheesecake:\n";
                cout << "1. Add Extra Strawberries (+PKR 100)\n";
                cout << "2. Add Extra Chocolate Sauce (+PKR 50)\n";
                cout << "3. Add Extra Whipped Cream (+PKR 30)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 100;
                else if (option == 2) subtotal += 50;
                else if (option == 3) subtotal += 30;
                break;

            case 11: // Tiramisu
                cout << "Customization options for Tiramisu:\n";
                cout << "1. Add Extra Cocoa Powder (+PKR 20)\n";
                cout << "2. Add Extra Coffee Syrup (+PKR 30)\n";
                cout << "3. Add Extra Mascarpone Cream (+PKR 50)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 20;
                else if (option == 2) subtotal += 30;
                else if (option == 3) subtotal += 50;
                break;

            case 12: // Ice Cream Sundae
                cout << "Customization options for Ice Cream Sundae:\n";
                cout << "1. Add Extra Chocolate Syrup (+PKR 30)\n";
                cout << "2. Add Extra Whipped Cream (+PKR 20)\n";
                cout << "3. Add Extra Nuts (+PKR 50)\n";
                cout << "4. No customization\n";
                cin >> option;
                if (option == 1) subtotal += 30;
                else if (option == 2) subtotal += 20;
                else if (option == 3) subtotal += 50;
                break;

            default:
                setColor(12); // Bright Red
                cout << "No customization options available for this item.\n";
                setColor(7);
                break;
        }
    }
}

// Function to display chef's recommendation
void displayChefsRecommendation(float &subtotal) {
    char addRecommendation;
    setColor(14); // Bright Yellow
    cout << "\nChef's Recommendation: Chocolate Lava Cake - PKR 800" << endl;
    cout << "Would you like to add this to your order? (Y/N): ";
    setColor(7);
    cin >> addRecommendation;
    while (!isValidYesNo(addRecommendation)) {
        setColor(12); // Bright Red
        cout << "Invalid input! Please enter Y or N: ";
        setColor(7);
        cin >> addRecommendation;
    }

    if (addRecommendation == 'Y' || addRecommendation == 'y') {
        int quantity;
        setColor(14);
        cout << "Enter the quantity: ";
        setColor(7);
        cin >> quantity;

        // Validate quantity
        while (quantity <= 0) {
            setColor(12); // Bright Red
            cout << "Invalid quantity! Please enter a positive number: ";
            setColor(7);
            cin >> quantity;
        }

        subtotal += 800 * quantity;
    }
}

// Function to calculate the total bill
void calculateBill(float &subtotal, float &total, string &discountCode) {
    float serviceCharge = subtotal * 0.07; // 7% service charge
    total = subtotal + serviceCharge;

    // Apply discount if total is more than 3000
    if (total > 3000) {
        total = total * 0.94; // 6% discount
    }

    // Apply discount code
    setColor(14);
    cout << "\nDo you have a discount code? (Y/N): ";
    setColor(7);
    char hasDiscount;
    cin >> hasDiscount;
    while (!isValidYesNo(hasDiscount)) {
        setColor(12); // Bright Red
        cout << "Invalid input! Please enter Y or N: ";
        setColor(7);
        cin >> hasDiscount;
    }
    if (hasDiscount == 'Y' || hasDiscount == 'y') {
        setColor(14);
        cout << "Enter your discount code: ";
        setColor(7);
        cin >> discountCode;
        if (isValidDiscountCode(discountCode)) {
            total = total * 0.90; // 10% discount
            cout << "Discount applied! 10% off your total bill.\n";
        } else {
            cout << "Invalid discount code. No discount applied.\n";
        }
    }
}

// Function to validate discount code
bool isValidDiscountCode(const string &code) {
    return code == "SAVE10" || code == "FREESHIP";
}

// Function to ask for payment method and card details if applicable
void paymentMethod(string &paymentMethodChoice, string &cardNumber, string &expiryDate, string &cvv) {
    setColor(14); // Bright Yellow
    cout << "\nWould you like to pay by card or cash? (CARD/CASH): ";
    setColor(7);
    cin >> paymentMethodChoice;

    // Validate payment method
    while (paymentMethodChoice != "CARD" && paymentMethodChoice != "CASH") {
        setColor(12); // Bright Red
        cout << "Invalid payment method! Please enter CARD or CASH: ";
        setColor(7);
        cin >> paymentMethodChoice;
    }

    // If paying by card, ask for card details
    if (paymentMethodChoice == "CARD") {
        setColor(14);
        cout << "Enter your card number (16 digits): ";
        setColor(7);
        cin >> cardNumber;

        // Validate card number length
        while (cardNumber.length() != 16) {
            setColor(12);
            cout << "Invalid card number! Please enter a 16-digit card number: ";
            setColor(7);
            cin >> cardNumber;
        }

        setColor(14);
        cout << "Enter expiry date (MM/YY): ";
        setColor(7);
        cin >> expiryDate;

        // Validate expiry date format
        while (expiryDate.length() != 5 || expiryDate[2] != '/') {
            setColor(12);
            cout << "Invalid expiry date! Please enter in MM/YY format: ";
            setColor(7);
            cin >> expiryDate;
        }

        setColor(14);
        cout << "Enter CVV (3 digits): ";
        setColor(7);
        cin >> cvv;

        // Validate CVV length
        while (cvv.length() != 3) {
            setColor(12);
            cout << "Invalid CVV! Please enter a 3-digit CVV: ";
            setColor(7);
            cin >> cvv;
        }
    }
}

// Function to generate and display the invoice
void generateInvoice(float subtotal, float total, string paymentMethodChoice, string name, string phone, string table, string cardNumber, string expiryDate, string cvv) {
    setColor(13); // Light Purple
    cout << "\n=====================================" << endl;
    cout << "           HOME BAKING INVOICE       " << endl;
    cout << "=====================================" << endl;
    cout << "Customer Name: " << name << endl;
    cout << "Phone Number: " << phone << endl;
    cout << "Table Number: " << table << endl;
    cout << "-------------------------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Subtotal: PKR" << subtotal << endl;
    cout << "Service Charge (7%): PKR" << subtotal * 0.07 << endl;
    if (total > 3000) {
        cout << "Discount (6%): PKR" << subtotal * 0.06 << endl;
    }
    cout << "Total: PKR " << total << endl;
    cout << "Payment Method: " << paymentMethodChoice << endl;
    if (paymentMethodChoice == "CARD") {
        cout << "Card Number: **** **** **** " << cardNumber.substr(12) << endl;
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "CVV: ***" << endl;
    }
    cout << "=====================================" << endl;
    cout << "      THANK YOU FOR YOUR ORDER!      " << endl;
    cout << "=====================================" << endl;
    setColor(7); // Reset to default color
}

// Function to validate yes/no input
bool isValidYesNo(char input) {
    return input == 'Y' || input == 'y' || input == 'N' || input == 'n';
}