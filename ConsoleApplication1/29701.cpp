//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <unordered_map>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	
//    int N;
//    cin >> N;
//
//    unordered_map<string, char> morse;
//
//    morse[".-"] = 'A';
//    morse["-..."] = 'B';
//    morse["-.-."] = 'C';
//    morse["-.."] = 'D';
//    morse["."] = 'E';
//    morse["..-."] = 'F';
//    morse["--."] = 'G';
//    morse["...."] = 'H';
//    morse[".."] = 'I';
//    morse[".---"] = 'J';
//    morse["-.-"] = 'K';
//    morse[".-.."] = 'L';
//    morse["--"] = 'M';
//    morse["-."] = 'N';
//    morse["---"] = 'O';
//    morse[".--."] = 'P';
//    morse["--.-"] = 'Q';
//    morse[".-."] = 'R';
//    morse["..."] = 'S';
//    morse["-"] = 'T';
//    morse["..-"] = 'U';
//    morse["...-"] = 'V';
//    morse[".--"] = 'W';
//    morse["-..-"] = 'X';
//    morse["-.--"] = 'Y';
//    morse["--.."] = 'Z';
//
//    morse[".----"] = '1';
//    morse["..---"] = '2';
//    morse["...--"] = '3';
//    morse["....-"] = '4';
//    morse["....."] = '5';
//    morse["-...."] = '6';
//    morse["--..."] = '7';
//    morse["---.."] = '8';
//    morse["----."] = '9';
//    morse["-----"] = '0';
//
//    morse["--..--"] = ',';
//    morse[".-.-.-"] = '.';
//    morse["..--.."] = '?';
//    morse["---..."] = ':';
//    morse["-....-"] = '-';
//    morse[".--.-."] = '@';
//
//    string out = "";
//    for (int i = 0; i < N; i++) {
//        string input;
//        cin >> input;
//        out += morse[input];
//    }
//    cout << out;
//}