#include<iostream>
using namespace std;

int main()
{
    string questions[] = {
        "1. What year was C++ created ?: ",
        "2. Who invented C++?: ",
        "3. What is the predecessor of C++?: ",
        "4. Is Earth Flat?: "
    };

    string options[][4] = {
        {"A. 1969", "B. 1972", "C. 1983", "D. 1991"},
        {"A. Guido Van Rossum", "B. Bjarne Stroustrup", "C. John Cabre", "D. Dennis Ritchie"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. Yes", "B. No", "C. Sometimes", "D. What's earth?"}
    };

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Enter your answer (A, B, C, or D): ";
        cin >> guess;

        if (guess == answerKey[i]) {
            score++;
        }
    }

    cout << "Your score: " << score << "/" << size << endl;

    return 0;
}