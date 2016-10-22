#include<iostream>
#include<string>
#include<vector>
#include<iterator>
#include<cstring>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
	//exercise 3.2
	//string str;
	//while (cin >> str)
	//	cout << str << endl;
	//return 0;

	//exercise 3.4
	//string a, b;
	//cout << " input two string " << endl;
	//getline(cin, a);
	//getline(cin, b);
	//if (a.size() > b.size())
	//	cout << a << endl;
	////if (a.size() < b.size())
	//else	
	//	cout << b << endl;
	//return 0;

	//exercise 3.5
	//string a,b;
	//while (getline(cin, a))
	//	b +=" "+a;
	//cout << b << endl;

	//exercise 3.6
	/*string s("I love my life");
		for (auto &c : s){
		c = 'X';
		}
		cout << s << endl;
		return 0;*/

	//exercise 3.7
	//string s("I love my life");
	//for (char &c : s){
	//c = 'X';
	//}
	//cout << s << endl;
	//return 0; 

	//exercise 3.8
	//string s("la la la");
	//decltype(s.size());
	/*int i = 0;
		while (i<s.size()){
		s[i] = 'x';
		++i;
		}
		cout << s << endl;*/
	//for (int j = 0; j < s.size(); ++j)
	//	s[j] = 'x';
	//cout << s << endl;

	//exercise 3.10
	/*string s;
	while (getline(cin, s)){
	for (auto c : s)
	if (!ispunct(c))
	cout << c;
	cout<< endl;
	}*/

	//exercise 3.14
	//int a;
	//vector<int> b;
	//while (cin >> a){
	//	b.push_back(a);
	//}
	//cout << b << endl;

	////exercise 3.15
	//string a;
	//vector<string> b;
	//while (cin >> a){
	//	b.push_back(a);
	//}

	//exercise 3.16
	/*vector<int> v1;
	for (auto a : v1) cout << a << ",";
	if (!v1.empty())cout << "\b";
	cout << endl;

	vector<int> v2(10);
	for (auto b : v2)cout << b << ",";
	if (!v2.empty())cout << "\b";
	cout << endl;

	vector<int> v3(10, 42);
	for (auto c : v3)cout << c << ",";
	if (!v3.empty())cout << "\b";
	cout << endl;

	vector<int> v4{ 10 };
	for (auto d : v4)cout << d << ",";
	if (!v4.empty())cout << "\b";
	cout << endl;

	vector<int> v5{ 10, 42 };
	for (auto e : v5)cout << e << ",";
	if (!v5.empty())cout << "\b";
	cout << endl;

	vector<string> v6(10);
	for (auto f : v6)cout << f << ",";
	if (!v6.empty())cout << "\b";
	cout << endl;

	vector<string> v7{ 10, "fuck" };
	for (auto g : v7)cout << g << ",";
	if (!v7.empty())cout << "\b";
	cout << endl;*/

	//exercise 3.17
	//string a;
	//vector<string> b;
	//while (cin >> a)
	//	b.push_back(a);
	//for (auto &c:b)
	//	for (auto &d:c)
	//		d = toupper(d);
	//for (decltype(b.size()) i = 0; i != b.size(); ++i){
	//	if (i != 0 && i % 8 == 0)cout << endl;
	//	cout << b[i] << " ";
	//}
	// cout << endl;

	//exercise 3.19
	//vector<int> a(10, 42);
	//vector<int> b{ 42, 42, 42, 42, 42, 42, 42, 42, 42, 42 };
	//vector<int> c;
	//for (int i = 0; i != 10; ++i)
	//	c.push_back(42);

	//exercise 3.20
	/* int a, c;
	 vector<int> b;
	 while (cin >> a) b.push_back(a);
	 if (!b.empty()){
	 for (int i = 0; i != b.size()-1; ++i)
	 cout << b[i]+b[i+1] << endl;
	 }
	 decltype(b.size()) size = b.size();
	 if (size % 2 != 0)
	 size = size / 2 + 1;
	 else
	 size /= 2;

	 for (int i = 0; i != size; ++i)
	 cout << b[i] + b[b.size() - i - 1] << " ";
	 cout << endl;
	 return 0;*/

	//erercise 3.21
	/*   vector<string> v6{10,"hi"};
	   const vector<string> &vec = v6;
	   for (auto it = vec.begin(); it != vec.end(); ++it)
	   cout << *it << ",";
	   cout << "\b" << endl;*/

	//exercise 3.22
	//vector<string> text;
	//for (string line; getline(cin, line);) text.push_back(line);
	///*for (auto it = text.begin(); it != text.end() && !it->empty(); ++it){
	//	for (auto& c : *it) c= toupper(c);
	//	cout << *it << endl;*/
	//}
	//return 0;

	//exercise 3.23
	//vector<int> a(10,1);
	//for (auto i = a.begin(); i != a.end(); ++i)
	//*i=*i * 2;
	//for (auto b :a)
	//cout << b<<" ";
	//cout << endl;

	//exercise 3.24
	/*vector<int> a;
	int b;
	while (cin >> b) a.push_back(b);
	if (!a.empty()) {
		for (auto i = a.begin(); i + 1 != a.end(); ++i)
			cout << *i + *(i + 1) << " ";
	}
	cout << endl;
    
	if (!a.empty()){
		for (auto j = a.begin(), end = a.end() - 1; j <= end; ++j, --end)
			cout << *j + *end << " ";
	}*/
		
	//exerise 3.25
	//vector<unsigned> scores(11, 0);
	//unsigned grade;
	//while (cin >> grade){
	//	if (grade <= 100)
	//		++(*(scores.begin() + grade / 10));
	//	for (auto score : scores)
	//		cout << score << " ";
	//	cout << endl;
	//}
	
	//exercise 3.31
	//int a[10];
	//for (int i = 0; i < 10; ++i) a[i]=i;
	//for (auto b : a)
	//	cout << b << endl;

	//exercise 3.32
   /* int a[10], b[10];
	for (int i=0; i < 10; ++i) a[i] = i;
	for (int j=0; j < 10; ++j) b[j] = a[j];
	for (auto c : b) cout << c << " ";
	cout << endl;*/

	//vector<int> q(10);
	//for (auto k = q.begin(); k != q.end(); ++k)
	//	*k = k - q.begin();
	//vector<int> p(q);
	//for (auto h : p) cout << h << " ";
	//cout << endl;

	//exercise 3.35
	//using std::begin;
	//using std::end;
	//int a[5];
	//int* b = begin(a);
	//int* c = end(a);
	//for (int i=0; i < 5; ++i)a[i] = i;
	//for (int* p = b; p!= c; ++p) *p = 0;
	//for (auto h : a)cout << h << " ";
	//cout << endl;

	//exercise 3.36
	//exercise 3.39
	//string s1 = "loving can hurt";
	//string s2 = "loving can hurt sometimes";
	//if (s1 < s2)
	//	cout << s1+'\n'+s2 << endl;
	//const char s3[] = "but it's the only thing that i know";
	//const char s4[] = "RIP";
	//if (strcmp(s3, s4) >0)
	//	cout << s3 << endl;
	
	//exercise 3.40
	//string s1 = "we keep this love in photograph";
	//string s2 = "we make this memories for ourselves";
	//string s3 = s1 + "\n"+ s2;	
	//using std::strlen;
	//using std::
	/*const char s1[] = "we keep this love in photograph";
	const char s2[] = "we make this memories for ourselves";*/
	//auto len = strlen(s1) + strlen("\n") +strlen(s2) + 1;
	//char s3[68];
	//cout << len << endl;
	//strcpy_s(s3, s1);
	//strcat_s(s3, " ");
	//strcpy_s(s3, s2);
	//cout << s3 << endl;

	//exercise 3.41
	//using std::begin;
	//using std::end;
	//int a[] = { 1, 2, 3, 4, 5, 6 };
	//vector<int> b(begin(a), end(a));
	//for (auto c : b)cout << c << " ";
	//cout << endl;

	//exercise 3.42
	/*using std::begin;
	using std::end;
	vector<int> a{ 1, 2, 3, 4, 5, 6, 7 };
	int b[7];
	for (int* i = begin(b); i != end(b); ++i)
		*i = a[i - begin(b)];
	for (auto i : b)
		cout << i << " ";
	cout << endl;
*/
	//exercise 3.43
	//int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	//for (const int(&a)[4] : ia)
	//	for (int b : a)
	//		cout << b << endl;

	//for (size_t c = 0; c != 3; ++c)
	//	for (size_t d = 0; d != 4; ++d)
	//		cout << ia[c][d] << " ";
	//		cout << endl;

	//for (int (*e)[4] = ia; e !=ia+3; ++e)
	//	for (int* f = *e; f !=*e+4; ++f)
	//		cout << *f << endl;

	//exercise 3.44
	/*using int_array = int[4];
	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	for (int_array (&a) : ia)
		for (int b : a)
			cout << b << endl;

	for (size_t c = 0; c != 3; ++c)
		for (size_t d = 0; d != 4; ++d)
			cout << ia[c][d] << " ";
			cout << endl;

	for (int_array (*e) = ia; e != ia + 3; ++e)
		for (int* f = *e; f !=*e+4; ++f)
			cout << *f << endl;*/
	//exercise 3.45
	//int ia[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
	//for (auto &a: ia)
	//	for (auto b : a)
	//		cout << b << endl;
	//for (auto c = 0; c != 3; ++c)
	//	for (auto d = 0; d != 4; ++d)
	//		cout << ia[c][d] << endl;
	//for (auto e = ia; e != ia + 3; ++e)
	//	for (auto f = *e; f != *e + 4; ++f)
	//		cout << *f << endl;
}

