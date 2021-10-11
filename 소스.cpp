#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Vector" << endl;

    vector<string> students_list;

    students_list.push_back("stanly");
    students_list.push_back("john");
    students_list.push_back("lala");

    vector<string>::iterator iter;

    for (iter = students_list.begin(); iter != students_list.end(); iter++)
    {
        cout << *iter << endl;
    }
    return 0;
}