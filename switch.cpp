#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    // SWITCH STATEMENT

    /* int age;
     cout << "Enter your age:" << endl;
     cin >> age;
     switch (age)
     {
     case 12:
         cout << "You are 12 years old" << endl;
         break;
     case 18:
         cout << "You are 18 years old" << endl;
         break;
     default:
         cout << "You are neither 12 nor 18 years old" << endl;
         break;
     }*/

    // LOOPS(ITERATIVE STATEMENTS(WHILE,DO-WHILE AND FOR LOOP))

    /*int index=0;
    while(index<34)//WHILE LOOP
    {
        cout<<"We are at index number:"<<index<<endl;
        index=index+1;
    }*/
    
    /*int index = 0;
    do//DO-WHILE LOOP
    {
        cout << "We are at index number:" << index << endl;
        index = index + 1;
    } while (index < 33);*/

/*for (int i = 0; i < 34; i++)//FOR LOOP
{
    cout<<"The value of i is:"<<i<<endl;
}*/

//FUNCTIONS

int a,b;
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
    cout<<"The function returned is:"<<sum(a,b);


    return 0;
}