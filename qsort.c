#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//ð������
//����
//void bubble_sort(int* p, int sz)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (*(p + j) > *(p + j + 1))
//			{
//				tmp = *(p + j);
//				*(p + j) = *(p + j + 1);
//				*(p + j + 1) = tmp;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//
//}



//qsort ��������
//_ACRTIMP void __cdecl qsort(
//	_Inout_updates_bytes_(_NumOfElements* _SizeOfElements) void* _Base,  //Ҫ����������е�һ��Ԫ�صĵ�ַ
//	_In_                  size_t _NumOfElements,                         //Ԫ�ظ���
//	_In_                  size_t _SizeOfElements,                        //Ԫ�ش�С
//	_In_                _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction //�Ƚϴ�������������Ԫ�صĺ���
//);





//�ȽϺ���
//int intcmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int (*cmp)(int*, int) = &intcmp;
//
//	//����
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	
//	//��ӡ
//	int i = 0;
//	for(i = 0; i < sz; i++)
//	printf("%d", arr[i]);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//};
////
////
//int CmpByAge(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int CmpByName(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//void test1()
//{
//	//ʹ��qsort��������ṹ������
//	struct Stu s[] = { {"zhangsan",30},{"lisi",34},{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), CmpByAge);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), CmpByName);
//}

//int main()
//{
//	test1();
//	return 0;
//}


//ģ��qsortʵ��һ��ð�������ͨ���㷨


//void swap(char* e1, char* e2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *(e1 + i);
//		*(e1 + i) = *(e2 + i);
//		*(e2 + i) = tmp;
//	}
//}
//
//
//void bubble_sort (void* base, int num, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz, sizeof(arr[0]), CmpByAge);
//	return 0;
//}


