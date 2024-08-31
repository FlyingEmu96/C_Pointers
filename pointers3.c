#include <stdio.h>

int main() {

    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d:\n", sizeof(int));
    printf("Adress = %d, value = %d\n",p,*p);
    printf("Adress = %d, value = %d\n",p+1,*(p+1));
    char *p0;
    p0 = (char*)p;
    printf("size of integer is %d:\n", sizeof(char));
    printf("Adress = %d, value = %d\n",p0,*p0);
    printf("Adress = %d, value = %d\n",p0+1,*(p0+1));
    return 0;
}
