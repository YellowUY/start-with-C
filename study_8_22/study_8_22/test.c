#include <stdio.h>

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//p2ָ�����a�ĵ�ַ �ǳ����ַ������������޸�
//	//ָ������ ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� ָ������
//	int arr2[5];
//	int(*pa)[5] = &arr2;
//	return 0;
//}
//���������ָ������
       //һά���鴫��
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
//    int arr[10];//��������
//    int* arr2[5];//ָ������
//    test1(arr);
//    test2(arr2);
//    return 0;
//}
        //��ά���鴫��
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
////void test(int arr[3][])//��ά�����в���ʡ�� err
////void test(int arr[][])//�����������һ�� err
////void test2(int*arr)//err
////void test2(int**att)//err
//void test2(int(*arr)[5])//��ά���鴫��������һ��ָ�������ָ��
//{}
//
//int mian()
//{
//    int arr[3][5] = { 0 };
//    test(arr);
//    test2(arr);
//    return 0;
//}
    //ָ�봫��
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
    //����ָ�봫��
//void test(int **p)
//{}
//int mian()
//{
//    int* ptr;
//    int** p = &ptr;
//    test(&ptr);
//    test(p);
//    int* arr[4];
//    test(arr);//����ָ����Խ���ָ�������������
//    
//    return 0;
//}

//����ָ��---ָ������ָ��
//int Add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    //printf("%d",Add(a, b));
//    //ע������������� &������==������  ��ȫһ�����Ǻ����ĵ�ַ
//    //printf("%p\n", &Add);
//    //printf("%p\n", Add);
//    //int*pa(int,int)  = Add;//err  p���루�����
//    int(*pa)(int, int) = Add;
//    printf("%d\n", (*pa)(2, 3));
//    printf("%d\n",pa(2,3));
//    return 0;
//}
//*((void (*)())0)()  //��0ǿ������ת���ɣ�void(*)()����ָ������-0����һ�������ĵ�ַ���ô��������0��ַ���ĺ���

//void (*signal(int, void(*)(int)))(int);
////��
//typedef void(*ptf_1)(int);//���ͼ�
//ptf_1 signal(int,prf_1);

