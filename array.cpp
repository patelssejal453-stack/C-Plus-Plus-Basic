#include <iostream>
#include<string>//it is only use for string function
using namespace std;
int main()
{
    //1D ARRAY

    // arrayindex 0  1  2
    // int arr[3] = {1, 3, 6};
    // cout << arr[1];
    // int marks[6];
    // for (int i = 0; i < 6; i++)
    //{
    // cout<<" the marks of:"<<i<<"th student"<<marks[i]<<endl;
    // }

    //2D ARRAY

   /* int arr2d[2][3]={
        {1,2,3},
        {4,5,6}
};
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<"The value at "<<i<<","<<j<<"is"<<arr2d[i][j]<<endl;
    }
    
}*/

//STRINGS

/*string name="sejal kumari";
cout<<"My name is "<<name<<endl;
cout<<"My name length is "<<name.length()<<endl;
cout<<"My name  is "<<name.substr(0,2)<<endl;
cout<<"My name is "<<name.substr(2,3)<<endl;*/

//POINTRS 

int a=46;
int* ptra;
ptra=&a;
//*ptra=a;
cout<<"The value of a is "<<a<<endl;
cout<<"The value of a is "<<*ptra<<endl;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<ptra<<endl;

    return 0;
}