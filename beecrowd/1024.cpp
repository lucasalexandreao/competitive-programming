#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    char ch;
    cin.get();
    for (int i = 0; i < n; i++) {
        string linha;
        getline(cin, linha);

        for (int i = 0; i < linha.length(); i++) {
            if (isalpha(linha[i])) {
                linha[i] += 3;
            }
        }

        reverse(linha.begin(), linha.end());

        int metade = linha.length()/2;
        for (int i = metade; i < linha.length(); i++) {
            linha[i]--;
        }

        cout << linha << '\n';
    }

    return 0;
}