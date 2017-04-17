// str1.cpp -- introducing the string class
#include <iostream>
#include <string>
// using string constructors

int main()
{
    using namespace std;
    //string one("Lottery Winner!");     // ctor #1
    //cout << one << endl;               // overloaded <<
    //string two(20, '$');               // ctor #2
    //cout << two << endl;
    //string three(one);                 // ctor #3
    //cout << three << endl;
    //one += " Oops!";                   // overloaded +=
    //cout << one << endl;
    //two = "Sorry! That was ";
    //three[0] = 'P';
    //string four;                       // ctor #4
    //four = two + three;                // overloaded +, =
    //cout << four << endl;
    //char alls[] = "All's well that ends well";
    //string five(alls,40);              // ctor #5
    //cout << five << "!\n";
    //string six(alls+6, alls + 10);     // ctor #6
    //cout << six  << ", ";
    //string seven(&five[6], &five[10]); // ctor #6 again
    //cout << seven << "...\n";
    //string eight("abcvdvdvdvdvdvdv", 7, 50);         // ctor #7
    //cout << eight << "! in motion!" << endl;
	//string str;
	//cin >> str;
	//cout << str;
	//string str2;
	//cin >> str2;
	//cout << str2 << endl;
	//char a;
	//cin.get(a);
	//cout << int(a);
	//cout << char(10);
	//cout << char(10);
	//cout << char(10);
	string str2 = "abdbdb";
	cout << str2.find("db");
	char a[] = str2;
	system("pause");
    return 0; 
}
