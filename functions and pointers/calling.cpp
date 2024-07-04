#include<stdio.h>

void england(){
	printf("you are in England\n"); // this line ending the line
	return;
}

void australia(){
	printf("you are in Australia\n");
	england(); //this line calling england 
	return;
}

void india(){
	printf("you are in India\n");
	australia(); // this line calling australia
	return;
}
int main(){
	india();
					return 0;	
}
