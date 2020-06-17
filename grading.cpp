#include <vector>
//https://www.hackerrank.com/challenges/grading/problem

using std::vector;
vector<int> gradingStudents(vector<int> grades) {
    for (auto grade = grades.begin(); grade < grades.end(); grade++) {
        if (*grade < 38)
            continue;

        if ((*grade + 1) % 5 == 0 || (*grade + 2) % 5 == 0) {
            *grade = (*grade / 5) * 5 + 5;
        }
    }
    return grades;
}