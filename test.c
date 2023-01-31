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
//		//左边找偶数
//		while ((left < right)&& ((arr[left] % 2 == 1)))//如果全奇数或者全是偶数，会导致left++或者right--，越界，所以这里还是需要改进一下再加上left<right这个条件
//		{
//			
//				left++;//找到奇数++往后找
//		}
//		//右边找奇数
//		while ((left < right)&&((arr[right] % 2 == 0)))
//		{
//			
//				right--;//找到偶数--，往前找
//		}
//		//交换
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;//交换完需要跳过去
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
//}stu;//将结构体sturct student 类型名改成stu了
int main()
{
	int arr1[100];
	int arr2[100];
	int arr3[200];
	int i, j;
	int n, m;
	scanf("%d %d", &n, &m);
	//将数据输入
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//比较两个数组
	int i = 0;//需要将i重新赋值0
	int k = 0;
	while (i < n && j < m)
	{
		if (arr1[i] < arr2[j])
		{
			//比较两个数组元素，将小的元素放进数组3中，然后再比较
			arr3[k] = arr1[i];
			i++;//这个元素放进去后，后面的元素继续与数组2比较
			k++;//放进去一个元素++
		}
		else
		{
			arr3[k] = arr2[j];
			j++;
			k++;

		}
	}
	//出了循环肯定有一个数组先遍历完，然后我们就可以直接将剩下一个数组的全部元素直接放进数组3中就可以了
	if (i == n)//如果数组1先遍历完
	{
		arr3[k] = arr2[j];
		j++;
		k++;
	}
	else//如果数组2先遍历完
	{
		arr3[k] = arr1[i];
		i++;
		k++;
	}
	//打印
	for (k = 0; k < n + m; k++)
	{
		printf("%d ", arr3[k]);
	}
	return 0;
}