#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//#include<math.h>
//int main()
//{
//	int n = 2;
//	int k = 5;
//	int s = 0;
//	int i = 0;
//	int ret = 0; 
//	for (i = 0; i < k; i++)
//	{
//		s = s + n * pow(10, i);//0+2;2+20=22;22+200=222
//		ret = ret + s;//0+2;2+22;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		tmp = i;
//		int s = 0;
//		while (tmp)
//		{
//			s = s + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (s == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//#include<string.h>
//void reverse(char* arr, int len)
//{
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char string[] = "abcdefg";
//	int len = strlen(string);
//	reverse(string, len);
//	printf("%s\n", string);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 7;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = line; j > line - i - 1; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 20;
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] %2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[5] = { 1,3,15,17,29 };
//	int arr2[6] = { 0,2,4,6,18,20 };
//	int j = 0;
//	int k = 0;
//	while (j < 5 && k < 6)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}
//	}
//	if (j < 5)
//	{
//		for (; j < 5; j++)
//			printf("%d ", arr1[j]);
//	}
//	else
//	{
//		for (; k < 6; k++)
//			printf("%d ", arr2[k]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 4;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf("  ");
//		}
//		for (j = 0; j < i + 1; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int money = 100;
//	int day = 0;
//	int month = 0;
//	int flag = 1;
//	scanf("%d %d", &day, &month);
//	if (day == 11 && month == 11)
//	{
//		money = money * 0.7 - flag * 50;
//	}
//	else if(day == 12 && month == 12)
//	{
//		money = money * 0.8 - flag * 50;
//	}
//	else
//	{
//		flag = 0;
//		money = money - flag * 50;
//	}
//	printf("%d\n", money);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int num = 123;
//	int n = 1;
//	while (num / 10)
//	{
//		n++;
//		num = num / 10;
//	}
//	int i = 0;
//	for (i = n-1; i > 0; i--)
//	{
//		if ((num / pow(10, i)) % 2 == 0)
//		{
//			printf("0");
//			num = num % pow(10, i);
//		}
//		else
//		{
//			printf("1");
//			num = num % pow(10, i);
//		}
//	}
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int n = 2222;
//	int sum = 0;
//	int i = 0;
//	while (n)
//	{
//		int bit = n % 10;
//		if (bit % 2 == 0)
//			bit = 0;
//		else
//			bit = 1;
//		sum = sum + bit * pow(10, i);
//		i++;
//		n = n / 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}