#include<iostream>
using namespace std;

class ELearning {
    public: 
        int courses[];
        int students[];

    ELearning(int a){
        cout << a;
    }
    private: 
        void getStudents();
        void getCourses();
};

class AuthUser{
    private:
        char username;
        char password;
    bool authenticateUser(){
        cout << "authenticated";
    }
};

int main() {

    const ELearning elearning =  ELearning();
    return 0;
}