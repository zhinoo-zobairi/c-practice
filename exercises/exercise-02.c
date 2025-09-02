
/*
Title: Exercise 02 – Pointer Redirection and Memory Lifecycle

Learning Objective: Practice handling ownership transfer and memory cleanup when a pointer is updated indirectly through a function.

Problem Statement:
You are given a function that updates a pointer from the caller to point to a new memory region. Your job is to ensure that memory is managed responsibly whenever the pointer is updated.

Scenario Checks:
1. After the function runs, the caller’s pointer should point to a fresh allocation.
2. If the pointer was already pointing to something, that memory should no longer be leaked.
3. Calling the function again should clean up the previous allocation properly before replacing it.
4. The function must **only** rewire the pointer — not touch the contents of what it points to.
5. Consider edge cases like uninitialized pointers or const-restricted usage.
*/


#include <stdio.h>
#include <stdlib.h>

void change_memory(int** pptr, int size){
  if (*pptr != NULL){
    free(*pptr);
  }
  *pptr = malloc(sizeof(int) * size); // At this point, ptr is pointing to a valid memory block of 10 integers on the heap. But all 10 integers contain garbage (random memory), unless we explicitly assign something.
  if (*pptr == NULL) return;
  for (int i = 0; i < size; i++){   // both allocate and initialize, 
    (*pptr)[i] = i;   // I don't need to write the **pptr because we know that [] is per se one level of dereferncing.
  }
}

int main(void) {
    int* ptr = NULL;
    int** pptr = &ptr;
    change_memory(pptr, 10);    // Or change_memory(&ptr, 10);

    for (int i = 0; i < 10; i++)
    {
      printf("%d\n", ptr[i]);
    }
    
    free(ptr);    // We free what we malloc'd
    return 0;
}
