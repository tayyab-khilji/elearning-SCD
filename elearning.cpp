#include<iostream>
using namespace std;

class ELearning {
    public: 
        int courses[];
        int students[];

    ELearning(int a){
        cout >> a;
    }
    private: 
        void getStudents();
        void getCourses();
};

class Ebooks{
    private: 
        string name;
        string owner;
}

int main() {

    new ELearning();
    return 0;
}