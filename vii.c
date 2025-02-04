#include<stdio.h>
int reverse(int arr[],int size)
{int start = 0;
int end = size-1;
while (start<end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
}


}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArray(arr,size);
    printf("\n");
    reverse(arr,size);
    printArray(arr,size);
    return 0;
}