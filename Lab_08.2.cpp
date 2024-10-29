#include <iostream>
#include <string>
using namespace std;

bool IsAlpha(char c) {
    // Перевіряє, чи символ є великою або малою латинською літерою
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

string RemoveNonLettersBeforeFirstSpace(const string& s) {
    size_t spacePos = s.find(' ');  // Знаходимо позицію першого пробілу
    if (spacePos == string::npos) {
        spacePos = s.length();  // Якщо немає пробілу, беремо весь рядок
    }

    string result;
    for (size_t i = 0; i < spacePos; ++i) {
        if (IsAlpha(s[i])) {  // Додаємо лише літери до результату
            result += s[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string processedStr = RemoveNonLettersBeforeFirstSpace(str);
    cout << "Processed string: " << processedStr << endl;

    return 0;
}
