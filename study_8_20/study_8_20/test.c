#include <stdio.h>
////ָ������ ������ �������ָ��
//int	main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�������-ָ������
//	char* pch[5];//����ַ�ָ�������-ָ������
//
//	return 0;
//}

//�ͼ��÷�
//int main()
//{
//	int	a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };//ָ������
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
	for ( i = 0; i < 3; i++)//С��Խ��
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
