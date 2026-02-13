#include <array>
#include <iostream>
using namespace std;
int main() {
  array<array<array<array<array<array<array<array<array<array<int, 2>, 2>, 2>, 2>, 2>, 2>, 2>, 2>, 2> arr{};

    // Initialize the array
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                for (int l = 0; l < 2; ++l)
                    for (int m = 0; m < 2; ++m)
                        for (int n = 0; n < 2; ++n)
                            for (int o = 0; o < 2; ++o)
                                for (int p = 0; p < 2; ++p)
                                    for (int q = 0; q < 2; ++q)
                                        for (int r = 0; r < 2; ++r)
                                            arr[i][j][k][l][m][n][o][p][q][r] = i + j + k + l + m + n + o + p + q + r;

    // Print the array
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 2; ++j)
            for (int k = 0; k < 2; ++k)
                for (int l = 0; l < 2; ++l)
                    for (int m = 0; m < 2; ++m)
                        for (int n = 0; n < 2; ++n)
                            for (int o = 0; o < 2; ++o)
                                for (int p = 0; p < 2; ++p)
                                    for (int q = 0; q < 2; ++q)
                                        for (int r = 0; r < 2; ++r)
                                            cout << "arr[" << i << "][" << j << "][" << k << "][" << l << "][" << m << "][" << n << "][" << o << "][" << p << "][" << q << "][" << r << "] = " << arr[i][j][k][l][m][n][o][p][q][r] << endl;

    return 0;
}
