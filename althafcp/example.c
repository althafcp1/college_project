#include <stdio.h>

int main()
{
    int array[100], n,i,pos,ele,del;

    printf("Enter the size of the array:  ");
    scanf("%d", &n);

    printf("Enter the Elements of the arrray:\n");
    for(i=0 ; i <n ; i++)

    {
        scanf("%d" , &array[i]);
    }

    printf("Array before insertion:\n");
    for(i = 0; i < n; i++)

    {
        printf("%d ",array[i]);
    }

    printf("Enter the position where you want to insert: ");
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &ele);

    for (i=n-1; i >= pos - 1; i--)
    {
        array[i+1] = array[i];
    }

    array[pos - 1] = ele;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n Enter the position you want to delete: ");
    scanf("%d", &del);

for(i =  del - 1; i < n -1; i++)
{
    array[i] = array[i+1];
}
n--;

printf("array after deletion:\n");
for(i=0; i < n ; i ++)
{
    printf("%d ", array[i]);
}


return 0;
}