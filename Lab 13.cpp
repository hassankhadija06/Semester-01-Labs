#include<iostream>
using namespace std;
void swapnumbers(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main(){
	//program no.01
//	int num=78;
//	int *ptr=&num;
//	cout<<"The value at *ptr is "<<*ptr<<endl;

    //program no.02
//	int num=2;
//	int *ptr=&num;
//	cout<<"Old value of number "<<"is"<<num<<endl;
//	*ptr=20;
//	
//	cout<<"Modified value of number "<<"is"<<*ptr;
//	
   //program no.04
//   int arr[3]={1,2,3};
//   int *ptr=arr;
//   for(int i=0;i<3;i++){
//   	cout<<"Value at *ptr is"<<*ptr<<endl;
//   	ptr++;
//   }
	
	//program no.05
//	int *ptr=NULL;
//	if(ptr==NULL){
//		cout<<"This is a null pointer!"<<endl;
//	}
	
	//program no.06
//	void *ptr;
//	int num=10;
//	ptr=&num;
//	cout<<*(int *)ptr;



//program no.03
 int num1=5;
 int num2=6;
 cout<<"Before swapping: "<<num1<<" "<<num2<<endl;
 swapnumbers(&num1,&num2);
 cout<<"After swapping: "<<num1<<" "<<num2<<endl;

	
	
	
	
	
	
}