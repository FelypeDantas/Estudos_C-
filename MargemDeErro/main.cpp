#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    double z, o, n, m, e;
    int r1, r2;
    
    vector<double> zValues = {0.90, 0.95, 0.99};
    vector<double> zScores = {1.645, 1.96, 2.575};

    cout << "Informe o percentual de Zc (0.90, 0.95 ou 0.99): ";
    cin >> z;
    
    auto it = find(zValues.begin(), zValues.end(), z);
    if (it == zValues.end()) {
        cout << "Zc inválido, digite entre 0.90, 0.95 ou 0.99" << endl;
        return 1;
    }
    
    cout << "Informe o valor do desvio padrão: ";
    cin >> o;
    
    cout << "Informe o número de amostras: ";
    cin >> n;
    
    cout << "Informe a média: ";
    cin >> m;
    
    double zScore = zScores[it - zValues.begin()];
    
    e = (zScore * o) / sqrt(n);
    
    r1 = static_cast<int>(m - e);
    r2 = static_cast<int>(m + e);
    
    cout << r1 << " < u < " << r2 << endl;

    return 0;
}
