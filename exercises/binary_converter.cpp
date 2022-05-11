/*
  Write a program that given a number as input convert it in binary.

  Output:
  Insert first number: 8
  The binary number is: 1000
*/
#include<iostream>
#include<string>

using namespace std;
string toBinary(int n){
	string res = "";
	while (n){
		if(n%2 == 0){
			res += '0';
		}
		else {
			res += '1';
		}
		
		n >>= 1;
	}
	for (int i = 0; i < res.length() / 2; i++)
        swap(res[i], res[res.length() - i - 1]);
	return res;
}

int main(){
	int n;
	cout << "Insert first number: ";
	cin >> n;
	cout << "The binary number is: " << toBinary(n) << endl;
	
	
	return 0;
}
