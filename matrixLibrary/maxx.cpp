#include "maxx.h"
#include <iostream>
#include<vector>

using namespace std;

#define ll long long

namespace maxx {

    int PrintMessage()
    {
        int m1, n1, m2, n2;
        cout << "Enter the number of rows and columns of the first matrix: ";
        cin >> m1 >> n1;
        cout << "Enter the number of rows and columns of the second matrix: ";
        cin >> m2 >> n2;

        // Check if the matrices can be multiplied
        if (n1 != m2) {
            cout << "The matrices cannot be multiplied." << endl;
            return 0;
        }
        vector<vector<int>>A(m1, vector<int>(n1));
        vector<vector<int>>B(m2, vector<int>(n2));
        vector<vector<int>>C(m1, vector<int>(m2));
        // int A[m1][n1], B[m2][n2], C[m1][n2];

         // Input elements of the first matrix
        cout << "Enter the elements of the first matrix: " << endl;
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n1; j++) {
                cin >> A[i][j];
            }
        }

        // Input elements of the second matrix
        cout << "Enter the elements of the second matrix: " << endl;
        for (int i = 0; i < m2; i++) {
            for (int j = 0; j < n2; j++) {
                cin >> B[i][j];
            }
        }

        // Multiply the matrices
        for (int i = 0; i < m1; i++) {
            for (int j = 0; j < n2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < n1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        for (int i = 0;i < m1;i++)
        {
            for (int j = 0;j < n2;j++)
                cout << C[i][j] << " ";
            cout << endl;
        }
        return 0;
    }



 }


	
