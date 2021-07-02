#include <iostream>
#include <string>
using namespace std;
class Student{

    private:
        string mName;
        int mId;
        bool mGender;
        int mGrade;
        double mHeight;
        double mWeight;

    public:
        string doHomework(string subject){
            return subject + "is finished.";
        };

        void setName(string name){
            mName = name;
        }

        string getName(){
            return mName;
        }

        Student(string name){//有参构造
            mName = name;
        }

        Student(){//无参构造

        }

};

int main(){
    Student student;
    student.setName("zhangsan");
    cout << student.getName() << "\'s " << student.doHomework("Math");
    
}