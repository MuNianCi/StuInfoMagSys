all:admin.o  stu.o main.o
	gcc -o  all  main.o  admin.o  stu.o

main.o: main.h  main.c
	gcc -c main.c  main.h 
stu.o: stu.h  stu.c
	gcc -c stu.h stu.c
admin.o:admin.h  admin.c
	gcc -c admin.h  admin.c

clean:
	rm -rf  *.o  all
