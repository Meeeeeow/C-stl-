#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
private:
    string fname,lname;
    int age,standard;
public:
    void setfname(string x)
    {
        fname=x;
    }
    void setlname(string x)
    {
        lname=x;
    }
    void setage(int x)
    {
        age=x;
    }
    void setstandard(int x)
    {
        standard=x;
    }
    string get_first_name()
    {
        return fname;
    }
    string get_last_name()
    {
        return lname;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        ss<<age<<","<<fname<<","<<lname<<","<<standard<<endl;
        return ss.str();
    }
};
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.setage(age);
    st.setstandard(standard);
    st.setfname(first_name);
    st.setlname(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}
