#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Palindrome {
public:
    bool isPalindrome(const string sentence) {
        return equal(sentence.begin(), sentence.begin() + sentence.size()/2, sentence.rbegin()) ? true : false;
    }
};

int main()
{
    Palindrome p;
    cout << "Is palindrome" << endl;
    cout << "ABCBA: " << p.isPalindrome("ABCBA") << '\n';
    cout << "aBCBA: " << p.isPalindrome("aBCBA") << '\n';
    cout << "kobyla ma maly bok: " << p.isPalindrome("kobyla ma maly bok") << '\n';
    cout << "kobylamamalybok: " << p.isPalindrome("kobylamamalybok") << '\n';
    return 0;
}
