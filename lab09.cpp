#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
int main()
{
//	cout<<"National Banking System"<<endl;
//	string accno;
//	string pin;
//	cout<<"Enter your account number: ";
//	cin>>accno;
//	cout<<"Enter your pin: ";
//	cin>>pin;
//	while(accno!="1234"||pin!="09090"){
//		cout<<"Incorrect Account or Password. Try Again!"<<endl;
//		cout<<"Enter your account number: ";
//	cin>>accno;
	int balance=1000;
	int choice;
	int amount;
	while(true){
	cout<<"Choose from the following options: \n";
	cout<<"1. Deposit Money\n";
	cout<<"2.Withdraw Money\n";
	cout<<"3.Balance Check\n";
	cout<<"4.Exit\n";
	cout<<"Your choice: ";
	cin>>choice;

		switch(choice){
			case 1:{
			cout<<"Enter the amount you want to deposit: ";
			cin>>amount;
			balance+=amount;
			cout<<"Your money has been deposited successfully! Your New Balance is: $"<<balance<<endl;
			break;
		}
		   case 2:{
			cout<<"Enter the amount you want to withdraw: ";
			cin>>amount;
			if(amount<=balance){
			balance-=amount;
				cout<<"Your money has been deposited successfully! Your New Balance is: $"<<balance<<endl;
			}
			if(amount>balance){
				cout<<"Insufficient balance!"<<endl;
			}
			break;
		}
		   case 3:{
		   	cout<<"Current Balance: "<<balance<<endl;
			break;
		   }
		   case 4:{
		   	cout<<"Exiting National Banking System! Thank you for choosing Us! "<<endl;
		   	return 0;
			break;
		   }
		   default:
		   	cout<<"Incorrect Entry!"<<endl;
		   	return 0;
	}
	
	}
   return 0;
	}
	
    
//    int num;
//    cout<<"Enter the numbers you want to print: ";
//    cin>>num;
//    int i=1;
//    while(i<=num){
//    	cout<<i;
//    	i++;
//	}
//	return 0;
//
//    int num;
//    int i=1;
//    cout<<"Enter the number whose multiplication table u want to display: ";
//    cin>>num;
//    while(i<=12){
//    	cout<<num<<"*"<<i<<"="<<num*i<<endl;
//    	i++;
//    
//	}
////return 0;
// int num;
// cout<<"Enter a positive number: ";
// cin>>num;
// while(num<0){
// 	cout<<"Incorrect entry!"<<endl;
// 	cout<<"Enter a positive number: ";
// 	cin>>num;
// }
// return 0;

//int i=1;
//int sum=0;
//while(i<=5){
//	sum+=i;
//	i++;
//}
//cout<<"Sum= "<<sum;
//return 0;


//  
//    int category, item, quantity;
//    double price, total = 0;
//    int reorder; 
//
//    do {
//        cout << "Choose a category from the following options:\n";
//        cout << "1. Breakfast\n2. Lunch\n3. Dinner\n";
//        cout << "Your choice: ";
//        cin >> category;
//
//        switch (category) {
//        case 1: 
//            cout << "Choose from the following options:\n";
//            cout << "1. Anda Paratha (Rs.40)\n2. Tea (Rs.20)\n";
//            cout << "3. Naan Channy (Rs.60)\n4. Siri Paye (Rs.150)\n";
//            cout << "Your choice: ";
//            cin >> item;
//
//            switch (item) {
//            case 1: price = 40; break;
//            case 2: price = 20; break;
//            case 3: price = 60; break;
//            case 4: price = 150; break;
//            default: cout << "Invalid choice!\n"; price = 0; break;
//            }
//            break;
//
//        case 2: 
//            cout << "Choose from the following options:\n";
//            cout << "1. Chicken Karahi (Rs.1050/KG)\n2. Mutton Karahi (Rs.1800/KG)\n";
//            cout << "3. Egg Fried Rice (Rs.450/plate)\n4. BBQ (Rs.1050/dozen)\n";
//            cout << "Your choice: ";
//            cin >> item;
//
//            switch (item) {
//            case 1: price = 1050; break;
//            case 2: price = 1800; break;
//            case 3: price = 450; break;
//            case 4: price = 1050; break;
//            default: cout << "Invalid choice!\n"; price = 0; break;
//            }
//            break;
//
//        case 3: 
//            cout << "Choose from the following options:\n";
//            cout << "1. Chicken Karahi (Rs.1050/KG)\n2. Sajji (Rs.1800/KG)\n";
//            cout << "3. BBQ (Rs.1050/dozen)\n4. Egg Fried Rice (Rs.450/plate)\n";
//            cout << "Your choice: ";
//            cin >> item;
//
//            switch (item) {
//            case 1: price = 1050; break;
//            case 2: price = 1800; break;
//            case 3: price = 1050; break;
//            case 4: price = 450; break;
//            default: cout << "Invalid choice!\n"; price = 0; break;
//            }
//            break;
//
//        default:
//            cout << "Invalid category choice!\n";
//            price = 0;
//            break;
//        }
//
//        if (price > 0) {
//            cout << "Enter quantity (e.g., KG, plates, dozen): ";
//            cin >> quantity;
//            total += price * quantity;
//        }
//
//        cout << "Do you want to reorder? (1 for Yes, 0 for No): ";
//        cin >> reorder;
//
//    } while (reorder == 1);
//
//    cout << "Total bill: Rs." << total << endl;
//    return 0;
//
//cout<<"LOGIN SYSTEM"<<endl;
//cout<<"------------"<<endl;
//string username;
//string password;
//cout<<"Enter your username: ";
//cin>>username;
//do{
//cout<<"Enter your password: ";
//cin>>password;
//}while(password!="12345");
//if(password=="12345"){
//	cout<<"Congratulations! Your memory works just fine."<<endl;
//}
//

//    cout<<"CALCULATOR STIMULATION"<<endl;
//    char operation;
//    int permit, a, b;
//
// do{
// 	cout << "Enter two numbers: ";
//    cin>>a>>b;
//
//    cout << "Enter the operation you want to perform (+, -, *, /): ";
//    cin >> operation;
//
//    switch (operation) {
//    case '+': {
//        int sum = a + b; // when declaring variables inside switch, use extra curly brackets!
//        cout << "Sum: " << sum << endl;
//        break;
//    }
//    case '-': {
//        int diff = a - b;
//        cout << "Difference: " << diff << endl;
//        break;
//    }
//    case '*': {
//        int product = a * b;
//        cout << "Product: " << product << endl;
//        break;
//    }
//    case '/': {
//        if (b != 0) { // Check for division by zero
//            double quotient = (double)a / b;
//            cout << "Quotient: " << quotient << endl;
//        } else {
//            cout << "Error: Division by zero is not allowed!" << endl;
//        }
//        break;
//    }
//        default:
//        cout << "Invalid operator!" << endl;
//        break;
//        
//    }
//	cout<<"Do you want to perform more calculations? (1 if Yes,2 if No): ";
//        cin>>permit;
// }   while(permit==1);
//cout<<"Thank you for using our Calculator!"<<endl;
//    return 0;








































	
	
	
		
	
	
	
	
	
	
	
	
