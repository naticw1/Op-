#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
/*16: У заданому рядку символів визначити слова, що мають однакові перший та останній символи.
Слова відділяються довільною кількістю пробілів*/
string getWord (string str,string del, int &number, int &k );
string *split(string str, string del, int &k);
string getWord (string str, string del, int &number, int &k){
    string *wordsL = split (str,del,k);
    char first;
    char last;
    string lastList = "";
    for (int i = 0; i < k ;i++){
        int end1 = wordsL[i].size() - 1 ;
        char first = tolower (wordsL[i][0]);    // перетворення на малу літеру 
        char last =  tolower (wordsL[i][end1]);
        if (first == last){
            lastList += " " + wordsL[i];
            number++;
        } 
    }
    return lastList;
}
string *split(string str, string del ,int &k){  // split для довільнох заданнох кількості символів 
    int start = 0;
    string *result = new string[str.size()];
    delete[] str ;
    int end = str.find(del);
    while (end != -1) {
        result[k] += str.substr(start, end - start);
        start = end + del.size();
        end = str.find(del, start);
        k++;
    }
    return result;
}

int main(){
    string del = "  ";  //два пробіли
    string str ;
    cout << "Please enter a string :"<< endl;
    getline(cin , str);
    int k = 0;
    int number = 0;
    string gg = getWord(str, del, number , k );
    cout << "Number of words per line: " << number <<endl;
    cout << "List of such words : "  << gg <<endl;
}