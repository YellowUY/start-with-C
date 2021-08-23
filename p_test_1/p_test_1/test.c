#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n",sizeof(a));//4*4 16
	//printf("%d\n", sizeof(a+0));//4
	//printf("%d\n", sizeof(*a));//4
	//printf("%d\n", sizeof(a+1));//4
	//printf("%d\n", sizeof(a[1]));//4
	//printf("%d\n", sizeof(&a));//4
	//printf("%d\n", sizeof(*&a));//16
	//printf("%d\n", sizeof(&a+1));//4
	//printf("%d\n", sizeof(&a[0]));//4
	//printf("%d\n", sizeof(&a[0]+1));//4 
	
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n",strlen(arr));//随机值  strlen要找\0
	//printf("%d\n", strlen(arr+0));//随机值
	////printf("%d\n", strlen(*arr));// err 非法访问
	////printf("%d\n", strlen(arr[1]));// err 非法访问
	//printf("%d\n", strlen(&arr));//随机值
	//printf("%d\n", strlen(&arr+1));//随机值-6
	//printf("%d\n", strlen(&arr[0] + 1));//随机值-1
	//char arr[] = "abcdef";// a b c d e f \0
	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr+0));//4
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4
	//printf("%d\n", sizeof(&arr+1));//4
	//printf("%d\n", sizeof(&arr[0]+1));//4
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//err
	//printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//随机值
	//printf("%d\n", strlen(&arr[0]+1));//5 
	return	0;
} 