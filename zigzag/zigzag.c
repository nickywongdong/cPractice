#include <stdio.h>
#include <stdlib.h>


int compare (const void * a, const void *b){
   return ( *(int*)a - *(int*)b );
}

int main(){
   int x = 0, i, j, temp;
//input array:
  int numArray[] = {25, 8, -2, 25, 2, 4, 6};
  int size = sizeof(numArray)/sizeof(int);
  int *tempArray = malloc(sizeof(int)*size);

  //first sort the array (this is something like bubblesort
  /*for(i=0; i<sizeof(numArray)/sizeof(int) - 1; i++){
     if(numArray[i] > numArray[i+1]){
	temp = numArray[i];
	numArray[i] = numArray[i+1];
	numArray[i+1] = numArray[i];
     }
  }*/

  //using built in qsort function
  qsort(numArray, sizeof(numArray)/sizeof(int), sizeof(int), compare);
  /*for(i=0; i<sizeof(numArray)/sizeof(int); i++){
     printf("%d ", numArray[i]);
  }
  printf("\n");*/


  for(i=0; i<sizeof(numArray)/sizeof(int) - 1; i++){
     tempArray[x] = numArray[size - (i+1)];	//stores large number, pos-increment x
     x++;
     tempArray[x] = numArray[i];	//stores next smallest number, post inrement x
     x++;
  }

  //output result
  printf("intput array: \n");
  for(i=0; i<size; i++){
     printf("%d ", numArray[i]);
  }
  printf("\n");
  
  printf("output array: \n");
  for(i=0; i<size; i++){
     printf("%d ", tempArray[i]);
  }
  printf("\n");

   return 0;
}
