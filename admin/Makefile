all:admin.o  stu.o main.o
	cc -o  all  main.o  admin.o  stu.o

main.o: main.h  main.c
	cc -c main.c  main.h 
stu.o: stu.h  stu.c
	cc -c stu.h stu.c
admin.o:admin.h  admin.c
	cc -c admin.h  admin.c

clean:
	rm -rf  *.o  all *.gch
