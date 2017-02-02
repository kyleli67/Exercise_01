/*#include<iostream>
#include<vector>
using namespace::std;
bool func(vector<int>::iterator begin,vector<int>::iterator end, int value){
	if (begin != end){
		for (auto iter = begin; iter != end; ++iter){
			if (*iter == value) return true;
			else return false;
		}
	}
	else
		return false;
}*/    //exercise 9.4

//vector<int>::iterator function(vector<int>::iterator begin, vector<int>::iterator end, int value){
//	if (begin != end){
//		for (auto iter = begin; iter != end; ++iter){
//			if (*iter == value) return iter;
//			else return end;
//		}
//	}
//	else
//		return begin;
//
//}     //exercise 9.5


//*************************************************************test************************************************************
//#include<iostream>
//#include<vector>
//using namespace::std;
//int main(){
//	vector<int> a{ 3, 2, 5, 6, 1 };          // begin=3开始，end是1后面不存在的那个位置，--end是1的位置，
//	vector<int> b(a.begin(), --a.end());     // b{3,2,5,6} 因为迭代器范围是[begin,--end) 前闭后开，所以存入b的数字是3,2,5,6，而1没有被存入 
//	auto bb = b.begin();
//	auto ee = b.end();
//	cout << *(ee-1) << endl;                 // output 6
//	return 0;
//}       //exercise 9.12
//**************************************************************test***********************************************************


//#include<iostream>
//#include<vector>
//#include<list>
//using namespace::std;
//int main(){
//	list<int> a1{ 1, 2, 3, 4, 5, 6 };
//	vector<double> b1(a1.begin(), a1.end());
//	for (auto &a : a1)cout << a ;
//	cout << endl;
//	for (auto &b : b1)cout << b ;
//	cout << endl;
//	vector<int> a2{ 10, 11, 12, 13, 14, 15 };
//	vector<double> b2(a2.begin(), a2.end());
//	for (auto &c : a2)cout << c ;
//	cout << endl;
//	for (auto &d : b2)cout << d ;
//  return 0;
//}   //exercise 9.13

//#include<iostream>
//#include<list>
//#include<vector>
//#include<string>
//using namespace::std;
//int main(){
//	list<const char* > a{ "1qq", "2qe", "3fw"};
//	vector<string> b{"1qa","2qa","3qa","4qa"};
//	b.assign(a.cbegin(), a.cend());
//	for (auto &q : b) cout << q << endl;
//	return 0;
//}      //exercise 9.14


//#include<iostream>
//#include<vector>
//#include<list>
//using namespace::std;
//int main(){
//	vector<int> a{ 1, 2, 3, 4, 5, 6 };
//	vector<int> b{ 1, 2, 5 };
//	//if (a > b)
//	//	for (auto &q : a) cout << q << endl;
//	//else
//	//	for (auto &p : b)cout << p << endl;
//	list<int> c{ 1, 2, 3, 4};
//	auto cbegin = c.begin();
//	//cout << a.size() << endl;
//	//cout << c.size() << endl;
//		for (auto abegin = a.begin(); abegin != a.end() || cbegin!=c.end(); ++abegin){
//			if (*abegin == *cbegin){
//				++cbegin;
//				if (abegin == a.end() || cbegin == c.end())
//					cout << (a.size() > c.size()) ? "a is bigger" : "c is bigger" ;
//			}
//			else if (*abegin > *cbegin){
//					cout << "a is bigger" << endl;
//					break;
//				}
//			else if (*abegin < *cbegin){
//					cout << "c is bigger" << endl;
//					break;
//				}
//		}
//	return 0;
//}       //exercise 9.15 9.16

//#include<iostream>
//#include<string>
//#include<deque>
//using namespace::std;
//int main(){
//	string a;
//	deque<string> b;
//	while (cin >> a)
//		b.push_back(a);
//	cout << "input over" << endl;
//	if (!b.empty())
//		for (auto begin = b.begin(); begin != b.end(); ++begin)
//			cout << *begin << ends;
//	return 0;
//}         //exercise 9.18

/*#include<iostream>
#include<string>
#include<list>
using namespace::std;
int main(){
	string a;
	list<string> b;
	auto iter = b.begin();
	while (cin >> a)
		iter = b.insert(iter, a);
	cout << "input over" << endl;
	if (!b.empty())
		for (auto begin = b.begin(); begin != b.end(); ++begin)
			cout << *begin << ends;
	return 0;
} */         //exercise 9.19

/*#include<iostream>
#include<list>
#include<deque>
using namespace::std;
int main(){
	list<int> num;
	for (int a = 0; a != 10; ++a)
		num.push_back(a);
	deque<int> num1;
	deque<int> num2;
	for (auto &b : num){
		if (b % 2 == 0)
			num1.insert(num1.end(), b);
		else
			num2.insert(num2.end(), b);
	}
	for (auto &c : num1) cout << c << ends;
	cout << endl;
	for (auto &d : num2) cout << d << ends;
	cout << endl;
	return 0;
} */     //exercise 9.20

 
//#include<iostream>
//#include<vector>
//using namespace::std;
//int main(){
//	vector<int> a = { 1, 2, 3, 4, 5 };
//	cout << "use at " << a.at(0) << endl;
//	cout << "use index " << a[0] << endl;
//	cout << "use front " << a.front() << endl;
//	cout << "use begin " << *a.begin() << endl;
//	return 0;
//}    //exexcise 9.24

/*#include<iostream>
#include<vector>
using namespace::std;
int main(){
	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8 };
	a.erase(a.begin(), a.end());
	for (auto &e : a)cout << e << ends;
	vector<int> b = { 1, 2, 3, 4, 5, 6, 7, 8 };
	b.erase(b.begin(), b.begin());
	for (auto &f : b)cout << f << ends;
	cout<<endl;
	vector<int> c = { 1, 2, 3, 4, 5, 6, 7, 8 };
	c.erase(c.end(), c.end());
	for (auto &g : c)cout << g << ends;
	return 0;
}  */  //exercise 9.25

/*#include<iostream>
#include<vector>
#include<list>
using namespace::std;
int main(){
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> a(begin(ia), end(ia));
	list<int> b(a.begin(), a.end());
	auto begin = a.begin();
	while (begin != a.end()){
		if (*begin % 2 == 1)
			begin = a.erase(begin);
		else
			++begin;
	}
    for (auto &p : a)cout << p << ends;
	cout << endl;
	for (auto bbegin = b.begin(); bbegin != b.end();){
		if (*bbegin % 2 == 1)
			++bbegin;
		else
			bbegin = b.erase(bbegin);
	}
    for (auto &u : b)cout << u << ends;
	cout << endl;
	return 0;
}  */  //exercise 9.26

//#include<iostream>
//#include<forward_list>
//using namespace::std;
//int main(){
//	forward_list<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	auto curr = a.begin();
//	auto pre = a.before_begin();
//	while (curr != a.end()){
//		if (*curr % 2 == 1)
//			curr = a.erase_after(pre);
//		else{
//			pre = curr;
//			++curr;
//		}
//	}
//	for (auto &g : a) cout << g << ends;
//	cout << endl;
//	return 0;  
//}     //exercise 9.27

//#include<iostream>
//#include<string>
//#include<forward_list>
//using namespace::std;
//void func(forward_list<string> &a, string &b, string &c){
//	auto pre = a.before_begin();
//	for (auto curr = a.begin(); curr != a.end(); pre = curr,++curr){
//		if (*curr == b){
//			a.insert_after(curr, c);
//			return;
//		}
//	}
//	a.insert_after(pre, c);
//}
//int main(){
//	forward_list<string> a = { "gong", "ming", "hao" };
//	string b = "ming";
//	string c = "memeda";
//	func(a, b, c);
//	for (auto&o : a) cout << o << ends;
//	return 0;
//}       //exercise 9.28

/*#include<iostream>
#include<list>
using namespace::std;
int main(){
	list<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin();
	while (iter != vi.end()){
		if (*iter % 2 == 1)
		{
			iter = vi.insert(iter, *iter);
			advance(iter,2);
		}
		else
			iter = vi.erase(iter);
	}
	for (auto i : vi) cout << i << " ";
	return 0;
} */   //exercise 9.31 a

/*#include<iostream>
#include<forward_list>
using namespace::std;
int main(){
	forward_list<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto curr = vi.begin();
	auto pre = vi.before_begin();
	while (curr != vi.end()){
		if (*curr % 2 == 1){
			curr = vi.insert_after(pre, *curr);
			advance(curr, 2);
			advance(pre, 2);
		}
		else
			curr = vi.erase_after(pre);
	}
	for (auto &i : vi) cout << i << " ";
	return 0;
}      *///exercise 9.31 b

/*#include<iostream>
#include<vector>
using namespace::std;
int main(){
	vector<int> vi = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin();
	while (iter != vi.end()){
		if (*iter % 2 == 1){
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	for (auto &i : vi) cout << i << " ";
	return 0;
}  */     //exercise 9.34

/*#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> v;
	std::string word;

	while (std::cin >> word) {
		v.push_back(word);
		std::cout << v.capacity() << "\n";
	}

	return 0;
}  */     //exercise 9.38

/*#include<iostream>
#include<string>
#include<vector>
int main(){
	std::vector<char> a = { 'g', 'o', 'n', 'g', '!' ,'\0'};
	std::string s(a.begin(),a.end());
	std::cout << s << std::endl;
	return 0;
}*/        //exercise 9.41

/*#include<iostream>
#include<string>
using namespace::std;
void Replace(string& s, const string& oldVal, const string& newVal)
{
	for (auto beg = s.begin(); beg != s.end(); ++beg) {
		if (*beg != oldVal.front()) continue;
		if (std::distance(beg, s.end()) <
			std::distance(oldVal.begin(), oldVal.end()))
			break;
		if (string{ beg, beg + oldVal.size() } == oldVal) {
			auto pos = std::distance(s.begin(), beg);
			s.erase(beg, beg + oldVal.size());
			s.insert(beg, newVal.cbegin(), newVal.cend());
			beg = std::next(s.begin(), pos + newVal.size() - 1);
		}
	}
}
int main()
{
	{
		string str{ "To drive straight thru is a foolish, tho courageous act." };
		Replace(str, "thru", "through");
		Replace(str, "tho", "though");
		std::cout << str << std::endl;
	}
	return 0;
}*/   //exercise 9.43 from pezy

/*#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::prev;
void Replace(string& s, string const& oldVal, string const& newVal)
{
	for (string::size_type i = 0; i != s.size(); ++i)
		if (s.substr(i, oldVal.size()) == oldVal) {
			s.replace(i, oldVal.size(), newVal);
		}
}
int main()
{
	string str{ "To drive straight thru is a foolish, tho courageous act." };
	Replace(str, "tho", "though");
	Replace(str, "thru", "through");
	cout << str << endl;
} */           //exercise 9.44 from pezy

//#include<iostream>
//#include<string>
//using namespace::std;
//void function(string &str,string &pre,string &aft){
//	str.insert(0, pre);
//	str.append(aft);
//}
//int main(){
//	string a = " gong ming hao ";
//	string pre = "my lover";
//	string aft = "is a boy";
//	function(a, pre, aft);
//	cout << a << endl;
//	return 0;
//}   //exercise 9.45

/*#include<iostream>
#include<string>
using namespace::std;
void function(string &str,string &pre,string &aft){
	str.insert(0, pre);
	str.insert(str.size(), aft); 
}
int main(){
	string a = " gong ming hao ";
	string pre = "my lover";
	string aft = "is a boy";
	function(a, pre, aft);
	cout << a << endl;
	return 0;
}  */  //exercise 9.46

/*#include<iostream>
#include<string>
using namespace::std;
int main(){
	string a = "ab2c3d7R4E6";
	string num = "123456789";
	string word = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	auto index = a.find_first_of(num);
	cout << index << endl;
	auto index2 = a.find_first_not_of(num);
	cout << index2 << endl; 
	auto index3 = a.find_first_of(word);
	cout << index3 << endl;
	auto index4 = a.find_first_not_of(word);
	cout << index4 << endl;
	return 0;
}*/    //exercise 9.47

/*#include<fstream>
#include<iostream>
#include<string>
using namespace::std;
int main(){
	ifstream ifs("index.txt");
	if (!ifs) return -1;
	string longword;
	for (string word; ifs >> word;)
		if (word.find_first_of("aceimnorsuvwxz") != string::npos && word.size() > longword.size())
			longword = word;
	cout << longword << endl;
	return 0;
}*/    //exercise 9.49

/*#include<iostream>
#include<string>
#include<vector>
using namespace::std;
int sum1(const vector<string> &a){
	int sum = 0;
	for (auto &c : a) sum += stoi(c);
	return sum;
}
float sum2(const vector<string> &b){
	float sum = 0.0;
	for (auto &c : b) sum += stof(c);
	return sum;
}
int main(){
	vector<string> a = {"1","1.1","1.2","3.8"};
	cout << sum1(a) << endl;
	cout << sum2(a) << endl;
	return 0;
}*/    //exercise 9.50

//#include<iostream>
//#include<string>
//using namespace::std;
//class Data{
//	Data(const string &s);
//	unsigned year;
//	unsigned month;
//	unsigned day;
//};
//Data::Data(const string &s){
//	unsigned format = 0;	
//	if (s.find_first_of("/") != std::string::npos) format = 0x10;           //! 1/1/1900	
//	if (s.find_first_of(",") >= 4 && s.find_first_of(",") != std::string::npos) //! Jan 1, 1900
//		format = 0x01;
//	switch (format) {                 //! format = 1/1/1900		
//	case 0x10:
//		day = std::stoi(s.substr(0, s.find_first_of("/")));
//		month = std::stoi(s.substr(s.find_first_of("/") + 1,
//			s.find_first_of("/") - s.find_last_of("/")));
//		year = std::stoi(s.substr(s.find_last_of("/") + 1, 4));
//		break;
//	case 0x01:                       //! format = January 1, 1900  or Jan 1, 1900
//		day = std::stoi(
//			s.substr(s.find_first_of("1234567890"),
//			s.find_first_of(",") - s.find_first_of("1234567890")));
//		if (s.find("Jan") < s.size()) month = 1;
//		if (s.find("Feb") < s.size()) month = 2;
//		if (s.find("Mar") < s.size()) month = 3;
//		if (s.find("Apr") < s.size()) month = 4;
//		if (s.find("May") < s.size()) month = 5;
//		if (s.find("Jun") < s.size()) month = 6;
//		if (s.find("Jul") < s.size()) month = 7;
//		if (s.find("Aug") < s.size()) month = 8;
//		if (s.find("Sep") < s.size()) month = 9;
//		if (s.find("Oct") < s.size()) month = 10;
//		if (s.find("Nov") < s.size()) month = 11;
//		if (s.find("Dec") < s.size()) month = 12;
//		year = std::stoi(s.substr(s.find_last_of(" ") + 1, 4));
//		break;
//	}
//}         //exercise 9.51 from pezy

/*#include<iostream>
#include<stack>
#include<string>
using namespace::std;
int main(){
	string a = "haksdh(dq(k(dqbw)kdq)";
	char b = '#';
	int c = 0;
	stack<char> stk;
	for (auto &f : a){
		stk.push(f);
		if (f == '(') ++c;
		if (c && f == ')') {
			while (stk.top() != '(') stk.pop();
			stk.pop();
			stk.push(b);
			--c;
		}
	}
	string output;
	for (; !stk.empty(); stk.pop()) output.insert(output.begin(), stk.top());
	cout << output << endl;
} */   //exercise 9.52 from pezy