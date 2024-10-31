#include <iostream>
#include <string>

using namespace std;

class String {
private:
    string str;

public:
    String(const string& s = "") : str(s) {}

    char& operator[](size_t index) {
        return str[index];
    }

    int operator()(char c) const {
        for (size_t i = 0; i < str.length(); ++i) {
            if (str[i] == c) {
                return i;
            }
        }
        return -1;
    }

    operator int() const {
        return static_cast<int>(str.length());
    }

    const string& getString() const {
    }
};

int main() {
    String myString("Hello World!");

    cout << "Character at index 4: " << myString[4] << endl;

    char searchChar = 'W';
    int index = myString(searchChar);
    if (index != -1) {
        cout << "Character_" << searchChar << "_ found at index: " << index << endl;
    }
    else {
        cout << "Character_" << searchChar << "_ not found." << endl;
    }

    int length = myString;
    cout << "Length of string: " << length << endl;
}
