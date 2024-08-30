#include <stdio.h>

int main() {
    int a;
    int *p;
    p = &a;   // 'p' now points to the address of 'a'
    a = 5;    // Set value of 'a' to 5

    printf("Address stored in p (address of a): %p\n", (void *)p);
    printf("Address of a: %p\n", (void *)&a);
    printf("Address of p itself: %p\n", (void *)&p); // Address of pointer p
    printf("Value pointed to by p (*p): %d\n", *p);  // Dereference p to get value of 'a'
    
    *p = 8;   // Set the value at the address p is pointing to (which is 'a') to 8
    printf("New value of a: %d\n", a); // Should print 8

    return 0;
}
