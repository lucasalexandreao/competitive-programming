#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    int cont = 1;
    
    while (true) {
        cin >> n;
        if (n == 0)
            break;

        map<int, int> m;
        int pessoas, consumo;
        int total_pessoas = 0, total_consumo = 0;
        float media_pessoa, media_consumo;

        for (int i = 0; i < n; i++) {
            cin >> pessoas >> consumo;
            total_pessoas += pessoas;
            total_consumo += consumo;
            media_pessoa = consumo / pessoas;

            if(m.count(media_pessoa)) {
                m[media_pessoa] += pessoas;
            } else {
                m[media_pessoa] = pessoas;
            }
        }

        media_consumo = float(total_consumo) / total_pessoas;
        media_consumo = int(media_consumo*100) / 100.0;

        cout << fixed;
        cout.precision(2);
        cout << "Cidade# " << cont << ":\n";
        for (auto x : m) {
            cout << x.second << '-' << x.first << ' ';
        }
        cout << "\nConsumo medio: " << media_consumo << " m3.\n";
        cout << '\n';
        cont++;
    } 
}