#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
	int temp = *xp; //temp akan menyimoan nilai *xp
	*xp = *yp;
	*yp = temp; //temp akan menyimpan nilai yp
}

//implementasi fungsi sorting apung sortir
void bubbleSort(int arr[], int n)
{
	int i, j; //algoritma bubble sort
	for (i = 0; i < n-1; i++)
	
	//membuat elemen i terakhir
	for (j = 0; j < n-i-1; j++)
	     if (arr[j] > arr[j+1]) //arr digunakan untuk menghitung iterasi
	         swap(&arr[j], &arr[j+1]); //swap digunakan iterasi selesai =list terurut
}
	         
//cetak array untuk mengetahui isi array benar /salah (pada element i) //
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	     cout << arr[i] << " ";
	cout << endl;
}

// kode pengurutan
int main ()
{
	int arr[] = {90, 44, 35, 132, 62, 41, 90,};
 	int n = sizeof(arr)/sizeof(arr[0]);
 	bubbleSort(arr, n);
 	cout << "sorted array: \n"; 
 	printArray(arr, n);
 	return 0;
}
