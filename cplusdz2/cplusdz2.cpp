// cplusdz2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//using namespace std;
//int main()
//
//{
//    /*std::cout << "Hello World!\n";*/
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int COUNT = 5; // ������� ������ (������� ��)
//	int i = 0; // ������� ����� �����
//	while (i <= COUNT) { // �������� �����
//		cout << "*"; // ���� ������
//		i++; // ���� ������� �����
//	}
//	cout << "\n\n";
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	for (int count = 1; count <= 5; count++)
//	{
//		cout << "The student squatted " << count <<
//			" time\n";
//	}
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int sum = 0;
//	for (int bom = 1; bom <= 12; bom++)
//	{
//		sum += bom; // ����������� ���� �����
//	}
//	// �������� ������ 78 ����.
//	cout << " Hours have punched " << sum
//		<< " times.\n\n";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int digit, sum = 0;
//	for (;;) { // ��������� ������������ �����
//		cout << "Enter digit:";
//		cin >> digit; // ��� �����
//		if (digit == 0) // ���� ������� 0
//			break; // �������� ����
//		sum += digit; // ����������� ����
//	}
//	// ����� ����������
//	cout << "Sum of digits" << sum << "\n\n";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	int digit;
//	cout << "Enter digit:";
//	cin >> digit;
//	// ���� �������� ����� �� 2 �� ��������� �����
//	for (int i = 2; i < digit; i++) {
//		// ���� ����� �� ������� �� ������� �������� i
//		// ��� �������, �������� ��� ���� � �������
//		// �� ����������
//		if (digit % i != 0)continue;
//		// �������� i �� �����
//		cout << i << " ";
//	}
//	cout << endl << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	// ������� ������ �������
//	int amount = 0;
//	// ���� ��� �������� 4 �������
//	for (int d = 1; d <= 4; d++)
//	{
//		// �������� ��� ������������ �����
//		int alltime = 0;
//		// ����� ��� ��������� ���� �� �������
//		int time = 0;
//		// �������� ��� �� ������� �������
//		cout << "How much time the first machine "
//			"spends for " << d << " part\n";
//		cin >> time;
//		alltime += time;
//		// ����������, �� �� ���������� ��� ����
//		if (alltime > 120)
//		{
//			cout << "That part is defective. "
//				"The time limit exceeded\n";
//			continue;
//		}
//		// �������� ��� �� ������� �������
//		cout << "How much time the second machine "
//			"spends for " << d << " part\n";
//		cin >> time;
//		alltime += time;
//		// ����������, �� �� ���������� ��� ����
//		if (alltime > 120)
//		{
//			cout << "That part is defective. "
//				"The time limit exceeded\n";
//			continue;
//		}
//		// ���� ��� �� ���� ��������� �� ����
//		// ���������, �������� ������� ���������
//		// ����������� �����
//		amount++;
//	}
//	cout << "\nThe factory manufactured " << amount <<
//		" parts\n\n";
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main() {
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			// ������� �� �������� ��
//			// �� ������� ����������
//			if (i + j >= 9 && i >= j)
//				cout << "|===|";
//			else
//				cout << "     ";
//		}
//		cout << endl;
//	}
//}
#include <iostream>
using namespace std;
int main() {
	/*int a = 1000;
	float dochid = 0;
	int mis = 0;
	float P = 0;
	cout << "Enter 0< P < 25 procent ";
	cin >> P;
	while(dochid <= 1100)
	{
		dochid += (a * P / 100);
		mis++;
		
	}
	cout <<"za"<<" " << mis << " " << "misiatsiv" << " " << "vash dochid stanovytyme" << " " << dochid << "grn ";*/
	/*int N = 0;
	cout << "Enter N";
	cin >> N;
	int comb = 0;
	int time = 0;
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				if (i != j && j != k && k != i)
				{ 
				comb++;
				time += N;
				cout << i << j << k << "\t";
				}
			}
		}
	}
	cout << endl;
	cout << "na vidkryttia valizy znadobytsia"<< " " << time<< " "<< " sec";*/
	float sum = 0;
	int a = 1000;
	int end = 0;
	int k = 1;
	int uszel = 0;
	cout << "Enter end";
	cin >> end;
	do {
		sum += 1000.0 / k;
		if (k % 2 == 0)
		{
			uszel -= 1000.0 / k;
		}
		else if (k % 2 != 0) { uszel += 1000.0 / k; }
		k++;
		end--;
	} 
	while (end > 0);

	cout << " vsego proszel = " << sum << " " << "m";
	cout << " on ostanovilsia v =" << uszel << " m";
	cout << " popytok do raboty = " << k - 1 << "\n";
	cout << endl;
	cout << "Resultat -";
	cout << "Vygnali s raboty" << endl;
	cout << "Itog - ";
	cout << " Poluchil Skovorodkoi ot zeny";

	


}
	

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
