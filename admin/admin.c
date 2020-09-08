#include "admin.h"

int  admin_login(){
	struct  admin   adm;
        int  fd;
	fd = open("./config.ini", 0600);
	if(fd < 0){
	    perror("open file err\n");
	    exit(-1);
	}
	printf("Please  Input  Your  Id\n");
	scanf("%4d", &adm.id);
	printf("Please  Input  Your  name\n");
	scanf("%s", adm.name);
	printf("Input info adm.id=[%d]\nadm.name=[%s]\n",adm.id,adm.name );

}
