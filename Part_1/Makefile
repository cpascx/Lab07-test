BINARIES=loop_vect 
CC=g++
GCC_MISSED=-O3 -g -fno-reorder-functions -fno-inline -fopt-info-vec-missed
GCC_VECT=-O3 -g -fno-reorder-functions -fno-inline -fopt-info-loop-optimized

all:	${BINARIES}

loop_vect:	loop_vect.cpp
		${CC} ${GCC_MISSED}=loop_vect.miss loop_vect.cpp -o loop_vect
		${CC} ${GCC_VECT}=loop_vect.opt loop_vect.cpp -o loop_vect
		cat loop_vect.opt



run:	
		./loop_vect
		cat loop_vect.miss
		objdump -d loop_vect > objdump_loop_vect.txt
		

		
miss:
		cat *.miss

opt:
		cat *.opt

clean:	
		rm ${BINARIES} *.miss *.opt *txt || true
		

