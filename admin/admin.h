#ifndef  _ADMIN_H_
#define  _ADMIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct  admin{
	int  id;
	char name[64];
	char pwd[32];
	char rsv[1024];
};

int admin_login();


#endif

