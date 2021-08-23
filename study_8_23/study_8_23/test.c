#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//回调函数--通过函数指针调用的函数。把函数的指针（地址），作为参数传递给另外一个函数，指针被用来调用其所指向的函数。
// 
//qsort函数的使用
         //冒泡排序--两两相邻的元素比较，
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		if(arr[i]>arr[i + 1]);
//		{
//			int a = 0;
//			a = arr[i];
//			arr[i] = arr[i + 1];
//			arr[i + 1] = a;
//		}
//	}
//		
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) 
//		{
//			if (arr[j] > arr[j + 1]);
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//qsort-库函数-排序
//quick sort-快速排序算法
//void* p  不限制类型的指针，可以接收任意类型的地址，不能进行解引用操作，因为不知道访问几个字节
//也不能进行+ - 整数的操作
//#include <stdlib.h>
//struct Stu
//{
//	char name[20];
//	int  age;
//};
//int cmp_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_by_name(const void* e1, const void* e2)
//{
//	//名字比较是比较字符串
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int main()
//{
//	struct Stu s[3] = { {"zhangsan",10},{"lisi",18},{"wangwu",16}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_by_name);
//    return 0;
//
//}