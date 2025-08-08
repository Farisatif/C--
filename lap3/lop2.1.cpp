#include <iostream>
using namespace std;

void printarry (){
	
	int arr [10];
	int x;
	int p = 1;
	
	for(x = 0; x <10; x++){
		
	
cout<<"Enter ["<<x+1<<"] Number : "<<endl;
cin>>arr[x];
p*=arr[x];
cout<< p <<endl;

	}	
	
}

int main()
{

	printarry();

	


	return 0;
}