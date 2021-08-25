//#include<iostream>
//#include<conio.h>
//using namespace std;
//
//// Link of the problem
//// https://codeforces.com/contest/381/problem/A
//
//int main()
//{
//	int n = 0, turn = 0;
//	long sereja_score = 0, dima_score = 0;
//	cin >> n;
//	int* cards = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> cards[i];
//	}
//
//	for (int i = 0, j = n - 1; i <= j; turn++)
//	{
//		//sereja turn
//		if (turn % 2 == 0)
//		{
//			if (cards[i] > cards[j])
//			{
//				sereja_score += cards[i];
//				i++;
//			}
//			else
//			{
//				sereja_score += cards[j];
//				j--;
//			}
//		}
//
//		//dima turn
//		else
//		{
//			if (cards[i] > cards[j])
//			{
//				dima_score += cards[i];
//				i++;
//			}
//			else
//			{
//				dima_score += cards[j];
//				j--;
//			}
//		}
//	}
//	cout << sereja_score << " " << dima_score;
//
//	delete[] cards;
//	_getch();
//	return 0;
//}