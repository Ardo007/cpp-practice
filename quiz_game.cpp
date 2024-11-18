#include <iostream>

using namespace std;

int main() {

    string questions[] = {"1. what year was C++ created?: ",
                          "2. who invented C++?:  ",
                          "3. what is the predececcor of C++?: ",
                          "4. is the earth flat?: "};

    string options[][4] =   {
                                {"A. 1969", "B. 1975", "C. 1985", "D. 1989" },
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerburh"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. yes", "B. No", "C. sometimes", "D. What's earth?"}
                            };
                            
    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        cout << "**************************\n";
        cout << questions[i] << '\n';
        cout << "**************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "correct!\n";
            score++;
        }
        else{
            cout << "wrong!\n";
            cout << "answer: " << answerKey[i] << '\n';
        }
    }

    cout << "**************************\n";
    cout << "*          RESULTS       *\n";
    cout << "**************************\n";
    cout << "correct guesses: " << score << '\n';
    cout << "# of questions: " << size << '\n';
    cout << "score: " << (score/ (double) size)*100 << "%" << '\n';


    
    return 0;
}