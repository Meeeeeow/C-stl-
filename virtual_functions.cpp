#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int prof_id=0;
int std_id=0;
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person{
public:
   virtual void getdata(){};
   virtual void putdata(){};
private:
    string name;
    int age;
public:
    void setName(string x)
    {
        name=x;
    }
    void setAge(int x)
    {
        age=x;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }

};
class Professor: public Person {
private:
    int publications,cur_id;
public:
    void setpub(int x)
    {
        publications=x;
    }
    int getpublications()
    {
        return publications;
    }

public:
    void getdata()
    {
        string name;
        int age,publications;
        cin>>name>>age>>publications;
        setName(name);
        setAge(age);
        setpub(publications);
    }
    void putdata()
    {
        cout<<getName()<<" "<<getAge()<<" "<<getpublications()<<" "<<++prof_id<<endl;
    }
};
class Student:public Person{
public:
    int marks[6];
    int total;
public:
    void getdata()
    {
        string name;
        int age;
        total=0;
        cin>>name>>age;
        setName(name);
        setAge(age);
        for(int i=0;i<6;i++)
        {
            cin>>marks[i];
            total+=marks[i];
        }
    }
    void putdata()
    {
        cout<<getName()<<" "<<getAge()<<" "<<total<<" "<<++std_id<<endl;

    }

};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

