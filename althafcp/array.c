#include<stdio.h>
int main() {
    int array[10] = { 10,20,30,40,50 }, i, lenght;
    lenght = sizeof(array) / sizeof(array[0]);
    for (i = 0; i < lenght;i++){
        printf("%d\t",array[i]);
    }
    return 0;
}