#include<iostream>
#include<string>
using namespace std;
class Student
{
        private:
                int num;//学号
                    char name[100];//名字
                        int score;//成绩
                            public:
                            Student(int n,char *str,int s);
                                ~Student();
                                    int print();
                                        int Set(int n,char *str,int s);

};
Student::Student(int n,char *str,int s)
{
         num = n;
              strcpy(name,str);
                   score = s;
                        cout<<num<<" "<<name<<" "<<score<<" ";
                             cout<<"Constructor"<<endl;

}
Student::~Student()
{
        cout<<num<<" "<<name<<" "<<score<<" ";
            cout<<"destructor"<<endl;

}
int Student::print()
{
        cout<<num<<" "<<name<<" "<<score<<endl;
            return 0;

}
int Student::Set(int n,char *str,int s)
{
         num = n;
              strcpy(name,str);
                   score = s;

}
int main()
{
        Student A(100,"dot",11);
            Student B(101,"cpp",12);
                return 0;

}
