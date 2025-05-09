#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n, q;
    int cont = 1;
    do {
        cin >> n >> q;
        if (n == 0 && q ==0) break;
        
        vector<int> marbles(n);
        vector<int> consultas(q);
        
        for (int i = 0; i < n; i++) cin >> marbles[i];
        sort(marbles.begin(), marbles.end());
        for (int i = 0; i < q; i++) cin >> consultas[i];
        
        cout << "CASE# " << cont << ":\n";
        for (int consulta : consultas) {
            auto it = find(marbles.begin(), marbles.end(), consulta);
            if (it != marbles.end())
                cout << consulta << " found at " << it - marbles.begin() + 1 << '\n';
            else
                cout << consulta << " not found\n";
        }

        cont++;
        
    } while(n > 0 && q > 0);

    return 0;
}