#include <iostream>
#include <cstring>

using namespace std;
int main()
{
////	TASK 1
//	int num;
//	cout<<"Please enter the number"<<endl;
//	cin>>num;
//	cout<<"The factors are: ";
//	for(int f=1; f<=num; f+=1){
////		to put a full stop at the end instead of a comma
//		if(f==num){cout<<f<<"."; break;}
//		if(num%f == 0){cout<<f<<", ";}
//	}
//	
//	
////	TASK 3
//	int x;
//	cout<<"Please enter the number"<<endl;
//	cin>>x;
//	if(x>10 && x<20){cout<<1<<endl;}
//	else{cout<<0<<endl;}
//	
////	TASK 4
//	int n;
//	int prime;
//	cout<<"Please enter the number"<<endl;
//	cin>>n;
//	for(int i=n; i>=2; i-=1){
//		for(int j=2; j<=i; j+=1){
//			if(i%j==0 && i==j){prime = j;}
//			if(i%j==0){break;}
//			}
//		if(prime == i){break;}
//		}
//	cout<<"The largest prime is: "<<prime<<endl;	
//
////	TASK 5
//	char st1[10];
//	char st2[10];
//
//	cout<<"Please enter the strings"<<endl;
//	cin>>st1;
//	cin>>st2;
//	int p = strlen(st2)-1;
//	char st3[p];
//	if(strcmp(st1, st2)==0){
//		for(int i=0; i<10; i+=1){
//			st3[p]=st2[i];
//			p=p-1;}	
//		cout<<"The reversed string is: "<<st3<<endl;}
//	else{cout<<"the strings are not the same"<<endl;}
//	
////	TASK 6
//	int dd;
//	int dv;
//	int q;
//	int rem;
//	int dd2;
//	cout<<"a and b in a/b?? (a must be greater than b)"<<endl;
//	cin>>dd>>dv;
//	for(int i=0; i<=dd; i+=1)
//		if((dd-i)%dv==0){rem=i; dd2=dd-i; break;}
//	for(int j=0; j<=dd2; j+=1)
//		if(j*dv == dd2){q=j; break;}
//		cout<<"The quotient is "<<q<<endl;
//		cout<<"The remainder is "<<rem<<endl;

////	TASK 7
//	int ls;
//	char str[ls];
//	cout<<"Enter the string"<<endl;
//	cin>>str;
//	for(int i=0; i<=ls; i+=1){
//		if(str[i] == str[ls-i]){str[ls-i] = ' ';}
//	}
//	for(int j=0; j<=ls; j+=1){
//		if(str[j]==' '){str[j]=str[j+1]; str[j+1]=' ';}
//	}
//	cout<<"The resultant string is: "<<str;

//	TASK 8
	int l;
	cout<<"How many more elements do you want to add?"<<endl;
	cin>>l;
	int a[5+l] = {1,2,3,4,5};
	cout<<"Input the elements: "<<endl;
	for(int i=5; i<5+l; i+=1){
	cin>>a[i];}
	cout<<"{";
	for(int j=0; j<5+l; j+=1){
//	to prevent adding a comma after the final term
		if(j==4+l){cout<<a[j];break;}
		cout<<a[j]<<", ";}
	cout<<"}";
//	
////	TASK 9
//	int trip[3] = {0,0,0};
//	int x;
//	int l;
//	cout<<"Please enter the integer"<<endl;
//	cin>>x;
//	cout<<"How many integers are to be tested?"<<endl;
////	length of string
//	cin>>l;
//	int string[l];
//	cout<<"Input the elements: "<<endl;
//	for(int i=0; i<l; i+=1){
//	cin>>string[i];}
//	for(int i=0; i<l; i+=1){
//		for(int j=0; j<x; j+=1){
////	to prevent duplicate numbers
//		  	if(j==i){continue;}
//		  	if(j==trip[2]){continue;}
//			for(int k=0; k<x; k+=1){
////	to prevent duplicate numbers
//				if(k==j){continue;}
//				if(k==i){continue;}
//				if(string[i] + string[j] + string[k] == x){
//				trip[0]=string[i];
//				trip[1]=string[j];
//				trip[2]=string[k];
//				break;}	
//			}
//		}
//	}
//	if(trip[1]==0&&trip[2]==0&&trip[3]==0){cout<<"There is no triplet in the given array that adds up to "<<x<<endl;}
//	else{
//		cout<<"The found triplet is: {";
//		for(int j=0; j<3; j+=1){
//			cout<<trip[j]<<' ';}
//			cout<<"}";
//	}
//
////	TASK 10
//	int a[6];
//	int bub[6];
//	int p = 5;
//	cout<<"Input the elements: "<<endl;
//	for(int i=0; i<6; i+=1){
//	cin>>a[i];}
//	cout<<"The given array is: {";
//	for(int c=0; c<6; c+=1){
//	cout<<a[c]<<' ';}
//	cout<<"}";
//	for(int z=0; z<6; z+=1){
//		for(int j=0; j<6; j+=1){
//				if(a[j]>=a[0] && a[j]>=a[1] && a[j]>=a[2] && a[j]>=a[3] && a[j]>=a[4] && a[j]>=a[5]){
//			bub[p]=a[j]; a[j]=0; p=p-1;}
//		else{continue;}
//		if(a[0]==0 && a[1]==0 && a[2]==0 && a[3]==0 && a[4]==0 && a[5]==0){break;}
//		}
//	}
//	cout<<"The bubble sorted array is: {";
//	for(int b=0; b<6; b+=1){
//	cout<<bub[b]<<' ';}
//	cout<<"}";
//
// 	return 0;
}
