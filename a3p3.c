// Lacy Hayes
// COP 3223C MWF
// 10.16.20
// Assignment 3 - Program 3
 
// program will calculate the average of the values in the array
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main () {
srand(time(0));
 
// declaring array
int num[100];

// initializing variables for sum, i, and average
float sum = 0, avg;

// for loop to assign each element a random number between one and one-hundred
for(int i = 0; i<100; ++i) {
num[i] = (int(rand() % 100)+1);

// calculating sum and average	
sum = sum + num[i];
avg = float(sum / 100);
}
// outputting the average
printf("Average = %.2lf", avg);
return 0;
}


