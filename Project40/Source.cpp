#include <iostream>
using namespace std;

//void Sum(int a, int b)
//{
//	cout << "Sum: " << a + b << endl;
//}
//
//void Sum(double a, double b)
//{
//	cout << "Sum: " << a + b << endl;
//}
//
//void Sum(char a, char b)
//{
//	cout << "Sum: " << a + b << endl;
//}

//template <typename T>	
//
//void Sum(T a, T b)
//{
//	cout << "Sum: " << a + b << endl;
//}
//
//template <class T, class X>
//
//void Sum(T a, X b)
//{
//	cout << "Sum: " << a + b << endl;
//}

//void Init(int mas[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		mas[i] = rand() % 41-20;
//	}
//}
//
//void Init(double mas[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		mas[i] = rand() % 100 * 1.6;
//	}
//}
//
//void Init(char mas[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		mas[i] = rand() % 30 + 65;
//	}
//}
//
//template <class T>
//	
//void Print(T mas[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << mas[i] << " ";
//	}
//	cout << endl;
//}

template <class X>
int IndexMinValue(X mas[], int size)
{
    X min = mas[0];
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
            index = i;
        }
    }
    return index;
}

template <class T>
T MinValue(T mas[], int size)
{
    T min = mas[0];
    for (int i = 1; i < size; i++)
    {
        if (mas[i] < min)
        {
            min = mas[i];
        }
    }
    return min;
}

template <class T>
T Sum(T mas[], int size)
{
    T sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += mas[i];
    }
    return sum;
}

template <class T>
int CountPositive(T mas[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (mas[i] > 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    double arr2[10] = { -2, 3, 4, 1, 74, 754, 2, 0, -45, 10 };

    cout << "Min idx: " << IndexMinValue(arr2, 10) << endl;
    cout << "Min val: " << MinValue(arr2, 10) << endl;
    cout << "Sum: " << Sum(arr, 10) << endl;
    cout << "Positive: " << CountPositive(arr2, 10) << endl;

    return 0;

	//int arr[10];
	//double arr2[10];
	//char arr3[7];

	//Init(arr, 5);
	//Init(arr2, 10);
	//Init(arr3, 7);

	//Print(arr, 5);
	//Print(arr2, 10);	
	//Print(arr3, 7);	


	/*Sum(5, 10);         
	Sum(5.5, 10.5);   
	Sum('A', 'B');    
	return 0;*/

}