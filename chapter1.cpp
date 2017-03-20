#include<iostream>
#include"Sales_item.h"
int main()
{
	/*int a = 0, b = 0;
	std::cout << "plz input two numbers:" << std::endl;
	std::cin  >> a >> b;
	std::cout << " the sum of " << a 
	<< " and " << b << " is " << a + b << std::endl;
	return 0;*/
	
	//exercise 3
	//std::cout << "Hello  World!" << std::endl;
	//return 0;

	//exercise 4
	//int a = 0, b = 0;
	//std::cout << "input 2 nums" << std::endl;
	//std::cin >> a >> b;
	//std::cout << "the mul of " << a << " and " << b << " is " << a*b << std::endl;
	//return 0;

	//exercise 5
	/*int a = 0;
	int b = 0;
	std::cout << "input 2 numbers:";
	std::cout << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cout << "the mul of ";
	std::cout << a;
	std::cout << "and";
	std::cout << b;
	std::cout << "is";
	std::cout << a*b;
	std::cout << std::endl;
	return 0;*/

	//exercise 6
	//it's falut
	//std::cout << "the sum of " << v1
	//    << " and " << v2
	//	<< " is " << v1 + v2 << std::endl;

	//exercise 7
	///*
	//*today is my first day to learn c++
	//*and i found that is /* impossible */ 
	//*but i have to learn it harder
	//*for my future jobseeking
	//*/
	//return 0;

	//exercise 8
	//std::cout << "/*";
	//std::cout << "*/";
	//std::cout << /* "*/" */ ";
	//std::cout <</* "*/" /* "/*" */;
	//return 0;

	//exercise 9
	/*int sum = 50, i = 0;
	while (sum <= 100)
	{
		i += sum;
		++sum;
	}
	std::cout << "the result is " << i << std::endl;
	return 0;
	*/
	//exercise 10
	//int  j = 10;
	//while (j > 0)
	//{
	//	--j;
	//	std::cout << " j= " << j << std::endl;		
	//}
	//return 0;

	//exercise 11
	/*int a = 0, b = 0;
	std::cout << " plz input two numbers: " << std::endl;
	std::cin >> a >> b;
	while (a > b)
	{
		std::cout << " the result are " << a << std::endl;
		--a;
	}
	while (a <= b)
	{
		std::cout << " the result are " << a << std::endl;
		++a;
	}*/

	//exercise 12
	/*int sum = 0;
	for (int i = -100; i <= 100; ++i)
	{
		sum += i;
		std::cout << i <<"  "<< sum << std::endl;
	}
	return 0;*/

	//exercise 13
	/*int i = 0;
	for (int sum = 50; sum <= 100; ++sum)
	i += sum;
	std::cout << i << std::endl;
	return 0;*/

	//for (int b = 10; b>0;--b)
	//	std::cout << b << std::endl;
	//return 0;

	/*int a , b ;
	std::cout << "input two numbers :" << std::endl;
	std::cin >> a >> b;
	for (int i=a; i > b; --i)
	std::cout << i << std::endl;
	for (int j=a; j <= b; ++j)
	std::cout << j << std::endl;
	return 0;*/
	/*int sum = 0, value = 0;*/

	// read until end-of-file, calculating a running total of all values read
	//while (std::cin >> value)
	//sum += value; // equivalent to sum = sum + value

	//std::cout << "Sum is: " << sum << std::endl;
	//return 0;

	//exercise 16
	//int sum = 0;
	//for (int i=0; std::cin >> i;)
	//	sum += i;
	//std::cout << sum << std::endl;
	//return 0;

	//// currVal is the number we're counting; we'll read new values into val
	//int currVal = 0, val = 0;
	//// read first number and ensure that we have data to process
	//if (std::cin >> currVal) {
	//	int cnt = 1;  // store the count for the current value we're processing
	//	while (std::cin >> val) { // read the remaining numbers 
	//		if (val == currVal)   // if the values are the same
	//			++cnt;            // add 1 to cnt 
	//		else { // otherwise, print the count for the previous value
	//			std::cout << currVal << " occurs "
	//				<< cnt << " times" << std::endl;
	//			currVal = val;    // remember the new value
	//			cnt = 1;          // reset the counter
	//		}
	//	}  // while loop ends here
	//	// remember to print the count for the last value in the file
	//	std::cout << currVal << " occurs "
	//		<< cnt << " times" << std::endl;
	//} // outermost if statement ends here
	//return 0;

	//EXERCISE 19
	/*int a=0, b=0, c=0;
	std::cout << "two numbers :" << std::endl;
	std::cin >> a >> b;*/
	/*if (a > b)
		for(int i = a; i >= b; --i)
			std::cout << i << std::endl;
	else
		for (; a <= b; ++a)
			std::cout << a << std::endl;
	return 0;*/
	//pro edition
	/*if (a > b)
	{
		c = b;
		b = a;
		a = c;
	}
			while (a <= b)
	{ 
		std::cout << a << std::endl;
		++a;
	}
	return 0;*/
	
	//exercise 20
	//Sales_item item;
	//while (std::cin >> item) 
	//	std::cout << item << std::endl;
	//return 0;

	//exercise 21
	//Sales_item item1, item2;
	//std::cin >> item1 >> item2;
	//std::cout << item1 + item2 << std::endl;
	//return 0;
	/*Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn()== item2.isbn())
		std::cout << item1 + item2 << std::endl;
	return 0;*/

	//exercise 22
	//Sales_item item;
	//if (std::cin >> item)
	//{
	//	Sales_item re_item;
	//	while (std::cin >> re_item)
	//	{
	//		if (item.isbn() == re_item.isbn())
	//			item += re_item;
	//		else
	//			std::cout << item << std::endl;
	//			item = re_item;
	//	}
	//	std::cout << item << std::endl;
	//}
	//return 0;

	//Sales_item total;
	//if (std::cin >> total) {
	//	Sales_item trans;
	//	while (std::cin >> trans) {
	//		if (total.isbn() == trans.isbn())
	//			total += trans;
	//		else {
	//			std::cout <<"qqq"<< total << std::endl;
	//			total = trans;
	//		}
	//	}
	//	std::cout <<"aaa"<<total << std::endl;
	//}
	//return 0;

	//exercise 24
	//Sales_item a,b;
	//if (std::cin >> a){
	//	int cnt = 1;
	//	while (std::cin >> b){
	//		if (a.isbn() == b.isbn())
	//		{
	//			++cnt;
	//		}
	//		else{
	//			std::cout << " a " << a < " has " << cnt << "times" << std::endl;
	//			a = b;
	//			cnt = 1;
	//		}
	//	}
	//	std::cout << "a" << a << "has" << cnt << "times" << std::endl;
	//}
	//return 0;

	
}
