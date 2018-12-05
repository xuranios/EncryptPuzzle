#include <iostream>
#include "string"
using namespace std;
	int main()
{
	string a;
	int i;
	cout << "请输入一句话:" ;
	getline(cin,a);
	int N;
	cout << "请输入一个N:" ;
	cin >> N;
	cout << "将这句话的每个字母顺序向后移动后" << N << "位:" << endl;
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
