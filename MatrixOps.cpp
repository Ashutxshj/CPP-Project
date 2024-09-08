//? Perform matrix addition, subtraction, multiplication, and transposition.
#include <iostream>
#include <vector>
using namespace std;

class Matrix
{
public:
    void print_matrix(const vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    vector<vector<int>> matrix_addition(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        return mat;
    }

    vector<vector<int>> matrix_subtraction(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        return mat;
    }

    vector<vector<int>> matrix_multiplication(vector<vector<int>> mat1, vector<vector<int>> mat2)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        int p = mat2.size();
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                for (int k = 0; k < p; k++)
                {
                    mat[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
        return mat;
    }

    vector<vector<int>> matrix_transposition(vector<vector<int>> mat1)
    {
        int n = mat1.size();
        int m = mat1[0].size();
        vector<vector<int>> mat(m, vector<int>(n, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[j][i] = mat1[i][j];
            }
        }
        return mat;
    }
};

int main()
{
    int m, n;
    cout << "Give dimensions of matrix: " << endl;
    cin >> n >> m;

    vector<vector<int>> mat(n, vector<int>(m, 0));
    cout << "Give values for matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    Matrix mt;
    vector<vector<int>> result;

    result = mt.matrix_addition(mat, mat);
    cout << "Matrix Addition: " << endl;
    mt.print_matrix(result);

    result = mt.matrix_subtraction(mat, mat);
    cout << "Matrix Subtraction: " << endl;
    mt.print_matrix(result);

    result = mt.matrix_multiplication(mat, mat);
    cout << "Matrix Multiplication: " << endl;
    mt.print_matrix(result);

    result = mt.matrix_transposition(mat);
    cout << "Matrix Transposition: " << endl;
    mt.print_matrix(result);

    return 0;
}
