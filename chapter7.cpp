//#include<iostream>
//#include<string>
//using namespace::std;
//struct Sales_data{
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//};
//int main(){
//	Sales_data total;
//	if (cin>>total.bookNo>>total.revenue>>total.units_sold){
//		Sales_data trans;
//		while (cin>>trans.bookNo>>trans.revenue>>trans.units_sold){
//			if (total.bookNo == trans.bookNo){
//				total.units_sold += total.units_sold;
//				total.revenue += total.revenue;
//			}
//			else{
//				cout<<total.bookNo<<" "<<total.revenue<<" "<<total.units_sold<<endl;
//				total = trans;
//			}
//		}
//		cout << total.bookNo << " " << total.revenue << " " << total.units_sold << endl;
//	}
//	else{
//		cerr << "NO data" << endl;
//	}
//	return 0;
//}       exercise 7.1
//
//#include<iostream>
//#include<string>
//using namespace::std;
//struct Sales_data{
//	string isbn() const{ return bookNo; }
//	Sales_data& combine(const Sales_data&);
//	double avg_price() const;
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//};
//Sales_data& Sales_data::combine(const Sales_data &rhs){
//	units_sold += rhs.units_sold;
//	revenue += rhs.revenue;
//	return *this;
//}
//double Sales_data::avg_price() const{
//	if (units_sold)
//		return revenue / units_sold;
//	else
//		return 0;
//}
//int main(){
//	Sales_data total;
//	if (cin >> total.bookNo >> total.revenue >> total.units_sold){
//		Sales_data trans;
//		while (cin >> trans.bookNo >> trans.revenue >> trans.units_sold){
//			if (total.isbn() == trans.isbn()){
//				total.combine(trans);
//			}
//			else{
//				cout << total.bookNo<< " " << total.revenue << " " << total.units_sold << endl;
//				total = trans;
//			}
//		}
//		cout << total.bookNo << " " << total.revenue << " " << total.units_sold << endl;
//	}
//	else{
//		cerr << "ERROR" << endl;
//	}
//	return 0;
//}      exercise 7.2 & 7.3

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Person{
//	string name;
//	string address;
//	string getname() const{ return name; }
//	string getadd()  const{ return address; }
//};     exercise 7.5

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Sale_data
//{
//	string isbn() const { return bookNo; };
//	Sale_data& combine(const Sale_data&);
//	double avg_price() const;
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//};
//double Sale_data::avg_price() const{
//	if (units_sold)
//		return revenue/units_sold;
//	else return 0;
//}
//Sale_data& Sale_data::combine(const Sale_data &rhs){
//	units_sold += rhs.units_sold;
//	revenue += rhs.revenue;
//	return *this;
//}
//istream &read(istream &is, Sale_data &item){
//	double price = 0;
//	is >> item.bookNo >> item.units_sold >> price;
//	item.revenue = price * item.units_sold;
//	return is;
//}
//ostream &print(ostream &os, Sale_data &item){
//	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
//	return os;
//}
//Sale_data add(const Sale_data &lhs, const Sale_data &rhs){
//	Sale_data sum = lhs;
//	sum.combine(rhs);
//	return sum;
//}
//int main(){
//	Sale_data total;
//	if (read(cin, total)){
//		Sale_data trans;
//		while (read(cin, trans)){
//			if (total.isbn() == trans.isbn()){
//				total.combine(trans);
//			}
//			else{
//				print(cout, total) << endl;
//				total = trans;
//			}
//		}
//		print(cout, total);
//	} else{
//		cerr << "NO DATA!" << endl;
//	}
//	return 0;
//}      exercise 7.6  7.7

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Person{
//	string name;
//	string address;
//	string getname() const{ return name; }
//	string getadd()  const{ return address; }
//};    
//istream &read(istream &is, Person &p1){
//	is >> p1.name >> p1.address;
//	return is;
//}
//ostream &print(ostream &os, Person &p1){
//	os << p1.getname() << " " << p1.getadd();
//	return os;
//}      exercise 7.9

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Sale_data{
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//	string isbn() const{ return bookNo; }
//	Sale_data& combine(const Sale_data&);
//	double avg_price() const;
//	Sale_data() = default;
//	Sale_data(const string &s) :bookNo(s){}
//	Sale_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n){}
//	Sale_data(istream &);
//}; 
//double Sale_data::avg_price()const{
//	if (units_sold)
//		return revenue / units_sold;
//	else return 0;
//}
//Sale_data& Sale_data::combine(const Sale_data&rhs){
//	units_sold += rhs.units_sold;
//	revenue += rhs.revenue;
//	return *this;
//}
//istream &read(istream &is, Sale_data &item){
//	double price = 0;
//	is >> item.bookNo >> item.units_sold >> price;
//	item.revenue = price * item.units_sold;
//	return is;
//}
//ostream &print(ostream &os, Sale_data &item){
//	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
//	return os;
//}
//Sale_data add(const Sale_data &lhs, const Sale_data &rhs){
//	Sale_data sum = lhs;
//	sum.combine(rhs);
//	return sum;
//}
//Sale_data::Sale_data(istream &is){
//	read(is, *this);
//}
//int main()
//{
//	Sale_data item1;
//	print(cout, item1) << endl;
//	Sale_data item2("0-201-78345-X");
//	print(cout, item2) << endl;
//	Sale_data item3("0-201-78345-X", 3, 20.00);
//	print(cout, item3) << endl;
//	Sale_data item4(cin);
//	print(cout, item4) << endl;
//	return 0;
//}    exercise 7.11

/*
#include<iostream>
#include<string>
using namespace::std;
struct Sales_data;
istream &read(istream &, Sales_data &);
struct Sales_data{
	Sales_data() = default;
	Sales_data(const string &s) :bookNo(s){}
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n){}
	Sales_data(istream &is){ read(is, *this); }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	string isbn() const{ return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price()const;
};

istream &read(istream &is, Sales_data &item){
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream &print(ostream &os, Sales_data &item){
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
Sales_data& Sales_data::combine(const Sales_data&rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
double Sales_data::avg_price()const{
	if (units_sold)
		return revenue / units_sold;
	else return 0;
}
int main(){
	Sales_data total(cin);
	if (!total.isbn().empty()){
		istream &is = cin;
		while (is){
			Sales_data trans(is);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(cout, total)<<endl;
				total = trans;
			}
		}
		print(cout, total)<<endl;
	} else{
		cerr << "ERROR!" << endl;
	}
}  */   // exercise 7.12  7.13

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Person;
//istream &read(istream &, Person &);
//struct Person{
//	Person() = default;
//	Person(const string &s, const string &n) :name(s), address(n){}
//	Person(istream &p){ read(p, *this); }
//	string name;
//	string address;
//	string getname() const{ return name; }
//	string getadd()  const{ return address; }
//};    
//istream &read(istream &is, Person &p1){
//	is >> p1.name >> p1.address;
//	return is;
//}
//ostream &print(ostream &os, Person &p1){
//	os << p1.getname() << " " << p1.getadd();
//	return os;
//}    exercise 7.15

/*#include<iostream>
#include<string>
using namespace::std;
struct Sales_data;
istream& read(istream &, Sales_data &);
class Sales_data{
	friend istream& read(istream &, Sales_data &);
	friend ostream& print(ostream &, Sales_data&);
public:
	Sales_data() = default;
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n),revenue(n*p){}
	Sales_data(const string &s) :bookNo(s){}
	Sales_data(istream &s){ read(s, *this); }
	string isbn()const{ return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	double avg_price()const{ return units_sold ? revenue / units_sold : 0; }
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data&rhs){
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}
istream& read(istream &is, Sales_data &item){
	double price = 0.0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}
ostream& print(ostream &os, Sales_data& item){
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
int main(){
	Sales_data total(cin);
	if (!total.isbn().empty()){
		istream &is = cin;
		while (is){
			Sales_data trans(is);
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else{
				print(cout, total)<<endl;
				total = trans;
			}
		}
	    print(cout, total) << endl;
	}
	else{
		cerr << "ERROR!" << endl;
	}
	return 0;
} */    //exercise 7.21

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Person;
//istream &read(istream &, Person &);
//class Person{
//	friend istream &read(istream &, Person &);
//	friend ostream &print(ostream &, Person &);
//public:
//	Person() = default;
//	Person(const string &s, const string &n) :name(s), address(n){}
//	Person(istream &p){ read(p, *this); }
//	string getname() const{ return name; }
//	string getadd()  const{ return address; }
//private:
//	string name;
//	string address;
//};    
//istream &read(istream &is, Person &p1){
//	is >> p1.name >> p1.address;
//	return is;
//}
//ostream &print(ostream &os, Person &p1){
//	os << p1.getname() << " " << p1.getadd();
//	return os;
//}     //exercise 7.22
//
//#include<iostream>
//#include<string>
//using namespace::std;
//class Screen{
//public:
//	typedef string::size_type pos;
//	Screen() = default;
//	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht * wd,' '){}
//	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c){}
//	char get()const{ return contents[cursor]; }
//	inline char get(pos r, pos c) const{ return contents[r*width + c]; }
//	Screen &move(pos r, pos c);
//private:
//	pos cursor = 0;
//	pos height = 0, width = 0;
//	string contents;
//};
//Screen &Screen::move(pos r, pos c){
//	pos row = r * width;
//	cursor = row + c;
//	return *this;
//}    exercise 7.23 7.24

//#include<iostream>
//#include<string>
//using namespace::std;
//class Screen{
//public:
//	typedef string::size_type pos;
//	Screen() = default;
//	Screen(pos ht, pos wd) :height(ht), width(wd), contents(ht * wd,' '){}
//	Screen(pos ht, pos wd, char c) :height(ht), width(wd), contents(ht * wd, c){}
//	char get()const{ return contents[cursor]; }
//	inline char get(pos r, pos c) const{ return contents[r*width + c]; }
//	inline Screen &move(pos r, pos c);
//	inline Screen &set(char);
//	inline Screen &set(pos, pos, char);
//	Screen &display(ostream &os){ do_display(os); return *this; }
//	const Screen &display(ostream &os) const{ do_display(os); return *this; }
//private:
//	pos cursor = 0;
//	pos height = 0, width = 0;
//	string contents;
//	void do_display(ostream &os) const{ os << contents; }
//};
//Screen &Screen::move(pos r, pos c){
//	pos row = r * width;
//	cursor = row + c;
//	return *this;
//}    
//inline Screen &Screen::set(char c)
//{
//	contents[cursor] = c;
//	return *this;
//}
//inline Screen &Screen::set(pos r, pos col, char ch)
//{
//	contents[r*width + col] = ch;
//	return *this;
//}
//int main(){
//	Screen myScreen(5, 5, 'X');
//	myScreen.move(4, 0).set('#').display(cout);
//	cout << "\n";
//	myScreen.display(cout);
//	cout << "\n";
//	return 0;
//} 

//class Y;
//class X{
//	Y* y = nullptr;
//};
//class Y{
//	X n;
//};  exercise 7.31

//#include<iostream>
//#include<string>
//#include<vector>
//using namespace::std;
//class Screen;
//class Window_mgr{
//public:
//	using ScreenIndex = vector<Screen>::size_type;
//	void clear(ScreenIndex);
//private:
//	vector<Screen> Screens ;
//};
//
//class Screen{
//	friend void Window_mgr::clear(ScreenIndex);
//public:
//	using pos = std::string::size_type;
//	Screen() = default; 
//	Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {} // 2
//	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c){}
//	char get() const { return contents[cursor]; }
//	char get(pos r, pos c) const { return contents[r * width + c]; }
//	inline Screen& move(pos r, pos c);
//	inline Screen& set(char c);
//	inline Screen& set(pos r, pos c, char ch);
//	const Screen& display(std::ostream& os) const{	do_display(os);	return *this;}
//	Screen& display(std::ostream& os){	do_display(os);	return *this;}
//private:
//	void do_display(std::ostream& os) const { os << contents; }
//private:
//	pos cursor = 0;
//	pos height = 0, width = 0;
//	string contents;
//};
//inline void Window_mgr::clear(ScreenIndex i){
//	Screen& s = Screens[i];
//	s.contents = string(s.height * s.width, ' ');
//}
//inline Screen& Screen::move(pos r, pos c)
//{
//	cursor = r * width + c;
//	return *this;
//}
//
//inline Screen& Screen::set(char c)
//{
//	contents[cursor] = c;
//	return *this;
//}
//
//inline Screen& Screen::set(pos r, pos c, char ch)
//{
//	contents[r * width + c] = ch;
//	return *this;
//}       exercise 7.32


//#include<iostream>
//#include<string>
//using namespace::std;
//struct Sales_data;
//istream& read(istream &, Sales_data &);
//class Sales_data{
//	friend istream& read(istream &, Sales_data &);
//	friend ostream& print(ostream &, Sales_data&);
//public:
//	//Sales_data() = default;
//	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n*p){ cout << "Sales_data(const string &s, unsigned n, double p)" << endl; }
//	//Sales_data(const string &s) :bookNo(s){}
//	//Sales_data(istream &s){ read(s, *this); } 
//	Sales_data() :Sales_data("", 0, 0){ cout << "Sales_data() " << endl; }
//	Sales_data(string s) :Sales_data(s, 0, 0){ cout << "Sales_data(string s)" << endl; }
//	Sales_data(istream &is) :Sales_data(){ read(is, *this); }
//
//	string isbn()const{ return bookNo; }
//	Sales_data& combine(const Sales_data&);
//private:
//	double avg_price()const{ return units_sold ? revenue / units_sold : 0; }
//	string bookNo;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//};
//Sales_data& Sales_data::combine(const Sales_data&rhs){
//	units_sold += rhs.units_sold;
//	revenue += rhs.revenue;
//	return *this;
//}
//istream& read(istream &is, Sales_data &item){
//	double price = 0.0;
//	is >> item.bookNo >> item.units_sold >> price;
//	item.revenue = price*item.units_sold;
//	return is;
//}
//ostream& print(ostream &os, Sales_data& item){
//	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
//	return os;
//}
//int main()
//{
//	cout << "1. default way: " << endl;
//	cout << "----------------" << endl;
//	Sales_data s1;
//
//	cout << "\n2. use std::string as parameter: " << endl;
//	cout << "----------------" << endl;
//	Sales_data s2("CPP-Primer-5th");
//
//	cout << "\n3. complete parameters: " << endl;
//	cout << "----------------" << endl;
//	Sales_data s3("CPP-Primer-5th", 3, 25.8);
//
//	cout << "\n4. use istream as parameter: " << endl;
//	cout << "----------------" << endl;
//	Sales_data s4(std::cin);
//
//	return 0;
//}     exercise 7.41


//#include<iostream>
//#include<string>
//using namespace::std;
//class Employee{
//public:
//	Employee(const string &a, const unsigned &b, const string &c) :name(a), age(b), gender(c){}
//	Employee() :Employee("", 0, ""){}
//	Employee(istream &d) :Employee(){ d >> name >> age >> gender; }
//private:
//	string name;
//	unsigned age;
//	string gender;
//};  //exercise 7.42
 
//#include<iostream>
//#include<vector>
//class NoDefault{
//public:
//	NoDefault(const int&);
//};
//class C{
//private:
//	NoDefault node;
//public:
//	C():node(0){}
//};
//int main(){
//	C c;
//	std::vector<c> vec(10);
//	return 0;
//}    exercise 7.43

//#include<iostream>
//#include<string>
//using namespace::std;
//struct Person;
//	istream &read(istream &, Person &);
//class Person{
//	friend istream &read(istream &, Person &);
//	friend ostream &print(ostream &, Person &);
//public:
//	Person() = default;
//    Person(const string &s, const string &n) :name(s), address(n){}
//	explicit Person(istream &p){ read(p, *this); }
//	string getname() const{ return name; }
//	string getadd()  const{ return address; }
//private:
//	string name;
//	string address;
//};    
//istream &read(istream &is, Person &p1){
//	is >> p1.name >> p1.address;
//	return is;
//}
//ostream &print(ostream &os, Person &p1){
//	os << p1.getname() << " " << p1.getadd();
//	return os;
//}     //exercise 7.50

