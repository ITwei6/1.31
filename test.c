#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}
//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	total += money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}
//int main()
//{
//	int n;
//	int arr[100][100];
//	scanf("%d ", &n);
//	int i;
//	int j;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr1[10][10];
//	int arr2[10][10];
//	int i, j;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//			if (arr1[i][j] != arr2[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//void Move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�����ż��
//		while ((left < right)&& ((arr[left] % 2 == 1)))//���ȫ��������ȫ��ż�����ᵼ��left++����right--��Խ�磬�������ﻹ����Ҫ�Ľ�һ���ټ���left<right�������
//		{
//			
//				left++;//�ҵ�����++������
//		}
//		//�ұ�������
//		while ((left < right)&&((arr[right] % 2 == 0)))
//		{
//			
//				right--;//�ҵ�ż��--����ǰ��
//		}
//		//����
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;//��������Ҫ����ȥ
//		right--;
//}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	Move(arr, sz);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//typedef struct student
//{
//	int num;
//	char name[32];
//	float score;
//}stu;//���ṹ��sturct student �������ĳ�stu��
int main()
{
	int arr1[100];
	int arr2[100];
	int arr3[200];
	int i, j;
	int n, m;
	scanf("%d %d", &n, &m);
	//����������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�Ƚ���������
	int i = 0;//��Ҫ��i���¸�ֵ0
	int k = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			//�Ƚ���������Ԫ�أ���С��Ԫ�طŽ�����3�У�Ȼ���ٱȽ�
			arr3[k] = arr1[i];
			i++;//���Ԫ�طŽ�ȥ�󣬺����Ԫ�ؼ���������2�Ƚ�
			k++;//�Ž�ȥһ��Ԫ��++
		}
		else
		{
			arr3[k] = arr2[j];
			j++;
			k++;

		}
	}
	//����ѭ���϶���һ�������ȱ����꣬Ȼ�����ǾͿ���ֱ�ӽ�ʣ��һ�������ȫ��Ԫ��ֱ�ӷŽ�����3�оͿ�����
	if (i == n)//�������1�ȱ�����
	{
		arr3[k] = arr2[j];
		j++;
		k++;
	}
	else//�������2�ȱ�����
	{
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	//��ӡ
	for (k = 0; k < n + m; k++)
	{
		printf("%d ", arr3[k]);
	}
	return 0;
}