#include <stdio.h>

int main() {

    int a;    // Declare an integer variable 'a'
    int *p;   // Declare a pointer 'p' that will hold the address of an integer

    a = 10;   // Assign the value 10 to 'a'
    printf("Value of a: %d\n", a); // Output: 10

    p = &a;   // Assign the address of 'a' to pointer 'p'
    
    *p = 12;  // Dereference 'p' and assign the value 12 to the address 'p' points to (which is 'a')
    
    // Printing the values and addresses
    printf("Address stored in p (address of a): %p\n", (void *)p); // Output: address of 'a'
    printf("Value at address stored in p (*p): %d\n", *p); // Output: 12 (value of 'a')
    printf("Address of a: %p\n", (void *)&a); // Output: address of 'a' (should match p)

    int b = 20;   // Declare a new integer 'b' and assign it the value 20

    *p = b;   // Assign the value of 'b' to the address 'p' points to (which is still 'a')
    
    // Re-print the values after changing the value at the address 'p' points to
    printf("Address stored in p (address of a): %p\n", (void *)p); // Output: address of 'a' (unchanged)
    printf("Value at address stored in p (*p): %d\n", *p); // Output: 20 (new value of 'a')
    printf("Value of a after modification: %d\n", a); // Output: 20 (a is now 20)

    return 0;
}
