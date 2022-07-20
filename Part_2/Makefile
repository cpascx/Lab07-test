BINARIES= test_gprof 
CC=gcc
GCC_OPTIONS= -pg 
all:	${BINARIES}
 test_gprof: test_gprof.c
		${CC} ${GCC_OPTIONS} test_gprof.c test_gprof_new.c -o test_gprof
		



run:	
		./test_gprof
		gprof test_gprof gmon.out > analysis.txt
		

		

clean:	
		rm ${BINARIES} *.txt *.out || true
		

