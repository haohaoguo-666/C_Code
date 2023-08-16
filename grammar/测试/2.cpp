//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	int length = n;
//	int arr[10000] = { 0 };
//	int min, max = 0;
//	cin >> min;
//	max = min;
//	n--;
//	while (n--) {
//		cin >> arr[n];
//		if (arr[n] > max)max = arr[n];
//		if (arr[n] < min)min = arr[n];
//	}
//	int i = max - min;
//	if (i == 0) {
//		cout << length << endl;
//	}
//	else {
//		for (; i >= 0; i--) {
//			int j = 0;
//			for (j = 0; j < length; j++) {
//				if ((arr[j] - min) % i != 0) {
//					break;
//				}
//			}
//			if (j == length) {
//				cout << (max - min) % i + 1 << endl;
//				break;
//			}
//		}
//
//	}
//
//}