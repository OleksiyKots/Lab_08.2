#include <iostream>
#include <string>
using namespace std;

bool IsAlpha(char c) {
    // ��������, �� ������ � ������� ��� ����� ���������� ������
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

string RemoveNonLettersBeforeFirstSpace(const string& s) {
    size_t spacePos = s.find(' ');  // ��������� ������� ������� ������
    if (spacePos == string::npos) {
        spacePos = s.length();  // ���� ���� ������, ������ ���� �����
    }

    string result;
    for (size_t i = 0; i < spacePos; ++i) {
        if (IsAlpha(s[i])) {  // ������ ���� ����� �� ����������
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
