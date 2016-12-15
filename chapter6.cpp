//#include<iostream>
//using namespace::std;
//
//int fact(int c){
//	int a = 1;
//	for (; c != 0 && c != 1;c--)
//		a *= c;
//	return a;
//}
//int main(){
//	int a = 0;
//	int b = fact(5);
//	cout << b << endl;
//	return 0;
//}      exercise 6.3
  
//#include<iostream>
//using namespace::std;
//long long play(int c){
//	int a = 1;
//	for (; c != 0 && c != 1; c--)
//		a *= c;
//	return a;
//}
//int main(){
//	int a = 0;
//	cout << "input A number plz \n";
//	cin >> a ;
//	long long v = play(a);
//	cout <<"the result is "<< v << endl;
//	return 0;
//}        exercise 6.4
//
//#include<iostream>
//using namespace::std;
//int abs(int c){
//	/*int a = 1;
//	if (c < 0)
//		return 	a = -1 * c;
//	else
//		return c;*/
//	return c >= 0 ? c : -c;
//}
//int main(){
//	int a = 0;
//	cout << "input a number \n";
//	cin >> a;
//	int c = abs(a);
//	cout << "the result is "<<c << endl;
//	return 0;
//}  exercise 6.5
 
//#include<iostream>
//#include<cstddef>
//using namespace::std;
//size_t count_call(size_t i){
//	static size_t c = 0;
//	c += i;
//	return c;
//}
//int main(){
//	for (size_t i = 0; i != 10;++i)	
//		cout << count_call(i) << endl;
//	return 0;
//}   //exercise 6.6

//#include<iostream>
//using namespace::std;
//int cal(){
//	static int a = 0;
//	++a;
//	return a > 1 ? a-1 : 0;
//}
//int main(){
//	for (int i = 0; i != 10; ++i)
//		cout << cal() << endl;
//	return 0;
//}   exercise 6.7

/*#include<iostream>
using namespace::std;
int change(int *a, int*b){
	int c = 0;
	c = *b;	
	*b = *a;
	*a = c;
	return *a, *b;
}
int main(){
	int a = 0, b = 0;
	cin >> a >> b;
	change(&a, &b);
	cout << a<<b<< endl;
	return 0;
}   */// exercise 6.10
 
//#include<iostream>
//#include<string>
//using namespace::std;
//string::size_type find_char(const string &s, char c,string::size_type &occurs){
//	auto ret = s.size();
//	occurs = 0;
//	for (decltype(ret) i = 0; i != s.size(); ++i){
//		if (s[i] == c){
//			if (ret==s.size())
//				ret = i;
//			++occurs;
//		}
//	}
//	return ret;
//}
//int main(){
//	string a;
//	cin >> a;
//	string::size_type  ctr;
//	auto index = find_char(a, 'o', ctr);
//	cout << a << endl;
//	cout << ctr << endl;
//	cout << index << endl;
//	return 0;
//}     exercise 6.11

//#include<iostream>
//#include<string>
//using namespace::std;
//bool big(const string &a){
//	for (auto &d : a)
//		if (isupper(d)) return true;
//	return false;
//}
//void change(string &a){
//	for (auto &d : a)
//		if (isupper(d)) d = tolower(d);
//}
//int main(){
//	string a ;
//	cin >> a;
//	cout << big(a) << endl;
//	change(a);
//	cout << a << endl;
//	return 0;
//}       exercise 6.17

//#include<iostream>
//using namespace::std;
//int test(int a, int *b){
//	return (a > *b) ? a : *b;
//}
//int main(){
//	int p = 19, w = 12;
//	cout<<test(p, &w);
//	return 0;
//}    //exercise 6.21

/*#include<iostream>
using namespace::std;
void change(int *&a, int *&b){
	auto c = a;
	a = b;
	b = c;
}
int main(){
	int a = 11, b = 22;
	auto p = &a;
	auto q = &b;
	cout << p << q << endl;
	change(p, q);
	cout << p << q << endl;
	return 0;
} */    //exercise 6.22

//#include<iostream>
//#include<iterator>
//using namespace::std;
//void print1(const char*a){
//	if (a)
//		while (*a)
//			cout << *a++ << endl;
//}
//void print3(const int *b){
//	if (b) cout << *b++ << endl;
//}
//void print2(int(&j)[2]){
//	for (auto d : j) cout << d << endl;
//}
//void print4(const int *beg, const int *end){
//	while (beg != end)
//		cout << *beg++ << endl;
//}
//int main(){
//	int i = 0, j[2] = { 0, 1 };
//	char a[] = "kyleli67";
//	print1(a);
//	print2(j);
//	print3(&i);
//	print4(begin(j), end(j));
//	return 0;
//}     //exercise 6.23
//
//#include<iostream>
//#include<string>
//using namespace::std;
//int main(int argc, char **argv){
//	string str;
//	for (int i = 0; i != argc; ++i)
//	{	
//		str += argc[i];
//		str += " ";
//	}
//	cout << str << endl;
//	return 0;
//}       //erercise 6.26

//#include<iostream>
//#include<initializer_list>
//using namespace::std;
//int cal(initializer_list <int> a){
//	int sum = 0;
//	for (auto i : a) sum += i;
//    return sum;
//}
//int main(){
//	cout << cal({ 1, 2, 3, 4, 5, 6, 7 }) << endl;
//	return 0;
//}         //exercise 6.27

//#include<iostream>
//#include<vector>
//using namespace::std;
//void circle(vector<int>::iterator a,vector<int>::iterator b){
//	if (a != b){
//		cout << *a << endl;
//		circle(a+1, b);
//	}
//}
//int main(){
//	vector<int> a;
//	int b = 0;
//	while (cin >> b)
//		a.push_back(b);
//	circle(a.begin(),a.end());
//	return 0;
//}     //exercise 6.33
//
//#include<iostream>
//#include<string>
//using namespace::std;
//string make(size_t ctr, const string &word, const string &end = "s"){
//
//	return (ctr > 1) ? word + end : word;
//}
//int main(){
//	int ctr = 0;
//	string a;
//	while (cin >> a >> ctr)
//	cout << make(ctr,a) << endl;
//	return 0; 
//}    //exercise6.42

//#include<iostream>
//#include<vector>
//#include<string>
//using namespace::std;
//void digui(vector<string>::iterator c, vector<string>::iterator d){
//#ifndef NDEBUG
//	cout << "vector size: " << d-c<< endl;
//#endif
//	if (c != d)
//	{
//		cout << *c << " ";
//		digui(c + 1, d);
//	}
//}
//
//int main(){
//	vector < string > a;
//	string b;
//	while (cin >> b) a.push_back(b);
//	digui(a.begin(),a.end());
//	return 0;
//}       //exercise 6.47

//#include<iostream>
//using namespace::std;
//void f(){
//	cout << "nonthing" << endl;
//}
//void f(int a){
//	cout << "int_a " << a << endl;
//}
//void f(int a, int b){
//	cout <<"int_a & int_b  "<< a + b << endl;
//}
//void f(double a, double b){
//	cout << "double_a & double_b " << a + b << endl;
//}
//int main(){
//	f(2.56, 42);
//	f(42);
//	f(42, 0);
//	f(2.25, 3.14);
//	return 0;
//}       //exercise 6.51



 