#include<iostream>
using namespace std;
int main(){
	
//program no.1
//int rollno[5]={23,24,25,26,27};
//cout<<"The roll numbers are: "<<endl;
//for(int i=0;i<5;i++){
//	
//	cout<<rollno[i]<<endl;
//}

//program no. 02
//int num;
//cout<<"Enter any number n: ";
//cin>>num;
//int arr[num];
//cout<<"The numbers you entered are: "<<endl;
//for(int i=0;i<num;i++){
//	cin>>arr[i];
//}
//cout<<"Numbers in reverse order: "<<endl;
//for(int i=num-1;i>=0;i--){
//	cout<<arr[i]<<endl;
//}


//program no. 03
//int arr[5]={12,14,16,18,20};
//int size=5;
//int sum=0;
//for(int i=0;i<5;i++){
//	
//	sum+=arr[i];
//}
//cout<<"Given Numbers are: ";
//for(int i=0;i<5;i++){
//	cout<<arr[i];
//	if(i<size-1){
//		cout<<",";
//	}
//}
//cout<<endl;
//cout<<"Sum of Numbers is: "<<sum<<endl;
//cout<<"Average of Numbers is: "<<(double)sum/5;

//program no. 04
//int arr[]={91,82,73,64,55,46,37,28};
//cout<<"Elements of Array: ";
//for(int i=0;i<8;i++){
//	cout<<arr[i]<<" ";
//}
//cout<<endl;
//int length=sizeof(arr)/sizeof(arr[0]);
//cout<<"Length of Given Array is : "<<length;

//program no.05
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//
//    int arr[size];
//    cout <<"Enter "<<size<<" numbers: "<< endl;
//    for (int i = 0; i < size; i++) {
//        cin >> arr[i];
//    }
//    int max = arr[0]; 
//    for (int i = 1; i < size; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    cout <<"The largest number in the array is: "<<max<< endl;

//2D Array
int i,j;
int arr[i][j]={{1,2,3,4},
                {5,7,7,8}};
for(int i=0;i<2;i++){
	for(j=0;j<4;j++){
		cout<<arr[i][j]<<" ";
	}
cout<<endl;
}
}
