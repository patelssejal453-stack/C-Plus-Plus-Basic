// C++ FIRST PROGRAM

#include <iostream>
using namespace std;
int main()
{
    //  cout<<"hello world"<<endl;
    //  cout<<"Next line";

    // DATA TYPE(variable is a case sensitive,variable satrts with letter and underscore
    //  but never starts with number)
    // int a,b,c;//int data type
    // short sa=9;//short data type
    // cout<<sa;

    int marksInMaths = 67; // CAMELCASE NOTATION
    cout << "the marks of the student in maths is:" << marksInMaths << endl;

    short a;
    int b;
    long c;
    long long d;
    
    double score2 = 53.678;
    cout << "the score2 is:" << score2 << endl;
    
    long double score3 = 46.789;
    cout << "the score3 is:" << score3 << endl;
    
    float score = 567.8;
    score = 678.6; // reassign value
    
    // float const score=567.8;(bcz of const keyword we can't assign new value)
    cout << "the score is:" << score;
   
    // SIZE OF DATA TYPE
    cout << "the size of short is:" << sizeof(short) << endl;
    cout << "the size of int is:" << sizeof(int) << endl;
    cout << "the size of long is:" << sizeof(long) << endl;
    cout << "the size of long long is:" << sizeof(long long) << endl;
    cout << "the size of float is:" << sizeof(float) << endl;
    cout << "the size of double is:" << sizeof(double) << endl;
    cout << "the size of long double is:" << sizeof(long double) << endl;
    return 0;
}