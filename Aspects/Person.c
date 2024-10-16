
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include "person.h"

static  int length= 10;

static  __attribute__((constructor)) void initList() {
     person = calloc (length , sizeof(Person ));
     person[0].id=1425;
     person[0].name = calloc(20, sizeof(char)) ;
     
     strcpy(person[0].name, "this is a data");
     printf("init_method was called\n");
}

 __attribute__((destructor(1000)))  void finalizer(){
     free(person);
     printf("\n finalizer  was called\n");
}
  __attribute__((desctuctor(2000))) void stop(){
    
      printf("\n stop  was called\n");
}