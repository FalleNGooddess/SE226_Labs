#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string* duygu(string list[], string word) {

    int counter = 0;
    string* anagramList = new string[6];

    transform(word.begin(), word.end(), word.begin(), ::tolower);
    sort(word.begin(), word.end());

    for (int i = 0; list[i] != ""; i++) {
        string temp = list[i];
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
        sort(temp.begin(), temp.end());

        if (temp == word) {
            anagramList[counter++] = list[i];
        }
    }
    anagramList[counter] = "";
    return anagramList;
}



int main() {
    string key = "cinema";
    string emotions_list[] = {"duygu", "inlets", "banana", "iceman"};

    string* anagramList = duygu(emotions_list, key);

    cout << "Anagrams: \"" << key << "\" " << endl;
    for (int d = 0; anagramList[d] != ""; d++) {
        cout << anagramList[d] << endl;
    }
    return 0;
}
