#include <iostream>
#include "string"
using namespace std;
	int main()
{
	string a;
	int i;
	cout << "������һ�仰:" ;
	getline(cin,a);
	int N;
	cout << "������һ��N:" ;
	cin >> N;
	cout << "����仰��ÿ����ĸ˳������ƶ���" << N << "λ:" << endl;
	for(i = 0 ; i < a.length() ; i++)
 {
	if((a[i] >= 'A') && (a[i] <= 'Z'))
 {
	if(a[i] + N <= 'Z') 
    a[i] =a[i]+N;
	else
    a[i] -= 26 - N;
 }
 }
	for(i = 0 ; i < a.length() ; i++)
 {
	if((a[i] >= 'a') && (a[i] <= 'z'))
  {
	if(a[i] + N <= 'z') 
    a[i] =a[i]+N;
	else
    a[i] -= 26 - N;
  }
 }	for(int j = 0 ; j <= a.length() ; j++)
 {
	cout << a[j];
 }
	cout << endl;
	return 0;
}
