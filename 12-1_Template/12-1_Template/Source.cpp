#include <iostream>
using namespace std;
template <class T>
int binarySearch(const T list[], T key, int listSize)
{
	int low = 0;
	int high = listSize - 1;

	while (high >= low)
	{
		int mid = (low + high) / 2;
		if (key < list[mid])
			high = mid - 1;
		else if (key == list[mid])
			return mid;
		else
			low = mid + 1;
	}

	return -1;
}

template <class T>
void insertionSort(T list[], int listSize)
{
	for (int i = 1; i < listSize; i++)
	{
		/* Insert list[i] into a sorted sublist list[0..i-1] so that
		   list[0..i] is sorted. */
		T currentElement = list[i];
		int k;
		for (k = i - 1; k >= 0 && list[k] > currentElement; k--)
		{
			list[k + 1] = list[k];
		}

		// Insert the current element into list[k+1]
		list[k + 1] = currentElement;
	}
}
int main()
{
	int list1[] = { 1,5,6,2,3,7,9,8,4 };
	int iA, iB, iC;
	double list[] = { 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4 };
	double dA, dB, dC;
	cin >> iA >> iB >> iC;
	cin >> dA >> dB >> dC;


	cout << "From: " << list1[0] << "," << list1[1] << "," << list1[2] << ","
		<< list1[3] << "," << list1[4] << "," << list1[5] << "," << list1[6] << ","
		<< list1[7] << "," << list1[8] << endl;

	insertionSort(list1, 9);

	cout << "To: " << list1[0] << "," << list1[1] << "," << list1[2] << ","
		<< list1[3] << "," << list1[4] << "," << list1[5] << "," << list1[6] << ","
		<< list1[7] << "," << list1[8] << endl;

	int i = binarySearch(list1, iA, 9);
	int j = binarySearch(list1, iB, 9);
	int k = binarySearch(list1, iC, 9);

	cout << iA << " at " << i << endl;
	cout << iB << " at " << j << endl;
	cout << iC << " at " << k << endl << endl << endl;



		cout << "From: " << list[0] << "," << list[1] << "," << list[2] << ","
			<< list[3] << "," << list[4] << "," << list[5] << "," << list[6] << ","
			<< list[7] << "," << list[8] <<endl;

	insertionSort(list, 9);

	cout << "To: " << list[0] << "," << list[1] << "," << list[2] << ","
		<< list[3] << "," << list[4] << "," << list[5] << "," << list[6] << ","
		<< list[7] << "," << list[8] <<endl;

	 i = binarySearch(list, dA, 9);
	 j = binarySearch(list, dB, 9);
	 k = binarySearch(list, dC, 9);

	cout << dA << " at " << i << endl;
	cout << dB << " at " << j << endl;
	cout << dC << " at " << k << endl;


	system("pause");
	return 0;
}

