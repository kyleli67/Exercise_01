//#include<iostream>
//#include<map>
//#include<string>
//using namespace::std;
//int main(){
//	map<string, size_t> word_count;
//	string word;
//	cout << "plz input sth" << endl;
//	while (cin >> word)
//		++word_count[word];
//	for (const auto &a : word_count)
//		cout << a.first << " occurs " << a.second <<( (a.second > 1) ? " times " : " time " )<< endl;
//	return 0;
//}
//exercise 11.3

//#include<iostream>
//#include<map>
//#include<string>
//#include <algorithm>
//#include <cctype>
//using namespace::std;
//int main(){
//	    map<string, int> m;
//		string word;
//		while (cin >> word) {
//			for (auto &ch : word) ch = tolower(ch);
//			word.erase(remove_if(word.begin(), word.end(), ispunct),word.end());
//			++m[word];
//		}
//		for (const auto& e : m) cout << e.first << " : " << e.second << "\n";
//		return 0;
//}
//exercise 11.4 from pezy

//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//using namespace::std;
//int main(){
//	map<string, vector<string>> fam;
//	string childname, lastname;
//	while ([&]()->bool{ 
//		cout << "input lastname " << endl;
//		return std::cin >> lastname && lastname != "@q"; }()){
//	}
//	{
//		cout << "input childname " << endl;
//		while (cin >> childname && lastname != "@q")
//		{
//			fam[lastname].push_back(childname);
//		}
//	
//	}
//	for (auto e : fam) {
//		cout << e.first << ":\n";
//		for (auto c : e.second) cout << c << " ";
//		cout << "\n";
//	}
//}
//exercise 11.7

//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//using namespace::std;
//int main(){
//	vector<string> a;
//	vector<string> b = { "gong", "ming", "hao", "is", "a" };
//	string word;
//	cout << "input a word" << endl;
//	while( cin >> word && word!="quit"){
//		if (find(b.cbegin(), b.cend(), word) == b.cend()){
//			a.push_back(word);
//			cout << "insert success" << endl;
//			cout << "input a new word" << endl;
//		}
//		else
//			cout << "repeat" << endl;
//	}
//	return 0;
//}
//exercise 10.8

//exercise 10.9    map<string, list<size_t>> test;

//#include<iostream>
//#include<string>
//#include<vector>
//#include<utility>
//int main(){
//	std::vector<std::pair<std::string, int>> a;
//	std::string b;
//	int c;
//	while (std::cin >>b >> c){
//		a.push_back(std::pair<std::string, int>(b, c));
//		a.push_back(std::make_pair(b,c));
//		a.push_back(std::pair < std::string, int > {b, c});
//	}
//}
//exercise 11.12 11.13

//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//using namespace::std;
//int main(){
//	map<string, vector<string>> fam;
//	vector<pair<string, string>> name_birthday;
//	string childname, lastname, date;
//	while ([&]()->bool{ 
//		cout << "input lastname " << endl;
//		return std::cin >> lastname && lastname != "@q";
//	}())
//	{
//		cout << "input childname " << endl;
//		while (cin >> childname && lastname != "@q")
//		{
//			cout << "input birthday date" << endl;
//			cin >> date;
//			fam[lastname].push_back(childname);
//			name_birthday.push_back(pair < string, string >(childname, date));
//			break;
//		}
//	
//	}
//	/*for (auto e : fam) {
//		cout << e.first << ":\n";
//		for (auto c : e.second) cout << c << " ";
//		cout << "\n";
//	}*/
//
//	for (auto e : name_birthday) {
//	cout << e.first << ":\n";
//	for (auto c : e.second) cout << c << " ";
//	cout << "\n";
//	}
//}
//exercise 11.14
 
//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//
//using std::ostream;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;
//using std::make_pair;
//using std::pair;
//using std::vector;
//using std::map;
//
//class Families {
//public:
//	using Child = pair<string, string>;
//	using Children = vector<Child>;
//	using Data = map<string, Children>;
//
//	void add(string const& last_name, string const& first_name, string birthday)
//	{
//		_data[last_name].push_back(make_pair(first_name, birthday));
//	}
//
//	ostream& print(std::ostream& os) const
//	{
//		if (_data.empty()) return os << "No data right now." << endl;
//
//		for (const auto& pair : _data) {
//			os << pair.first << ":\n";
//			for (const auto& child : pair.second)
//				os << child.first << " " << child.second << endl;
//			os << endl;
//		}
//		return os;
//	}
//
//private:
//	Data _data;
//};
//
//int main()
//{
//	Families families;
//	string message = "Please enter last name, first name and birthday";
//	for (string l, f, b; cout << message << endl, cin >> l >> f >> b;
//		families.add(l, f, b))
//		;
//	families.print(cout << "Current data:" << endl);
//
//	return 0;
//}
//exercise 11.14  from pezy

//#include<map>
//#include<iostream>
//using namespace::std;
//int main(){
//	map<int, string> a;
//	a[1] = "abd";
//	auto aaa = a.begin();
//	aaa->second = "hhh";
//	return 0;
//}
//exercise 11.16

// std::map<std::string,size_t> const::iterator map_it=word.count.begin();      exercise 11.17

//#include<iostream>
//#include<map>
//#include<vector>
//#include<string>
//using namespace::std;
//int main(){
//	map<string, size_t> wordcount;
//	string word;
//	while (cin >> word){
//		auto ret = wordcount.insert({ word, 1 });
//		if (!ret.second)
//			++ret.first->second;
//	}
//	for (const auto&d : wordcount)
//		cout << d.first << " occur " << d.second <<( (d.second > 1) ? " times " : " time " )<< endl;
//	return 0;
//}
//exercise 11.20

//#include<map>
//#include<iostream>
//#include<string>
//using namespace::std;
//int main(){
//	multimap<string, string> test={{ "li", "a" }, { "gong", "b" }, { "he", "c" }, { "li", "d" }, {"gong","e"}};
//	string a1;
//	string a2;
//	cout << "input a name" << endl;
//	cin >> a1;
//	cout << "input auother's work" << endl;
//	cin >> a2;
//	auto f = test.find(a1);
//	auto count = test.count(a1);
//	cout << count << endl;
//	while (count>=0)
//	{
//		if (f->second == a2){
//			test.erase(f);
//			break;
//		}
//		++f;
//		--count;
//	}
//	for (const auto& t : test)
//		std::cout << t.first << " " << t.second << std::endl;
//	return 0;
//}
//exercise 11.31

//#include<iostream>
//#include<map>
//#include<string>
//#include<vector>
//using namespace::std;
//int main(){
//	multimap<string, string> test = { { "li", "lalaland" }, { "gong", "beauty" }, { "he", "cao" }, { "li", "xixi" }, { "gong", "lover" } };
//	for (const auto &a : test){
//		cout << a.first << ":";
//		for (const auto &b : a.second)
//			cout << b  ;
//		cout << endl;
//	}
//	return 0;
//}
//exercise 11.32

//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<fstream>
//#include <sstream>
//using namespace::std;
//map<string, string> buildmap(ifstream &map_file){
//	map<string, string> trans_map;
//	string key;
//	string value;
//	while (map_file >> key && getline(map_file, value))
//		if (value.size() > 1)
//			trans_map[key] = value.substr(1);
//		else
//			throw runtime_error("no rule for " + key);
//	return trans_map;
//}
//const string &transform(const string &s, const map<string, string> &m){
//	auto map_it = m.find(s);
//	if (map_it != m.cend())
//		return map_it->second;
//	else
//		return s;
//}
//void word_transform(ifstream &map_file, ifstream &input){
//	auto trans_map = buildmap(map_file);
//	string text;
//	while (getline(cin, text)){
//		istringstream iss(text);
//		string word;
//		bool firstword = true;
//		while (iss >> word){
//			if (firstword)
//				firstword = false;
//			else
//				cout << " ";
//			cout << transform(word, trans_map);
//		}
//		cout << endl;
//	}
//}
//int main(){
//	ifstream ifs_map("../c_test/word_transformation_bad.txt"),
//		ifs_content("../c_test/given_to_transform.txt");
//	if (ifs_map && ifs_content)
//		word_transform(ifs_map, ifs_content);
//	else
//		std::cerr << "can't find the documents." << std::endl;
//}
//exercise 11.33

