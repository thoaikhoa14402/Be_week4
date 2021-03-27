// Viết chương trình kiểm tra mảng có tăng dần hay không 
#include <iostream>
using namespace std;
void input(int a[100], int& n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]=";
		cin >> a[i];
	}
}
bool isAscending(int a[100], int n)
{
	// vòng for đầu để kiểm tra mảng có chứa toàn phần tử giống nhau hay không
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] == a[i + 1]) ++count;
	}
	if (count == n - 1) return false;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j]) return false;
	}
	return true;
}
int main()
{
	int a[100], n;
	input(a, n);
	if (isAscending(a, n)) cout << "\nMang tang dan.";
	else cout << "\nKhong phai la mang tang dan.";
}
