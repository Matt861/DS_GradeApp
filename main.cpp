// Authors: Matt Windham (51) & Kevin Kim
// Due Date: 2/22/17
// Programming Assignment Number 3
// Spring 2017 - CS 3358 - Section Number 2
//
// Instructor: Husain Gholoom
//
//

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <functional>
#include <iomanip>

using namespace std;

class MyGrades
{
private:
    vector<int> quizzes;
    vector<int> progAssign;
    vector<int> midExams;
    
public:
    void setQuizGrades(int);
    void setProgAssignGrades(int);
    void setTestGrades(int);
    void quizAndAverage(int);
    void progAssignAndAverage(int);
    void testGrades(int);
    void overallGrade(int);
    };

int main ()
{
    MyGrades mG;
    char choice;
    int grade;
    bool condition = true;
    
    cout << "Welcome to My Grades APP." << endl << endl;
    cout << "   1.  Set A quiz Grade" << endl;
    cout << "   2.  Set A Programming Assignment Grade" << endl;
    cout << "   3.  Set A Test Grade" << endl;
    cout << "   4.  Show All quiz Grades" << endl;
    cout << "   5.  Show All Programming Assignment Grades" << endl;
    cout << "   6.  Show All Test Grades" << endl;
    cout << "   7.  Show Overall Grades" << endl;
    cout << "   9.  Exit The Program" << endl << endl;
    
    while(condition){
    
    cout << "Enter your choice --->   ";
    cin >> choice;
    
    switch(choice)
    {
        case '1' : mG.setQuizGrades(grade);
            break;
        case '2' : mG.setProgAssignGrades(grade);
            break;
        case '3' : mG.setTestGrades(grade);
            break;
        case '4' : mG.quizAndAverage(grade);
            break;
        case '5' : mG.progAssignAndAverage(grade);
            break;
        case '6' : mG.testGrades(grade);
            break;
        case '7' : mG.overallGrade(grade);
            break;
        case '9' :  cout << endl << endl << endl <<
            "Implemented by Matt Windham and Kevin Kim"
            << endl << "February - 2017" << endl << endl;
            return 0;
            break;
        
    }
                    }
    
    return 0;
}

void MyGrades::setQuizGrades(int grade)
{
    cout << "Enter quiz grade: ";
    cin >> grade;
    quizzes.push_back(grade);
}

void MyGrades::setProgAssignGrades(int grade)
{
    cout << "Enter programming assignment grade: ";
    cin >> grade;
    progAssign.push_back(grade);
}

void MyGrades::setTestGrades(int grade)
{
    cout << "Enter test grade: ";
    cin >> grade;
    midExams.push_back(grade);
}

void MyGrades::quizAndAverage(int grade)
{
    double average;
    
    cout << "Show all Quiz Grade with Average" << endl;
    cout << "Quiz Grades are As Follows " << endl;
    
    for (int i=0; i<quizzes.size();i++)
    {
        cout << quizzes[i] << " ";
        //cout << endl << int(quizzes.size()) << endl;
    }
    average = accumulate( quizzes.begin(), quizzes.end(), 0.0)/quizzes.size();
    cout << setprecision(3) << endl << "Average Quiz Grades is "
    << average << " out of 10" << endl << endl;
}

void MyGrades::progAssignAndAverage(int grade)
{
    double average;
    
    cout << "Show all Programming Assignment Grade with Average" << endl;
    cout << "Programming Assignment Grades are As Follows " << endl;
    
    for (int i=0; i<progAssign.size();i++)
    {
        cout << progAssign[i] << " ";
        //cout << endl << int(progAssign.size()) << endl;
    }
    average = accumulate( progAssign.begin(), progAssign.end(), 0.0)/progAssign.size();
    cout << setprecision(3) << endl << "Average Programming Assigment Grades is "
    << average << " out of 20" << endl << endl;
}

void MyGrades::testGrades(int grade)
{
    double average;
    
    cout << "Show all Test Grade with Average" << endl;
    cout << "Test Grades are As Follows " << endl;
    
    for (int i=0; i<midExams.size();i++)
    {
        cout << midExams[i] << " ";
        //cout << endl << int(midExams.size()) << endl;
    }
    average = accumulate( midExams.begin(), midExams.end(), 0.0)/midExams.size();
    cout << setprecision(3) << endl << "Average Exam Grades is "
    << average << " out of 40" << endl << endl;
}

void MyGrades::overallGrade(int grade)
{
    double average1, average2, average3, total;
    
    cout << "My Overall Grades so far are as follows: " << endl;
    
    cout << endl << "Quiz Grades are as Follows" << endl;
    for (int i=0; i<quizzes.size();i++)
    {
        cout << quizzes[i] << " ";
    }
    average1 = accumulate( quizzes.begin(), quizzes.end(), 0.0)/quizzes.size();
    cout << setprecision(3) << endl << endl << "Average Quiz Grades is "
    << average1 << " out of 10" << endl << endl;
    
    cout << "Programming Assignment Grades are as Follows" << endl;
    for (int i=0; i<progAssign.size();i++)
    {
        cout << progAssign[i] << " ";
    }
    average2 = accumulate( progAssign.begin(), progAssign.end(), 0.0)/progAssign.size();
    cout << setprecision(3) << endl << endl << "Average Programming Assignment Grades is "
    << average2 << " out of 20" << endl << endl;
    
    cout << "Test Grades are as Follows" << endl;
    for (int i=0; i<midExams.size();i++)
    {
        cout << midExams[i] << " ";
    }
    average3 = accumulate( midExams.begin(), midExams.end(), 0.0)/midExams.size();
    cout << setprecision(3) << endl << endl << "Average Test Grades is "
    << average3 << " out of 40" << endl << endl;
    
    total = average1 + average2 + average3;
    
    cout << "Overall Total -->   " << total << " out of 70";
    cout << endl << endl;
    
}