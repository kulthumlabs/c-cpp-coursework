#include<iostream>
using namespace std;

int main(){
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    cout << "=====================" << endl;
    cout << "WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "=====================" << endl;
    cout << endl;

    cout << "1. what is your name?";
    getline(cin, name);
    
    cout << "2. what course are you doing? (BBIT/BCS):";
    getline(cin, course);

    cout<< "3. what is your hobby?";
    getline (cin, hobby);

    cout << "4. why did you choose this course?";
    getline(cin, reason);

    cout << "5. what do you expect to learn in programming?";
    getline(cin, expectation);

    cout << "6. In your own words, what is programming?";
    getline(cin, definition);

    cout << endl;
    cout << "=====================" << endl;
    cout << "YOUR PROFILE SUMMARY" << endl;
    cout << "=====================" << endl;
    cout << endl;
    
    cout << "Name: " << name << endl;
    cout << "course: " << course << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Reason: " << reason << endl;
    cout << "Expectation: " << expectation << endl;
    cout << "programming is: " << definition << endl;
    cout << endl;

    cout << "=====================" << endl;
    cout << "Thank you for completing this!" << endl;
    cout << "=====================" << endl;


   return 0;
}  