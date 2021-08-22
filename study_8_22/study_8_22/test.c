#include <stdio.h>

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//p2指向的是a的地址 是常量字符串，不允许被修改
//	//指针数组 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 指向数组
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}
//数组参数、指针数组
       //一维数组传参
//void test1(int arr[10])
//{}
//void test1(int arr[])
//{}
//void test1(int*arr)
//{}
//void test2(int*arr[5])
//{}
//void test2(int*arr[])
//{}
//void test2(int**arr)
//{}
//int main()
//{
//    int arr[10];//整型数组
//    int* arr2[5];//指针数组
//    test1(arr);
//    test2(arr2);
//    return 0;
//}
        //二维数组传参
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
////void test(int arr[3][])//二维数组列不能省略 err
////void test(int arr[][])//与上面的问题一样 err
////void test2(int*arr)//err
////void test2(int**att)//err
//void test2(int(*arr)[5])//二维数组传过来的是一个指向数组的指针
//{}
//
//int mian()
//{
//    int arr[3][5] = { 0 };
//    test(arr);
//    test2(arr);
//    return 0;
//}
    //指针传参
//void test(int *p)
//{}
//int mian()
//{
//    int a = 10;
//    test(&a);
//    int* p1 = &a;
//    test(p1);
//
//    return 0;
//}
    //二级指针传参
//void test(int **p)
//{}
//int mian()
//{
//    int* ptr;
//    int** p = &ptr;
//    test(&ptr);
//    test(p);
//    int* arr[4];
//    test(arr);//二级指针可以接收指针数组的数组名
//    
//    return 0;
//}

//函数指针---指向函数的指针
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //printf("%d",Add(a, b));
//    //注意与数组的区别 &函数名==函数名  完全一样都是函数的地址
//    //printf("%p\n", &Add);
//    //printf("%p\n", Add);
//    //int*pa(int,int)  = Add;//err  p先与（结合了
//    int(*pa)(int, int) = Add;
//    printf("%d\n", (*pa)(2, 3));
//    printf("%d\n",pa(2,3));
//    return 0;
//}
//*((void (*)())0)()  //把0强制类型转换成：void(*)()函数指针类型-0就是一个函数的地址，该代码调用了0地址处的函数

//void (*signal(int, void(*)(int)))(int);
////简化
//typedef void(*ptf_1)(int);//类型简化
//ptf_1 signal(int,prf_1);

