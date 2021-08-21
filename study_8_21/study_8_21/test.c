//数组指针—指针
#include <stdio.h>
//int main()
//{
//	int* p = NULL;//p是整型指针-指向整型的指针-可以用来存放整型的地址
//	char* pc = NULL;//pc是字符指针-指向字符的指针-可以用来存放字符的地址
//	int arr[ ] = { 0 };//arr是数组名，首元素地址，==&arr[a],   &arr是数组的地址
//	int(*parr)[] = &arr;//数组指针- 
//
//	return 0;
//}
int main()
{
	char* arr[5];//此数组 名 arr ， 共有五个元素，每个元素的类型是char*
	char* (*pa)[5]=&arr;//注意： char (*p)[5]=&arr
	return 0;
}
//困了，划水。