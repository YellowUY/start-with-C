#define _CRT_SECURE_NO_WARNINGS 1
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

//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    //ָ������
//    int a = 10;
//    int b = 20;
//    int* arr[5];
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ�������
//    int(*p)(int, int) = Add;//Sub Mul Div
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div }; //����ָ�������
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d\n", parr[i](2, 3));
//    }
//    return 0;
//}
//char* (*pf)(char*, const char*)
//char* (*pfarr[4])(char*, const char*);
//������
void menu()
{
    printf("*******************************\n");
    printf("**1.Add*****************2.Sub**\n");
    printf("**1.Mul*****************2.Div**\n");
    printf("********     0.Exit    ********\n");
    printf("*******************************\n");
}
int Add(int x, int y)
{
    return x + y;
}
int Sub(int x, int y)
{
    return x - y;
}
int Mul(int x, int y)
{
    return x * y;
}
int Div(int x, int y)
{
    return x / y;
}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//      
//        switch (input)
//        {
//        case 1:
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Add(x, y));
//            break;
//        case 2:
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input); 
//}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int (*pfArr[5])(int, int) = {0,Add,Sub,Mul,Div};//pfArr��һ������ָ������-ת�Ʊ�
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input); 
//        if (input >= 1 && input <= 4)
//        {
//            printf("����������������:>");
//            scanf("%d%d", &x, &y);
//            int ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("�˳�\n");
//        }
//        else
//        {
//            printf("ѡ�����\n");
//        }
//    } while (input);
//    return 0;
//}
//�ص�����-----------����һ��ͨ������ָ����õĺ���
//void Calc(int (*pf)(int,int))
//{
//    int x = 0;
//    int y = 0;
//    printf("����������������:>");
//    scanf("%d%d", &x, &y);
//    printf("%d\n", pf(x, y));
//}
//int main()
//{
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//      
//        switch (input)
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("�˳�����\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input); 
//}

//ָ����ָ�������ָ��

//����ָ��
//int(*p)()
//����ָ������
//int (*pArr[])()
// ppArr=&pArr
// int (*��*ppArr��[])()
//����ָ������ָ��

