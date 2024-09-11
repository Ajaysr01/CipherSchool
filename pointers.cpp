#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int count_consonants(const string& word) {
    int count = 0;
    for (char c : word) {
        c = tolower(c);
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != ' ') {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;
    getline(std::cin, sentence);

    int total_consonants = 0;
    string word = "";
    for (char c : sentence) {
        if (c == ' ') {
            total_consonants += count_consonants(word);
            word = "";
        } else {
            word += c;
        }
    }
    total_consonants += count_consonants(word);

    cout << total_consonants << endl;
    return 0;
}































// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int num = 10;
//     int* ptr = &num;
//     int& ref = num;
//     cout << *ptr << " " << ref << endl;
//     num = 20;
//     cout << *ptr << " " << ref;
//     return 0;
// }