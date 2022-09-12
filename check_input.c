#include <stdio.h>

int main(){
	 char user_name [20];
	 char user_name2 [20];
	 int value;
	printf("enter the user name:");
	scanf("%s",user_name);
	printf("Reenter the user name: ");
	scanf("%s",user_name2);
	
	
	value = strcmp(user_name,user_name2);
	if(value==0){
		printf("user name is valid");
	}
	else {
		printf("user name is invalid");
	}
	return 0;
}                                                                                                                                                                
