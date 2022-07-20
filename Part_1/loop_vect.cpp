#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int loop(){
        int array1[10000];
        int array2[10000];
        long array3[10000];
        long arraySum = 0;
        srand(time(NULL));

        for (int i = 0; i < 10000; i++) {
                array1[i] = (rand()% 2001) - 1000;
                array2[i] = (rand()% 2001) - 1000;
                array3[i] = array1[i] + array2[i];
                        arraySum += array3[i];
        }
        return arraySum;
}
int foo(){
        return 0;
}
int main() {
        int sum=loop();
        foo();
        printf("The total array sum is: %li\n", sum);

return 0;
}
