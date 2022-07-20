CC = gcc

flags = -std=c99 -O3 -fivopts -flax-vector-conversions -funsafe-math-optimizations -msse4.2 
vecflags = -loop-vectorize -fopt-info-vec=vec_report.all
libs = -lm
noopt = -O0

all : runvec


runvec : tscvec.o dummy.o
	$(CC) $(noopt) dummy.o tscvec.o -o runvec $(libs)

tscvec.o : tsc.c
	rm -f report.lst
	$(CC) $(flags) $(vecflags) -c -o tscvec.o tsc.c 2> reportgcc.lst
	cat vec_report.all

tsc.s : tsc.c dummy.o
	$(CC) $(flags) dummy.o tsc.c -S 

dummy.o : dummy.c
	$(CC) -c dummy.c

clean :
	rm -f *.o runnovec runvec *.lst *.s *.all
