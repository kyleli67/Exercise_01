//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<list>
//using namespace::std;
//int main(){
//	vector<int> a= { 1, 2, 3, 4, 5, 5, 6, 5, 2, 4 };
//	int val = 5;
//	int result = count(a.begin(), a.end(), val);
//	cout << result << endl;
//	return 0;
//}
//int main(){
//	list<string> a = {"pi","ka","qiu","ka","pii","pi"};
//	string val ="pi";
//	int result = count(a.cbegin(), a.cend(), val);
//	cout << result << endl;
//	return 0;
//}
//exercise 10.1 10.2

//#include<iostream>
//#include<vector>
//#include<numeric>
//using namespace::std;
//int main(){
//	vector<int> a = { 1, 2, 3, 4, 5 };
//	int val = 0;
//	int sum = accumulate(a.cbegin(), a.cend(), val);
//	cout << sum << endl;
//	return 0;
//}
//int main(){
//	vector<double> v = { 1.1, 2.0, 3.0, 4.0, 5 };
//	double sum = accumulate(v.cbegin(), v.cend(), 0.0);
//	cout << sum << endl;
//	return 0;
//}
//exercise 10.3 10.4

//#include<iostream>
//#include<vector>
//#include<numeric>
//#include<list>
//int main(){
//	char c1[10] = "eipi10";
//	char c2[10] = "eipi10";
//	std::vector<char*> roster1{ c1 };
//	std::list<char*> roster2{ c2 };
//	std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
//	return 0;
//}
//exercise 10.5  from pezy

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace::std;
//int main(){
//	vector<int> a = { 12, 34, 51, 3, 15 };
//	fill_n(a.begin(), a.size(), 0);
//	for (auto i : a) cout << i;
//	cout << endl;
//	return 0;
//}
//exercise 10.6

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace::std;
//void elimdups(vector<string> &word){
//	sort(word.begin(), word.end());
//	auto end_unique = unique(word.begin(), word.end());
//	word.erase(end_unique, word.end());
//}
//int main(){
//	vector<string> a = { "every", "one", "has", "a", "stroy", "even", "a", "idiot" };
//	elimdups(a);
//	for (auto &v : a)cout << v <<" ";
//	cout << endl;
//	return 0;
//}
//exercise 10.9

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace::std;
//void elimdups(vector<string> &word){
//	sort(word.begin(), word.end());
//	auto end_unique = unique(word.begin(), word.end());
//	word.erase(end_unique, word.end());
//}
//bool isshort(const string&a, const string&b){
//	return a.size() < b.size();
//}
//int main(){
//	vector<string> a = { "every", "one", "has", "a", "stroy", "even", "a", "idiot" };
//	elimdups(a);
//	for (auto &p : a)cout << p << " ";
//	cout << endl;
//	stable_sort(a.begin(), a.end(), isshort);
//	for (auto &u : a)cout << u << " ";
//	cout << endl;
//}
//exericse 10.11

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace::std;
//bool compareIsbn(const Sales_data &a, const Sales_data &b){
//	return a.isbn().size() < b.isbn().size();
//}
//int main(){
//	Sales_data a1 = "big", a2 = "bigg", a3 = "bang", a4 = "bangg";
//	vector<Sales_data> b = { a1, a2, a3, a4 };
//	sort(b.begin(), b.end(), compareIsbn);
//	for (const auto &p : b)cout << p.isbn() << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.12

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace::std;
//bool function(string &a){
//	return a.size() >= 5;
//}
//int main(){
//	vector<string> a = { "a", "afa", "aafa", "aaaaaaa", "aaaaasw", "bigbigdick" };
//	auto endd = partition(a.begin(), a.end(), function);
//	for (auto b = a.begin(); b != endd; ++b)cout << *b << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.13

// exercise 10.14     [](int a, int b){return a + b; };

//int a =12;
//auto c=[a](int num){return a + num; };
//exercise 10.15


//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace::std;
//void elimdups(vector<string> &word){
//	sort(word.begin(), word.end());
//	auto end_unique = unique(word.begin(), word.end());
//	word.erase(end_unique, word.end());
//}
//void biggies(vector<string> &word, vector<string>::size_type sz){
//	elimdups(word);
//	stable_sort(word.begin(), word.end(), [](const string &a, const string &b){return a.size() < b.size(); });
//	auto wc = find_if(word.begin(), word.end(), [sz](const string &a){return a.size() >= sz; });
//	auto count = word.end() - wc;
//	for_each(wc, word.end(), [](const string &s){cout << s << " "; });
//	cout << endl;
//}
//int main(){
//	vector<string> a = { "a", "afa", "aafa", "aaaaaaa", "aaaaasw", "bigbigdick" };
//	int b = 5;
//	biggies(a,b);
//	cout << endl;
//	return 0;
//}
//execise 10.16

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace::std;
//int main(){
//	Sales_data a1 = "big", a2 = "bigg", a3 = "bang", a4 = "bangg";
//	vector<Sales_data> b = { a1, a2, a3, a4 };
//	sort(b.begin(), b.end(), [](Sales_data &a, Sales_data &b){return a.isbn().size() < b.isbn().size(); });
//	for (auto &p : b)cout << p.isbn() << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.17

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//using namespace::std;
//void elimdups(vector<string> &word){
//	sort(word.begin(), word.end());
//	auto end_unique = unique(word.begin(), word.end());
//	word.erase(end_unique, word.end());
//}
//void biggies(vector<string> &word, vector<string>::size_type sz){
//	elimdups(word);
//	auto p = partition(word.begin(), word.end(), [sz](const string &a){return a.size() >= sz; });
//	for (auto it = word.begin(); it != p; ++it)cout << *it << " ";
//	cout << endl;
//}
//int main(){
//	vector<string> a = { "the", "quick", "red", "fox", "jumps","over", "the", "slow", "red", "turtle" };
//    int b = 5;
//	biggies(a,b);
//	cout << endl;
//	return 0;
//}
//exericise 10.18

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace::std;
//void elimdups(vector<string> &word){
//	sort(word.begin(), word.end());
//	auto end_unique = unique(word.begin(), word.end());
//	word.erase(end_unique, word.end());
//}
//void biggies(vector<string> &word, size_t sz){
//	elimdups(word);
//	auto p = stable_partition(word.begin(), word.end(), [sz](const string &a){return a.size() >= sz; });
//	for (auto w = word.begin(); w != word.end(); ++w)cout << *w << " ";
//	cout << endl;
//}
//int main(){
//	vector<string> a = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//	int b = 5;
//	biggies(a,b);
//	cout << endl;
//	return 0;
//}
//exercise 10.19

//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace::std;
//int main(){
//	vector<string> a = { "theon", "qquick", "red", "fffox", "jumpsinght", "overroll", "the", "slow", "realred", "turtle" };
//	auto b = count_if(a.cbegin(), a.cend(), [](const string &c){return c.size() >= 6; });
//	cout << b << endl;
//	return 0;
//}
//exercise 10.20

//#include<iostream>
//#include<algorithm>
//using namespace::std;
//int main(){
//	int a = 12;
//	auto b = [&a](){
//		if (a == 0)
//			return true;
//		else{
//			--a;
//			return false;
//		}
//	};
//	while (!b())cout << a << endl;
//	return 0;
//}
//exercise 10.21

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//using namespace::std;
//int main(){
//	vector<int> a = { 1, 2, 3, 4, 5, 3, 2, 1 };
//	vector<int> b = {4,9};
//	unique_copy(a.cbegin(), a.cend(),inserter(b,b.begin()));
//	for (auto &f : b)cout << f << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.27

//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//#include<list>
//using namespace::std;
//int main(){
//	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	list<int> b, c, d;
//	copy(a.cbegin(), a.cend(), front_inserter(b));
//	copy(a.cbegin(), a.cend(), back_inserter(c));
//	copy(a.cbegin(), a.cend(), inserter(d,d.begin()));
//	for (auto &f : b)cout << f << " ";
//	cout << endl;
//	for (auto &g : c)cout << g << " ";
//	cout << endl;
//	for (auto &h : d)cout << h << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.28


//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<iterator>
//#include<list>
//using namespace::std;
//int main(){
//	vector<int> a = { 123, 321, 415, 5, 1, 5, 111, 53 };
//	for_each(a.crbegin(), a.crend(), [](int a){cout << a << " "; });
//	cout << endl;
//	return 0;
//}
//exercise 10.34
//int main(){
//	vector<int> a = { 123, 321, 415, 5, 1, 5, 111, 53 };
//	for (auto b = prev(a.cend()); b!= prev(a.cbegin()); --b)cout << *b << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.35
//int main(){
//	list <int> a = { 1, 2, 3, 4, 0, 6, 7, 8 };
//	auto target = find(a.crbegin(), a.crend(), 0);
//	return 0;
//}
//exercise 10.36
//int main(){
//	vector<int> a = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	list<int> b;
//	reverse_copy(a.cbegin() + 3, a.cbegin() + 8, inserter(b,b.begin()));
//	for (const auto &u : b)cout << u << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.37


//#include<iostream>
//#include<string>
//#include<list>
//#include<algorithm>
//using namespace::std;
//void elip(list<string> & words){
//	words.sort();
//	words.unique();
//}
//int main(){
//	list < string > a = { "aa", "aa", "aa", "aa", "aasss", "aa" };
//	elip(a);
//	for (const auto &f : a)cout << f << " ";
//	cout << endl;
//	return 0;
//}
//exercise 10.42

