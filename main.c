#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "person/person.h"

 Person *person ;
int main(int argc, char **argv){
     
     printf(" id = %d  \t name =%s ", person[0].id, person[0].name);
     printf("\nmain was called");
}
static int initFloatArr(int length)
{
	float* intArr = (float*) malloc(100 * sizeof(float));
     for(int i=0;i<10;i++){
      *(intArr)=i*100;
  }
   // printf("%s",string);
	return 0;
}
