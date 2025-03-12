#include <iostream>
#include<cmath>
using namespace std;
                            //using predefined library functions
double num;
//    // Taking input from the user
//    cout << "Enter a number: ";
//    cin >> num;
//    //square root
//    cout << "Square Root: " << sqrt(num) << endl;
//
//    // absolute value
//    cout << "Absolute value: " << abs(num) << endl;
//
//    // sine of the number 
//    cout << "Sine: " << sin(num) << endl;
//
//    // cosine of the number 
//    cout << "Cosine: " << cos(num) << endl;
//
//    // number raised to the power of 3
//    cout << "Power of 3: " << pow(num, 3) << endl;
//
//    return 0;
//void even_odd(int num){
//	if(num%2==0){
//		cout<<"The number is even.";
//	}
//	else{
//		cout<<"The number is odd.";
//	}
//}
int factorial(int num){
	 int factorial =1;
	 for(int i=1;i<=num;i++){
	 	factorial*=i;
	 }
	 return factorial;
}
//void function for greeting
//void greet(){
//	cout<<"Hello, Welcome to C++ Functions!"<<endl;
//}
//int main(){
//  void greet();
//	return 0;
//	}
//int main(){
//	int num;
//	cout<<"Enter a number: ";
//	cin>>num;
//     even_odd(num);
//}
int main(){
	int num;
	cout<<"Enter a number whose factorial you want to calculate: ";
	cin>>num;
	cout<<"Factorial of number is "<<factorial(num);
}
////calculator using functions
//#include <iostream>
//using namespace std;
//
//// Function prototypes
//double add(double a, double b) { return a + b; }
//double subtract(double a, double b) { return a - b; }
//double multiply(double a, double b) { return a * b; }
//double divide(double a, double b) { return (b != 0) ? a / b : 0; }
//
//int main() {
//    int choice;
//    double num1, num2;
//
//    do {
//        
//        cout << "\nSimple Calculator\n";
//        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice >= 1 && choice <= 4) {
//            cout << "Enter two numbers: ";
//            cin >> num1 >> num2;
//
//            switch (choice) {
//                case 1: cout << "Result: " << add(num1, num2) << endl; break;
//                case 2: cout << "Result: " << subtract(num1, num2) << endl; break;
//                case 3: cout << "Result: " << multiply(num1, num2) << endl; break;
//                case 4: 
//                    if (num2 == 0) 
//                        cout << "Error: Division by zero is not allowed.\n";
//                    else 
//                        cout << "Result: " << divide(num1, num2) << endl;
//                    break;
//            }
//        } else if (choice != 5) {
//            cout << "Invalid choice. Please try again.\n";
//        }
//
//    } while (choice != 5);
//
//    cout << "Calculator exited.\n";
//    return 0;
//}

//calculator using function overloading 
//#include <iostream>
//using namespace std;
//
//// Function overloading for addition
//int add(int a, int b) {
//    return a + b;
//}
//
//int add(int a, int b, int c) {
//    return a + b + c;
//}
//
//float add(float a, float b) {
//    return a + b;
//}
//
//float add(float a, float b, float c) {
//    return a + b + c;
//}

// Function overloading for subtraction
//int subtract(int a, int b) {
//    return a - b;
//}
//
//int subtract(int a, int b, int c) {
//    return a - b - c;
//}
//
//float subtract(float a, float b) {
//    return a - b;
//}
//
//float subtract(float a, float b, float c) {
//    return a - b - c;
//}
//
//// Function overloading for multiplication
//int multiply(int a, int b) {
//    return a * b;
//}
//
//int multiply(int a, int b, int c) {
//    return a * b * c;
//}
//
//float multiply(float a, float b) {
//    return a * b;
//}
//
//float multiply(float a, float b, float c) {
//    return a * b * c;
//}
//
//// Function overloading for division
//float divide(int a, int b) {
//    if (b == 0) {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//    return static_cast<float>(a) / b;
//}
//
//float divide(float a, float b) {
//    if (b == 0) {
//        cout << "Error: Division by zero!" << endl;
//        return 0;
//    }
//    return a / b;
//}
//
//int main() {
//    int choice;
//    do {
//        cout << "\nCalculator Menu:" << endl;
//        cout << "1. Addition" << endl;
//        cout << "2. Subtraction" << endl;
//        cout << "3. Multiplication" << endl;
//        cout << "4. Division" << endl;
//        cout << "5. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        if (choice == 5) {
//            cout << "Exiting the calculator. Goodbye!" << endl;
//            break;
//        }
//
//        int type;
//        cout << "Enter 1 for int or 2 for float: ";
//        cin >> type;
//
//        if (type == 1) {
//            int a, b, c;
//            cout << "Enter the number of operands (2 or 3): ";
//            int operands;
//            cin >> operands;
//
//            if (operands == 2) {
//                cout << "Enter two integers: ";
//                cin >> a >> b;
//                switch (choice) {
//                case 1:
//                        cout << "Result: " << add(a, b) << endl;
//                        break;
//                case 2:
//                        cout << "Result: " << subtract(a, b) << endl;
//                        break;
//                case 3:
//                        cout << "Result: " << multiply(a, b) << endl;
//                        break;
//                case 4:
//                        cout << "Result: " << divide(a, b) << endl;
//                        break;
//                default:
//                        cout << "Invalid choice!" << endl;
//                }
//            } else if (operands == 3) {
//                cout << "Enter three integers: ";
//                cin >> a >> b >> c;
//                switch (choice) {
//                 case 1:
//                        cout << "Result: " << add(a, b, c) << endl;
//                        break;
//                 case 2:
//                        cout << "Result: " << subtract(a, b, c) << endl;
//                        break;
//                 case 3:
//                        cout << "Result: " << multiply(a, b, c) << endl;
//                        break;
//                 default:
//                        cout << "Invalid choice for three operands!" << endl;
//                }
//            } else {
//                cout << "Invalid number of operands!" << endl;
//            }
//        } else if (type == 2) {
//            float a, b, c;
//            cout << "Enter the number of operands (2 or 3): ";
//            int operands;
//            cin >> operands;
//
//            if (operands == 2) {
//                cout << "Enter two floats: ";
//                cin >> a >> b;
//                switch (choice) {
//                case 1:
//                        cout << "Result: " << add(a, b) << endl;
//                        break;
//                case 2:
//                        cout << "Result: " << subtract(a, b) << endl;
//                        break;
//                case 3:
//                        cout << "Result: " << multiply(a, b) << endl;
//                        break;
//                case 4:
//                        cout << "Result: " << divide(a, b) << endl;
//                        break;
//                default:
//                        cout << "Invalid choice!" << endl;
//                }
//            } else if (operands == 3) {
//                cout << "Enter three floats: ";
//                cin >> a >> b >> c;
//                switch (choice) {
//                    case 1:
//                        cout << "Result: " << add(a, b, c) << endl;
//                        break;
//                    case 2:
//                        cout << "Result: " << subtract(a, b, c) << endl;
//                        break;
//                    case 3:
//                        cout << "Result: " << multiply(a, b, c) << endl;
//                        break;
//                    default:
//                        cout << "Invalid choice for three operands!" << endl;
//                }
//            } else {
//                cout << "Invalid number of operands!" << endl;
//            }
//        } else {
//            cout << "Invalid type!" << endl;
//        }
//
//    } while (choice != 5);
//
//    return 0;
//}
	
//	
//#include <iostream>
//
//using namespace std;
//
//// Function to calculate the total cost of an item
//double calculateItemTotal(double price, int quantity) {
//    return price * quantity;
//}
//
//// Function to calculate and display the final bill
//void displayFinalBill(double total) {
//    double serviceCharge = total * 0.10;  
//    double finalAmount = total + serviceCharge;
//
//    cout << "\nTotal: " << total << endl;
//    cout << "Service Charge (10%): " << serviceCharge << endl;
//    cout << "Final Bill: " << finalAmount << endl;
//}
//
//int main() {
//    string items[] = {"Burger", "Pizza", "Pasta", "Fries", "Soda"};
//    double prices[] = {5.99, 8.99, 7.49, 3.49, 1.99};
//
//    int choice, quantity;
//    double totalBill = 0.0;
//
//    cout << "Menu:\n";
//    for (int i = 0; i < 5; i++) {
//        cout << i + 1 << ". " << items[i] << " - " << prices[i] << endl;
//    }
//    cout << "6. Exit\n";
//
//    while (true) {
//        cout << "Enter item number (or 6 to exit): ";
//        cin >> choice;
//        if (choice == 6) {
//            break;
//        }
//        if (choice < 1 || choice > 5) {
//            cout << "Invalid choice. Try again.\n";
//            continue;
//        }
//
//        cout << "Enter quantity: ";
//        cin >> quantity;
//
//        if (quantity <= 0) {
//            cout << "Invalid quantity. Try again.\n";
//            continue;
//        }
//        totalBill += calculateItemTotal(prices[choice - 1], quantity);
//    }
//    if (totalBill > 0) {
//        displayFinalBill(totalBill);
//    } else {
//        cout << "No items ordered.\n";
//    }
//    cout << "Thank you!\n";
//    return 0;
//}











