//? Perform matrix addition, subtraction, multiplication, and transposition.
#include <iostream>
#include <vector>
using namespace std;
class Matrix
{
public:
    void print_matrix(vector<vector<int>> mat(n, vector<int>(m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << mat[i][j];
            }
        }
        cout << endl;
    }
    vector<vector<int>> matrix_addition(vector<vector<int>> mat1(n, vector<int>(m));, vector<vector<int>> mat2(n, vector<int>(m));)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        return mat;
    }
    vector<vector<int>> matrix_subtraction(vector<vector<int>> mat1(n, vector<int>(m));, vector<vector<int>> mat2(n, vector<int>(m));)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        return mat;
    }
    vector<vector<int>> matrix_multiplication(vector<vector<int>> mat1(n, vector<int>(m));, vector<vector<int>> mat2(n, vector<int>(m));)
    {
        int n = mat1.size();
        int m = mat2[0].size();
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[i][j] * mat2[i][j];
            }
        }
        return mat;
    }
    vector<vector<int>> matrix_transposition(vector<vector<int>> mat1(n, vector<in>(m)))
    {
        int n = mat1.size();
        int m = mat1[0].size();
        vector<vector<int>> mat;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mat[i][j] = mat1[j][i];
            }
        }
        return mat;
    }
};
int main()
{
    int m, n;
    cout << "Give dimensions of matrix: " << endl;
    cin >> m >> n;
    cout << "Give values for matrix: " << endl;
    vector<vector<int>> mat;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int o;
            cin >> o;
            mat[i][j] = o;
        }
    }
    Matrix mt = Matrix();
    mt.matrix_addition(mat, mat);
    mt.print_matrix();
    mt.matrix_subtraction(mat, mat);
    mt.print_matrix();
    mt.matrix_multiplication(mat, mat);
    mt.print_matrix();
    mt.matrix_transposition(mat);
    mt.print_matrix();
}