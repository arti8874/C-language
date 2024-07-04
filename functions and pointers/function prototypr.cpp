	#include<stdio.h>
	// prototype mean void ....something in this main works without any pair
	// main works without line by line
	int main(){
	void india();
	india();
	return 0;	
	}
	
	void india(){
	printf("you are in India\n");
	void australia(); 
	australia();
	return;
	}
	void australia(){
	printf("you are in australia\n ");
	void england();
	england();
	return ;
	}
     void england(){
	printf("you are in England\n"); // this line ending the line
	return;
     }




