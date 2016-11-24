
//#include<iostream>
//#include<vector>
//using std::cout;
//using std::cin;
//using std::vector;
//
//int main()
//{
//	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (auto &i : a)
//		cout << ((i % 2 == 0) ?  : i * 2) << std::endl;
//	return 0;
//}//  exercise  4.21

//
//#include<iostream>
//using std::cin;
//using std::endl;
//using std::cout;
//
//int main(){
//	int	a;
//	while (cin >> a)
//		cout << ((a > 90) ? "high score" : (a<60)? "fail":(a<75)?"low pass":"pass") << std::endl;;
//	return 0;
//
//	int b;
//	while (cin >> b){
//		if (b > 90) cout << "high score" << endl;
//		else if (b < 60) cout << "fail" << endl;
//		else if (b < 75) cout << "low pass" << endl;
//		else  cout << "pass" << endl;
//	}
//	return 0;
//}  // exercise 4.22


#include<iostream>
#include<vector>
#include<string>
using std::vector;
using std::string;
using std::cout;
using std::endl;
int main(){
	vector<int> a = { 1, 2, 3, 4, 5 };
	std::cout << sizeof(a) << endl;
	string b = "asasa";
	std::cout << sizeof(b) << endl;

	int c[10];
	int *p = c;
	cout << sizeof(*p) << endl;

	int d[] = { 1, 2, 3, 4, 5 };
	cout << sizeof(d) << endl;

}


