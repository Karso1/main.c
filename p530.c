//数组指针

#include<stdio.h>
int main()
{
    char *arr[5]= {0};
    char *(*pc)[5] = &arr;

    char ch ='w';
    char *p1 = &ch;
    char **p2 = &p1;//二级指针放一级指针变量的地址
}
//数组名通常表示的都是数组首元素的地址
//但是有两个例外：
//1，sizeof（数组名），这里的数组名表示整个数组，计算整个数组的大小
//2，&数组名，表示的依然是整个数组，所以&数组名去除的是整个数组的地址
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]= &arr;//这里的【】里必须填上上面的十个元素10，否则默认为0，不能省略10

}



