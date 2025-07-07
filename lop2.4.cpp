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
		
		int indexV;
		cout<<"Enter the Endex : "<<endl;
		cin>>indexV;
		
		if (indexV	< l){
			
		
		for(int i = numEle	;i >indexV ; i--){
			
			arrNum[i]=arrNum[i-1];
			
		}
		
		arrNum[indexV]=value;
		numEle++;
		
		printarry(arrNum , numEle);
		}
		
	}
		
		
	}
	
	return 0;
}
/*

Do you want to inseart in :

[1] the begining of Array
[2] End of the Array
[3] At any Position


*/