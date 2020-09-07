#include "main.h"
#include "stu.h"
#include "admin.h"

int main(){
	printf("Welcome Login  Stu Management Sys\n");
	printf("Please Choice  Your Identity\n");
	printf("\t\t1------->admin\n");
	printf("\t\t2------->stu\n");
	int choice = 0;
	scanf("%1d", &choice);	

	switch (choice){
		case 1:
			admin_login();
			break;
		case 2:
			stuDeal();
			break;
		default:
			printf("Input err\n");
			break;
	
	}

}
