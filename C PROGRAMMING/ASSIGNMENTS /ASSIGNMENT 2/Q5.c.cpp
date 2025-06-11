//Accept the price from user. Ask the user if he is a student (user may say y or n). 
//If he is a student and he has purchased more than 500 than discount is 20% otherwise discount is 10%.
//But if he is not a student then if he has purchased more than 600 discount is 15% otherwise there is not discount.

#include <stdio.h>

int main(){
	
	int price;
	float discprice;
	int totalprice;
	char ans;
	
	printf("Are you a Student ?");
	scanf(" %c", &ans);
	
	printf("Enter the Price :");
	scanf("%d/n", &price);
	
	 if (ans == 'y' || ans == 'Y') {
        if (price > 500) {
            discprice = price * 0.20;
			totalprice = price - discprice; 
        } else {
            discprice = price * 0.10;
			totalprice = price - discprice; 
        }
    } 
	else if (ans == 'n' || ans == 'N') {
        if (price > 600) {
            discprice = price * 0.15;
			totalprice = price - discprice;
        } 
    else {
    	totalprice=price;
	}    
    }
    if(totalprice!=price){
    printf("Your actual price is : %d\n",price);
    printf("Discounted price is: %.2f\n",discprice);
    printf("Total price is: %d\n",totalprice);
    }
    else{
    	 printf("Total price is: %d\ with no discount",price);
	}
	return 0;
}
