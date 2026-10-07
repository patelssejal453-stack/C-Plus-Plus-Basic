#include <iostream>
using namespace std;
// claa=template(blueprint)
class Employee
{
public: // pyblic,private and protected access modifier
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and her salary is " << this->salary << " Dollars." << endl;
    }
    void getSecretPassword()
    {
        cout << "The secret password of employee is" << this->secretPassword;
    }

private:
    int secretPassword;
};
int main()
{
    Employee sej("sejal constructor", 567, 356776);
    // sej.name = "sejal";
    // sej.salary = 456;
    //  cout<<"The name of our first employee is "<<sej.name<<" and her salary is "<<sej.salary<<" Dollars."<<endl;
    // cout<<sej.secretPassword<<endl;
    sej.printDetails();
    sej.getSecretPassword();
    return 0;
}