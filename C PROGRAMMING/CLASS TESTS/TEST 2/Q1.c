//WAP to calculate electricity bill
//For 1-50 units-30 rs/unit
//For 51-150 units-40 rs/unit
//For 151 and above units-50 rs/unit
#include<stdio.h>

void main(){
	int units,Bill;
	printf("Enter The No of Units :-");
	scanf("%d",&units);
	if(units<=0){
		printf("Enter the correct unit\n");
	}
	else if(units>=1 && units<=50){
		Bill=units*30;
		printf("Your units :- %d\n",units);
		printf("You have to pay bill 30 rs/unit\n");
		
	}
	else if(units>=51 && units<=150){
		Bill=units*40;
		printf("Your units :- %d\n",units);
		printf("You have to pay bill 40 rs/unit\n");
	}
	else if(units>=151){
		Bill=units*50;
		printf("Your units :- %d\n",units);
		printf("You have to pay bill 50 rs/unit\n");
	}
	else{
		printf("Enter the correct unit\n");
	}
	printf("The Electricity Bill Payable is : %d Rs\n",Bill);
}