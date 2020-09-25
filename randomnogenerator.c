# include <stdio.h> 
# include <stdlib.h> 
# include <time.h> 
# include <math.h> 

int main() 
 {
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("The number randomly generated is : %d", number);
    return 0; 
 }