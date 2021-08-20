#include <stdio.h>
////指针数组 是数组 用来存放指针
//int	main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组-指针数组
//	char* pch[5];//存放字符指针的数组-指针数组
//
//	return 0;
//}

//低级用法
//int main()
//{
//	int	a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//指针数组
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		printf("%d\n", arr[i]);
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };
	int i = 0;
	for ( i = 0; i < 3; i++)//小心越界
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ",*(p[i] + j));

		}
		printf("\n");
	}
	return	0;

}
