#include <stdio.h>

int main() {
    // Pointer to pointer concept

    int x = 5;          // Declare an integer variable x and initialize it to 5
    int *p;             // Declare a pointer to an integer p
    p = &x;             // Assign the address of x to p
    *p = 6;             // Dereference p and set the value at the address it points to (x) to 6

    int **q;            // Declare a pointer to a pointer to an integer q
    q = &p;             // Assign the address of p to q

    int ***r;           // Declare a pointer to a pointer to a pointer to an integer r
    r = &q;             // Assign the address of q to r

    // Print statements to show what's happening
    printf("x = %d\n", x);                // Value of x
    printf("p = %p\n", (void *)p);        // Address stored in p (which is the address of x)
    printf("*p = %d\n", *p);              // Value pointed to by p (which is the value of x)
    printf("q = %p\n", (void *)q);        // Address stored in q (which is the address of p)
    printf("*q = %p\n", (void *)*q);      // Value pointed to by q (which is the address of x)
    printf("**q = %d\n", **q);            // Value pointed to by the pointer pointed to by q (which is the value of x)
    printf("r = %p\n", (void *)r);        // Address stored in r (which is the address of q)
    printf("*r = %p\n", (void *)*r);      // Value pointed to by r (which is the address of p)
    printf("**r = %p\n", (void *)**r);    // Value pointed to by the pointer pointed to by r (which is the address of x)
    printf("***r = %d\n", ***r);          // Value pointed to by the pointer pointed to by the pointer pointed to by r (which is the value of x)

    return 0;
}
