//#include<iostream>
//#include<vector>
//#include<string>
//#include<memory>
//using namespace::std;
//class StrBlob{
//public:
//	typedef vector<string>::size_type size_type;
//	StrBlob() :data(make_shared<vector<string>>()){}
//	StrBlob(initializer_list<string> il) :data(make_shared<vector<string>>(il)){}
//	size_type size()const{ return data->size(); }
//	bool empty() const{ return data->empty(); }
//	void push_back(const string &t){ data->push_back(t); }
//	void pop_back()
//	{
//		check(0, "pop_back on empty StrBlob");
//		data->pop_back();
//	}
//	string &front()
//	{
//		check(0, "front on empty StrBlob");
//		return data->front();
//	}
//	string &back()
//	{
//		check(0, "back on empty StrBlob");
//		return data->back();
//	}
//private:
//	shared_ptr<vector<string>> data;
//	void check(size_type i, const string &msg)const
//	{
//		if (i >= data->size())
//			throw out_of_range(msg);
//	}
//};
//int main()
//{
//	StrBlob csb{ "hello", "world", "fafa" };
//	StrBlob sb{ "hello", "world", "momo" };
//
//	std::cout << csb.front() << " " << csb.back() << std::endl;
//	sb.back() = "kitty";
//	std::cout << sb.front() << " " << sb.back() << std::endl;
//}
//exercise 12.2

//#include<memory>
//#include<vector>
//#include<iostream>
//using namespace::std;
//vector<int> *a(){
//	vector<int> *p = new vector<int>();
//	return p;
//}
//void b(vector<int> *i){
//	int k;
//	cout << "input num" << endl;
//	while (cin >> k)
//		i->push_back(k);
//}
//void c(vector<int> *o){
//	for (auto &d : *o)
//		cout << d << endl;
//}
//int main(){
//	vector<int> *ptr=a();
//	b(ptr);
//	c(ptr);
//	delete ptr;
//	return 0;
//}
//exercise 12.6

//#include<iostream>
//#include<vector>
//#include<memory>
//using namespace::std;
//shared_ptr<vector<int>> func1(){
//	return  make_shared<vector<int>>();
//}
//void func2(shared_ptr<vector<int>> a){
//	cout << "input nums" << endl;
//	int k;
//	while (cin >> k)
//		a->push_back(k);
//}
//void func3(shared_ptr<vector<int>> b){
//	for (auto &u : *b)
//		cout << u << endl;
//}
//int main(){
//	auto ptr=func1();
//	func2(ptr);
//	func3(ptr);
//	return 0;
//}
//exercise 12.7

//#include <vector>
//#include <string>
//#include <initializer_list>
//#include <memory>
//#include <exception>
//#include <fstream>
//#include <iostream>
//using std::vector;
//using std::string;
//
//class StrBlobPtr;
//
//class StrBlob {
//public:
//	using size_type = vector<string>::size_type;
//	friend class StrBlobPtr;
//
//	StrBlobPtr begin();
//	StrBlobPtr end();
//
//	StrBlob() : data(std::make_shared<vector<string>>()) {}
//	StrBlob(std::initializer_list<string> il)
//		: data(std::make_shared<vector<string>>(il))
//	{
//	}
//
//	size_type size() const { return data->size(); }
//	bool empty() const { return data->empty(); }
//
//	void push_back(const string& t) { data->push_back(t); }
//	void pop_back()
//	{
//		check(0, "pop_back on empty StrBlob");
//		data->pop_back();
//	}
//
//	std::string& front()
//	{
//		check(0, "front on empty StrBlob");
//		return data->front();
//	}
//
//	std::string& back()
//	{
//		check(0, "back on empty StrBlob");
//		return data->back();
//	}
//
//	const std::string& front() const
//	{
//		check(0, "front on empty StrBlob");
//		return data->front();
//	}
//	const std::string& back() const
//	{
//		check(0, "back on empty StrBlob");
//		return data->back();
//	}
//
//private:
//	void check(size_type i, const string& msg) const
//	{
//		if (i >= data->size()) throw std::out_of_range(msg);
//	}
//
//private:
//	std::shared_ptr<vector<string>> data;
//};
//
//class StrBlobPtr {
//public:
//	StrBlobPtr() : curr(0) {}
//	StrBlobPtr(StrBlob& a, size_t sz = 0) : wptr(a.data), curr(sz) {}
//	bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
//	string& deref() const
//	{
//		auto p = check(curr, "dereference past end");
//		return (*p)[curr];
//	}
//	StrBlobPtr& incr()
//	{
//		check(curr, "increment past end of StrBlobPtr");
//		++curr;
//		return *this;
//	}
//
//private:
//	std::shared_ptr<vector<string>> check(size_t i, const string& msg) const
//	{
//		auto ret = wptr.lock();
//		if (!ret) throw std::runtime_error("unbound StrBlobPtr");
//		if (i >= ret->size()) throw std::out_of_range(msg);
//		return ret;
//	}
//	std::weak_ptr<vector<string>> wptr;
//	size_t curr;
//};
//StrBlobPtr StrBlob::begin()
//{
//	return StrBlobPtr(*this);
//}
//StrBlobPtr StrBlob::end()
//{
//	return StrBlobPtr(*this, data->size());
//}
//
//int main()
//{
//	std::ifstream ifs("../data/book.txt");
//	StrBlob blob;
//	for (std::string str; std::getline(ifs, str);) blob.push_back(str);
//	for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend;
//		pbeg.incr())
//		std::cout << pbeg.deref() << std::endl;
//}
//exercise 12.19 12.20   from pezy

//#include<iostream>
//#include<string>
//using namespace::std;
//int main(){
//	char *c = new char[100]();
//	strcat(c,"big");
//	strcat(c, "dan");
//	cout << c << endl;
//	delete[]c;
//	return 0;
//}
//exercise 12.23

//#include<iostream>
//#include<string>
//using namespace::std;
//int main(){
//	int size = 0;
//	char *p = new char[size + 1]();
//	cout << "what your size?";
//	cin >> size;
//    cin.ignore();
//	cout << "input";
//	cin.get(p, size + 1);
//	cout << p << endl;
//	delect[] p;
//	return 0;
//}
//exercise 12.24

//#include<iostream>
//#include<string>
//#include<memory>
//using namespace::std;
//int main(){
//	allocator<string> alloc;
//	int n;
//	string s;
//	cin >> n;
//	auto const p = alloc.allocate(n);
//	auto q = p;
//	while (cin >> s && q != p + n)
//		alloc.construct(q++, s);
//	while (q != p)
//		alloc.destroy(--q);
//	alloc.deallocate(p,n);
//}
//exercise 12.26

