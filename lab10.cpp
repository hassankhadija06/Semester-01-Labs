#include<iostream>
using namespace std;
int main(){
//	int num;
//	cout<<"Enter the number upto where you want to print numbers: ";
//	cin>>num;
//	int i=1;
//	for(;i<=num;i++){
//		cout<<i<<endl;
//	}

//int num;
//cout<<"Enter the number whose multiplication number you want to print: ";
//cin>>num;
//int i=1;
//for(;i<=12;i++){
//	cout<<num<<"*"<<i<<"="<<num*i<<endl;
//}

// int num;
// cout<<"Enter the number upto where you want to calculate sum: ";
// cin>>num;
// int i=1;
// int sum=0;
// for(;i<=num;i++){
// 	sum+=i;
// }
// cout<<"Sum of first "<<num<<" natural numbers is: "<<sum<<endl;

//for(int i=1;i<=4;i++){

//	for(int j=1;j<=4;j++){
//		cout<<"*";
//		cout<<" ";
//	
//	}
//	cout<<endl;
//
//int n=5;
//for(int i=0;i<=n;i++){
//
//	for(int j=n;j>i;j--){
//		cout<<"*";
//		cout<<" ";
//	}
//	cout<<endl;
//}
int num; 
cout<<"Enter the number whose factorial you want to print: ";
cin>>num;
int i=1;
int factorial=1;
while(num<0){
	cout<<"The number you entered is negative! Try Again!"<<endl;
	cout<<"Enter number: ";
	cin>>num;
}
//
for(;i<=num;i++){

	factorial*=i;
}
cout<<"Factorial of "<<num<<" is : "<<factorial;








}
	
	
	
	
	
	
	
	
