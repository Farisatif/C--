#include <iostream>
using namespace std;

void printarry(int x[], int l){

cout<<"array Element are : "<<endl;
		for(int i = 0; i < l ;i ++){
			
			
			cout<<x[i]<<endl;
			
		}
}

int main()
{
	int l;
	cout<<"Enter Lunght of arry : "<<endl;
	cin>> l;
	
	int numEle;
	cout<<"Enter Element of arry : "<<endl;
	cin>>numEle;
	
	if(numEle<= l){
		
			int arrNum[l];
			cout<<"Enter the array elemnt : "<<endl;
			for (int i = 0 ; i < numEle ; i++){
				
				cin>>arrNum[i];
				
			}
	printarry(arrNum , numEle);
	if (numEle < l){
		
		int value;
		cout<<"Enter the new value : "<<endl;
		cin>>value;
		arrNum[numEle]=value;
		numEle++;
		
		printarry(arrNum , numEle);
		
		
	}
		
		
	}
	
	return 0;
}

