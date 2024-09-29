#include <iostream>
#include "find.hpp"

using namespace std;

int main() {
    string inputString = "The quick brown fox";

    cout << "Input String\t\tSearch Query Returns Search Query Type" << endl;
    cout << "\"" << inputString << "\"\t\'e'\t\t" <<    find(inputString,'e') << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\"e\" \t\t" << find(inputString,   "e") << "\tstring" << endl;
    cout << "\"" << inputString << "\"\t\' '\t\t" << find(inputString,  ' ') << "\tchar" << endl;
    cout << "\"" << inputString << "\"\t\"quick\"\t\t" << find(inputString, "quick") << "\tstring" << endl;
    cout << "\"" << inputString << "\"\t\"quiet\"\t\t" << find(inputString, "quiet") << "\tstring" << endl;

    return 0;
}
