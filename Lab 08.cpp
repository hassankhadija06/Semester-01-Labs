#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
cout<<"CALCULATOR"<<endl;
cout<<"----------"<<endl;
int num1, num2;
cout<<"Enter a number: ";
cin>>num1;
cout<<"Enter another number: ";
cin>>num2;
char oper;
cout<<"Enter the operation you want to perform (+,-,/,*): ";
cin>>oper;
switch(oper){
	case '+':
		cout<<"Result: "<<num1+num2;
		break;
	case '-':
		cout<<"Result: "<<num1-num2;
		break;
	case '*':
		cout<<"Result: "<<num1*num2;
		break;
	case'/':
		if(num2==0){
			cout<<"Division by zero is undefined!";
			}else{
				cout<<"Result: "<<setprecision(2)<<(double)num1/num2;
			}
			break;
	default:
	cout<<"Invalid operator!"<<endl;
	break;	
}
//int day;
//cout<<"Which day do you want to display?"<<endl;
//cout<<"Press 1 if Monday, 2 if Tuesday... 7 if Sunday."<<endl;
//cout<<"Your choice: ";
//cin>>day;
//switch(day){
//	case 1:
//		cout<<"The day is Monday!"<<endl;
//		break;
//	case 2:
//		cout<<"The day is Tuesday!"<<endl;
//		break;
//	case 3:
//		cout<<"The day is Wednesday!"<<endl;
//		break;
//	case 4:
//		cout<<"The day is Thursday!"<<endl;
//		break;
//	case 5:
//		cout<<"The day is Friday!"<<endl;
//		break;
//	case 6:
//		cout<<"The day is Saturday!"<<endl;
//		break;
//	case 7:
//		cout<<"The day is Sunday!"<<endl;
//		break;	
//	default:
//		cout<<"Incorrect Entry!"<<endl;
//		break;
//}

//char shape;
//	double length,width,base,height,radius;
//	const double pi= 3.14;
//	cout<<"Enter the shape you want to find area of. 'C' for circle, 'R' for rectangle or 'T' for triangle: ";
//	cin>>shape;
//	switch(shape){
//		case 'C':
//			cout<<"Enter the radius of your circle in cm= ";
//			cin>>radius;
//			cout<<"Area of Circle = "<<pi*(radius*radius)<<"square cm"<<endl;
//			break;
//	    case 'T':
//			cout<<"Enter the base of your triangle in cm: ";
//			cin>>base;
//			cout<<"Enter the height of your triangle in cm: ";
//			cin>>height;
//			cout<<"Area of Triangle ="<<base*height/2<<"square cm"<<endl;
//			break;
//		case 'R':
//		cout<<"Enter the length of your rectangle in meters: ";
//		cin>>length;
//		cout<<"Enter the width of your rectangle in meters:";
//		cin>>width;
//		cout<<"Area of Rectangle= "<<length*width<<"square meters"<<endl;
//		break;
//		default :
//		cout<<"Incorrect entry!"<<endl;
//		break;	
//	}

double amount, convertedamount;
//       int currency;
////       cout<<setw(65)<<setfill('=')<<"="<<endl;
//       cout<<"The Currency Convertor"<<endl;
////       cout<<setw(65)<<setfill('=')<<"="<<endl;
//       cout<<"Enter your amount in USD: $";
//       cin>>amount;
//       cout<<"Enter the Currency you want to convert into: "<<endl;
//       cout<<"('1' for PKR,'2' for INR, '3' for Euros)"<<endl;
//       cout<<"You entered: ";
//       cin>>currency;
//       
//       switch(currency){
//       	case 1:
//       		convertedamount=amount*278.20;
//       		cout<<"The converted amount in PKR is: Rs "<<convertedamount;
//       		break;
//       	case 2:
//		   convertedamount=amount*84.87;
//		   cout<<"The converted amount in IND is: Rs "<<convertedamount;
//		   break;
//		case 3:
//		   convertedamount=amount*0.95;
//		   cout<<"The converted amount in Euros is: E "<<convertedamount;
//		   break;   
//		default:
//		   cout<<"Invalid input"<<endl;
//		   break;    	
//	   }
//	   cout<<"Amount: "<<amount<<endl;
//	   cout<<"Converted Amount: "<<convertedamount;
//	   return 0;

//{   cout<<" HMARA SHOPPING SYSTEM "<<endl;
//    cout<<"-----------------------"<<endl;
//	int category, itemchoice, quantity;
//	double price=0, total=0, discount=0, finalamount=0;
//	
//	cout<<"Select a category of your choice:\n";
//	cout<<"1. Electronics\n 2. Clothing\n 3. Groceries\n";
//	cout<<"Enter your choice. (1,2 or 3): "; 
//	cin>>category;
//	
//	switch(category){
//		case 1:
//			cout<<"Electronics:\n";
//			cout<<" 1. Laptop ($1000)\n 2.Smartphone ($700)\n 3. Headphones ($150)\n";
//			cout<<"Enter your choice (1,2 or 3): ";
//			cin>>itemchoice;
//			
//			switch(itemchoice){
//				case 1: 
//				    price=1000;
//				    break;
//				case 2:
//					price=700;
//					break;
//				case3:
//				    price=150;
//				    break;	
//				default:
//				cout<<"Invalid entry!"<<endl;    
//					
//			}
//			break;
//		case 2:
//			cout<<"Clothing:\n";
//			cout<<" 1. Jacket ($120)\n 2. T-shirt ($40)\n 3. Jeans($60)";
//			cout<<"Enter your choice (1,2 or 3): ";
//			cin>>itemchoice;
//			switch(itemchoice){
//				case 1:
//					price=120;
//					break;
//				case 2:
//				    price=40;
//				    break;
//				case 3:
//				   price=60;
//				   break;
//				default:
//				   cout<<"Invalid Entry!"<<endl;
//				   break;	
//			}
//			break;
//		case 3:
//		cout<<"Groceries:\n";
//		cout<<" 1. Milk (1 Liter- $2)\n 2. Bread (1 Loaf-$3)\n 3. Eggs (1 Dozen-$5)\n";
//		cout<<"Enter your choice (1,2 or 3): ";
//		cin>>itemchoice;
//			switch(itemchoice){
//				case 1:
//					price=2;
//					break;
//				case 2:
//				    price=3;
//				    break;
//				case 3:
//				   price=5;
//				   break;
//				default:
//				   cout<<"Invalid Entry!"<<endl;
//				   break;	
//				
//			}
//			break;
//			
//		cout<<"Enter quantity: ";
//		cin>>quantity;
//		total=price*quantity;
//		if(total<100){
//			discount=0;
//		}
//		else if(total>=100&&total<=500){
//			discount= total*0.1;
//		}
//		else if(total>500){
//			discount=total*0.2;
//		}
//		finalamount=total-discount;
//		
//		cout<<"---------Invoice---------"<<endl;
//		cout<<"Item Price: $"<<price<<endl;
//		cout<<"Quantity: "<<quantity<<endl;
//		cout<<"Grand Total: $"<<total<<endl;
//		cout<<"Discount: $"<<discount<<endl;
//		cout<<"Final Amount Due: $"<<finalamount<<endl;
//		return 0;
//			
//	}
//       

   







}