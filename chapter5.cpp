//#include<iostream>
//#include<vector>
//#include<string>
//
//using std::string;
//using std::vector;
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(){
//	vector<string> a = { "F", "D", "C", "B", "A", "Perfect" };
//	int input;
//	string output;
//	cout << "plz input score" << endl;
//	while (cin >> input){
//		if (input < 60)
//			output = a[0];
//		else{
//			output = a[(input - 50) / 10];
//			if (input != 100){
//				if (input % 10 > 7)
//					output += "+";
//				else if (input % 10 < 3)
//					output += "-";
//			}
//		}
//	cout << output << endl;
//	}
//	return 0;
//}    //exercise 5.5
//
//#include<iostream>
//#include<string>
//#include<vector>
//
//using std::vector;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main(){
//	vector<string> score = { "F", "D", "C", "B", "A", "PERFECT" };
//	int input;
//	cout << "input sth " << endl;
//	while (cin >> input){
//		string output = input < 60 ? score[0] : score[(input - 50) / 10];
//		output += (input == 100 || input < 60) ? "" : (input % 10 >7) ?  "+" : (input % 10 < 3) ? "-" : "";
//		cout << output << endl;
//	}
//	return 0;
//}      //exercise 5.6

//#include<iostream>
//#include<vector>
//#include<string>
//using std::cout;
//using std::cin;
//using std::endl;
//using std::vector;
//using std::string;
//int main(){
//	string a;
//	int acnt, ecnt, icnt, ocnt, ucnt;
//	while (cin >> a){
//		if (!a.empty()){
//			acnt = 0;
//			ecnt = 0;
//			icnt = 0;
//			ocnt = 0;
//			ucnt = 0;
//			for (auto &c : a){
//				switch (c){
//				case 'a':
//					++acnt;
//					break;
//				case 'e':
//					++ecnt;
//					break;
//				case 'i':
//					++icnt;
//					break;
//				case 'o':
//					++ocnt;
//					break;
//				case 'u':
//					++ucnt;
//					break;
//				}
//			}
//		}
//		cout << "a=" << acnt << endl;
//		cout << "e=" << ecnt << endl;
//		cout << "i=" << icnt << endl;
//		cout << "o=" << ocnt << endl;
//		cout << "u=" << ucnt << endl;
//	}
//
//}    //exercise 5.9
//
//#include<iostream>
//#include<string>
//
//using std::cin;
//using std::cout;
//using std::endl;
//using std::string;
//int main(){
//	string a;
//	int acnt, ecnt, icnt, ocnt, ucnt;
//	acnt = 0;
//	ecnt = 0;
//	icnt = 0;
//	ocnt = 0;
//	ucnt = 0;
//	while (cin >> a){
//		for (auto &c : a){
//			if (c == 'a' || c == 'A') ++acnt;
//			else if (c == 'e' || c == 'E') ++ecnt;
//			else if (c == 'i' || c == 'I') ++icnt;
//			else if (c == 'o' || c == 'O') ++icnt;
//			else if (c == 'u' || c == 'U') ++ucnt;
//		}
//	}
//    cout << "a= \t" << acnt << endl;
//    cout << "e= \t" << ecnt << endl;
//    cout << "i= \t" << icnt << endl;
//    cout << "o= \t" << ocnt << endl;
//    cout << "u= \t" << ucnt << endl;
//}   //exercise 5.10

//
//#include<iostream>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(){
//	char a;
//	int acnt, ecnt, icnt, ocnt, ucnt, kcnt, zcnt, hcnt;
//	acnt = 0;
//	ecnt = 0;
//	icnt = 0;
//	ocnt = 0;
//	ucnt = 0;
//	kcnt = 0;
//	zcnt = 0;
//	hcnt = 0;
//	while (cin >> std::noskipws >> a){		
//		switch (a){
//		case 'a':
//		case 'A':
//			++acnt;
//			break;
//		case 'e':
//		case 'E':
//			++ecnt;
//			break;
//		case 'i':
//		case 'I':
//			++icnt;
//			break;
//		case 'o':
//		case 'O':
//			++ocnt;
//			break;
//		case 'u':
//		case 'U':
//			++ucnt;
//			break;
//		case ' ':
//			++kcnt;
//			break;
//		case '\t':
//			++zcnt;
//			break;
//		case '\n':
//			++hcnt;
//			break;
//		}
//	}
//	cout << "Number of vowel a(A): \t" << acnt << '\n'
//		 << "Number of vowel e(E): \t" << ecnt << '\n'
//		 << "Number of vowel i(I): \t" << icnt << '\n'
//		 << "Number of vowel o(O): \t" << ocnt << '\n'
//		 << "Number of vowel u(U): \t" << ucnt << '\n' << "Number of space: \t"
//		 << kcnt << '\n' << "Number of tab char: \t" << zcnt << '\n'
//		 << "Number of new line: \t" <<hcnt << endl;
//
//	return 0;
//}    //exercise 5.11


//
//#include<iostream>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main(){
	//char a;
	//int ffcnt, flcnt, ficnt;
	//ffcnt = 0;
	//flcnt = 0;
	//ficnt = 0;
	//while (cin >> a){
	//	if (a == 'f'){
	//		switch (cin.peek()){
	//		case 'i':
	//			++ffcnt;
	//			break;
	//		case 'l':
	//			++flcnt;
	//			break;
	//		case 'f':
	//			++ficnt;
	//			break;
	//		}
	//	}
	//	cout << " ff: \t" << ffcnt << '\n' << " fl: \t" << flcnt << '\n' << " fi: \t" << ficnt << '\n';
	//	return 0;
	//}
//}     //exercise 5.12  error


//#include <iostream>
//
//using std::cin;
//using std::cout;
//using std::endl;
//
//int main()
//{
//	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
//	char ch, prech = '\0';
//	while (cin >> std::noskipws >> ch) {
//		switch (ch) {
//		case 'i':
//			if (prech == 'f') ++fiCnt;
//			break;
//		case 'f':
//			if (prech == 'f') ++ffCnt;
//			break;
//		case 'l':
//			if (prech == 'f') ++flCnt;
//			break;
//		}
//		prech = ch;
//	}
//
//	cout << "Number of ff: \t"
//		 << ffCnt << '\n' << "Number of fl: \t" << flCnt << '\n'
//		 << "Number of fi: \t" << fiCnt << endl;
//
//	return 0; 
//}        exercise 5.12  correct


//#include<iostream>
//#include<string>
//using namespace::std;
//
//int main(){
//	string word, re_word, mix_word;
//	int repeat = 0, mix_repeat = 0;
//	while (cin >> word){
//		if (word == re_word)
//			++repeat;
//		else{
//			re_word = word;
//			repeat = 1;
//		}
//		if (mix_repeat < repeat){
//			mix_repeat = repeat;
//			mix_word = re_word;
//		}
//	}
//	cout << "mix_word is " << mix_word << "and its repeat time is" << mix_repeat << endl ;
//}       exercise 5.14
//
//#include<iostream>
//#include<vector>
//using namespace::std;;
//int main(){
//	vector<int> a1 = { 0, 1, 1, 2 };
//	vector<int> a2 = { 0, 1, 1, 2, 3, 5, 8 };
//	if (a1.size() < a2.size()){
//		for (decltype(a1.size()) i = 0; i!=a1.size(); ++i){
//			if (a1[i] == a2[i])
//				cout << "true" << endl;
//		}
//	}	
//	return 0; 
//}             exercise 5.17

//#include<iostream>
//#include<string>
//using namespace::std;;
//int main(){
//	string re;
//	do{
//		string a, b;
//		cout << "input 2 strings" << endl;
//		cin >> a >> b;
//		if (a.size() > b.size())
//				cout << b << endl;
//		else
//				cout << a << endl;
//		cout << "repeat it or not,input Y or N please" << endl;
//		cin >> re;
//	} while (!re.empty() && re=="Y");
//	return 0;
//}
//          exercise 5.19

//#include<iostream>
//#include<string>
//using namespace::std;
//int main(){
//	string one, two;
//	int s = 0;
//	while (cin >> one && one!="end"){
//		if (one == two){
//			s = s + 1;
//			break;
//		}else
//			two = one;
//	}
//	if (s == 0) cout << "no words repeat" << endl;
//	else cout << one <<" appear twice"<<endl;
//	return 0;
//}       exercise 5.20

/*#include<iostream>
#include<string>
using namespace::std;
int main(){
	string one, two;
	int s = 0;
	while (cin >> one && one!="end"){
		if (!isupper(one[0]))
			continue;
		if (one == two){
			s = s + 1;
			break;
		}else
			two = one;
	}
	if (s == 0) cout << "no words repeat" << endl;
	else cout << one <<" appear twice"<<endl;
	return 0;
} */  //    exercise 5.21


//#include<iostream>
//#include<stdexcept>
//using namespace::std;
//int main(){
//	int a = 0, b = 0;
//	cout << "plz input two numbers: " << endl;
//	while (cin >> a >> b){
//		try {
//			if (b == 0) throw runtime_error("error!!!!!!!!");
//				cout << "the result is: " << a/b << endl;
//				cout << "input again" << endl;
//		}
//		catch (runtime_error err){
//			cout << err.what() << "\n try again and enter y or n" << endl;
//			char c;
//			cin >> c;
//			if (!cin || c == 'n')
//				break;
//		}
//	}
//	return 0;
//}        exercise 5.25