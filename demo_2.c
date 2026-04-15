#include <stdio.h>

int main(){
	int term1 = 0;
	int term2 = 1;
	int fibn = 0;
	int i;
	int length;
	
	printf("Enter the amount: ");
	
	while(scanf("%d", &length) != 1) {
		printf("Invalid input, try again: ");
		while(getchar() != '\n');
	}
	
	for(i=0; i<length; i++){
		fibn = term1 + term2;
		printf("%d", fibn);
		
		term1 = term2;
		term2 = fibn;
		
		if(i !=(length - 1)){
 			printf(",");
 		}
 		else printf("\n");
		
	}
}




int main() {
	int celcius;
	int fahrenheit; //celcius x 1.8 + 32
	int kelvin; // celcius - 273
	
	printf("Enter the celcius value:");
	while(scanf("%d", &celcius) != 1) {
		printf("Invalid number, try again: ");
		while(getchar() != '\n');
	}
	
	kelvin = celcius - 273;
	fahrenheit = celcius*1.8 + 32;
	
	printf("Fahrenheit: %d\n", fahrenheit);
	printf("Kelvin: %d\n", kelvin);
	
	
}


int main(){
	int term1 = 0;
	int term2 = 1;
	int fibn = 0;
	int length;
	int i;
	
	printf("Enter the length of the sequence:");
	while(scanf("%d", &length) != 1) {
		printf("Invalid number, try again: ");
		while(getchar() != '\n');
	}
	
	for(i=0; i<length; i++) {
		fibn = term1 + term2;
		printf("%d", fibn);
		
		term1 = term2;
		term2 = fibn;
		
		if(i !=(length - 1)){
 			printf(",");
 		}
 		else printf("\n");
	}
}




int main(){
	
	int array1[] = {38,42,63,28,45,76,87,23,45,12,78,11,45,28,28,38,42,38,42}; //19 elements
	int i;
	int count = 0;
	int to_find;
	
	printf("Enter a number: ");
	
	while(scanf("%d", &to_find) != 1) {
		printf("Invalid number, try again: ");
		while(getchar() != '\n');
	}
	
	for(i=0; i<19; i++){
		if(array1[i] == to_find) {
			count++;
		}
	}
	
	printf("There are %d many of the number %d \n", count, to_find);
	return 0;
	
}



int main(){
	int array1[] = {38,42,63,28,45,76,87,23,45,12,78,11,45,28,28,38,42,38,42}; //19 elements
	int i;
	int max;
	max = array1[0];
	
	for (i=0; i < 19; i++){
		if(array1[i] > max) {
			max = array1[i];
		}
	}
	
	printf("Maximum is: %d", max);
	return 0;
}



int main () {
	int array1[] = {38,42,63,28,45,76,87,23,45,12,78,11,45,28,28,38,42,38,42}; //19 elements
	int i;
	int min;
	min = array1[0];
	
	for(i=0;i<19;i++){
		if(array1[i] < min) {
			min = array1[i];
		}
	}
	printf("Minimum is: %d", min);
	return 0;
}

