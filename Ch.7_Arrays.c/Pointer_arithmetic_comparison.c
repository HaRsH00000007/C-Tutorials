// Pointer Arithmetic :

/*

---> We can also subtract one pointer from another .

---> We can also compare 2 pointers .

*/

#include<stdio.h>
int main(){
    int age= 79;
    int _age= 78;
    int *ptr= &age;
    int *_ptr= &_age;

    printf(" %u , %udifference =%u \n", ptr, _ptr, ptr - _ptr);
    _ptr=&age;
    printf(" comparison= %u \n", ptr == _ptr);

    return 0;
}