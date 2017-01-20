//#include<iostream>
//std::istream& function(std::istream& a){
//	int b = 0;
//	while (a >> b)
//		std::cout << b;
//	a.clear();
//	return a;
//}
//int main(){
//	std::istream& test = function(std::cin);
//	std::cout << test.rdstate() << std::endl;
//	return 0;
//}    //exercise 8.1 8.2

//#include<iostream>
//#include<fstream>
//#include<vector>
//#include<string>
//using namespace::std;
//void func(const string& filename, vector<string>& vec){
//	ifstream in(filename);
//	if (in){
//		string buff;
//		while (getline(in, buff)) vec.push_back(buff);
//	}
//	else
//		cerr << "ERROR" << endl;
//}
//int main(){
//	vector<string> vec;
//	func("readme.txt", vec);
//	for (auto& c : vec) cout << c << endl;
//	return 0;
//}   //exercise 8.4

//#include<iostream>
//#include<string>
//#include<vector>
//#include<fstream>
//using namespace::std;
//void func(const string& filename, vector<string>& vec){
//	ifstream in;
//	in.open(filename);
//	if (in){
//		string buff;
//		while (in >> buff) vec.push_back(buff);
//	}
//	in.close();
//}
//int main(){
//	vector<string> vec;
//	func("readme.txt", vec);
//	for (auto& c : vec) cout << c << endl;
//	return 0;
//}   //exercise 8.5

//#include<fstream>
//using namespace::std;
//int main(char** argv){
//	ifstream input(argv[1]);
//	Sales_data total;
//	if (read(input, total)){
//		sales_data trans;
//		while (read(input, trans)){
//			if (total.isbn() == trans.isbn())
//				total.combine(trans);
//			else{
//				total = trans;
//			}
//		}
//	}
//	return 0;
//}    //exercise 8.6

//#include<iostream>
//#include<string>
//#include<sstream>
//using namespace::std;
//istream& func(istream& para){
//	string b;
//	while (para >> b) cout << b << endl;
//	para.clear();
//	return para;
//}
//int main(){
//	istringstream s("hello!");
//	func(s);
//	return 0;
//}   //exercise 8.9

//#include<iostream>
//#include<string>
//#include<fstream>
//#include<vector>
//#include<sstream>
//using namespace::std;
//int main(){
//	ifstream a("readme.txt");
//	if (a){
//		vector<string> b;
//		string c;
//		while (getline(a, c))
//			b.push_back(c);
//		for (auto &d : b){
//			istringstream e(d);
//			string word;
//			while (e >> word) cout << word << endl;
//		}
//	}
//	else
//		cerr << "ERROR" << endl;
//	return 0;
//}     //exercise 8.10
//
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//using namespace::std;
//struct PersonInfo {
//	string name;
//	vector<string> phones;
//};
//int main()
//{
//	string line, word;
//	vector<PersonInfo> people;
//	istringstream record;
//	while (getline(cin, line)) {
//		PersonInfo info;
//		record.clear();
//		record.str(line);
//		record >> info.name;
//		while (record >> word) info.phones.push_back(word);
//		people.push_back(info);
//	}
//	for (auto& p : people) {
//		std::cout << p.name << " ";
//		for (auto& s : p.phones) std::cout << s << " ";
//		std::cout << std::endl;
//	}
//	return 0;
//}   //exercise 8.11

/*#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>
using namespace::std;
struct PersonInfo{
	string name;
	vector<string> phones;
};
bool valid(const string& str)
{
	return isdigit(str[0]);
}

string format(const string& str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main(){
	ifstream ifs("readme.txt");
	if (!ifs) cerr << "ERROR" << endl;
	string line, word;
	vector<PersonInfo> people;
	while (getline(cin, line)){
		PersonInfo info;
		istringstream record(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}
	
	for (const auto&entry : people){
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones){
			if (!valid(nums)){
				badNums << " " << nums;
			}
			else
				formatted << " " << format(nums);
		}
		if (badNums.str().empty())
			cout << entry.name << " " << formatted.str() << endl;
		else
			cerr << "input error: " << entry.name << "invalid number(s)" << badNums.str() << endl;
	}
	return 0;
} */    //exercise 8.13