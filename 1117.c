#include<stdio.h>
void bubble_sort(int arr[],int len)
{
    int i,j,temp;
    for(i=0;i<len-1;i++)
        for(j=0;j<len-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }

}
int main()
{
    int arr[] = {1,2,3,4,5,56,7,78,8,2};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,len);
    for(int i =0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0
}