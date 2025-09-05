/* 
Title: Exercise 05 – Understanding Pointer Ownership and Lifetime

Learning Objective: Grasp the implications of pointer ownership and the effects of const correctness in function parameters.

Problem Statement: Implement a function that takes a pointer to a pointer and modifies the value it points to, while also ensuring that the original pointer remains unchanged. Examine the behavior with const qualifiers.

Scenario Checks:
1. After calling the function, the original pointer should still point to its initial value, demonstrating that ownership was handled correctly.
2. The value pointed to by the pointer-to-pointer should reflect the changes made within the function, indicating proper dereferencing and modification.
3. If a const qualifier is applied to the pointer-to-pointer parameter, attempts to modify the value should result in a compilation error, enforcing const correctness.
4. Ensure that passing a NULL pointer to the function does not lead to undefined behavior, and that the function handles it gracefully without modifying the original pointer.
5. Confirm that the memory allocated for any new values is properly freed outside of the function to avoid memory leaks, reinforcing the importance of understanding ownership and lifetime.

  INSTRUCTIONS:
  - Implement your solution in this file below.
  - Do NOT add TODO markers; write your own minimal code.
  - Keep it focused on the pointer concept; no algorithms.
*/

#include <stdio.h>
#include <stdlib.h>

/*
In C, const always applies to the thing it’s adjacent to — and:
	•	If it’s next to a type (like int), that type is const.
	•	If it’s next to a *, then the pointer itself is const.
*/
void change_using_pptr(int** const pptr, int new_value){
  if (pptr == NULL || *pptr == NULL)
  {
    return;
  }
    **pptr = new_value;
}

int main(void) {
    int value = 10;
    int* ptr = &value;
    int** pptr = &ptr;
    change_using_pptr(pptr, 20);
    printf("%d\n", value);
    return 0;
}
