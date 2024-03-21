#include <iostream>
using namespace std;

bool isPrefix(string str, int l, int i, int k)
{
    if (i + k > l) // �������� ������ ���������
        return false;

    for (int j = 0; j < k; j++)
    {
        if (str[i] != str[j]) // �������� �������������� ��������
           
            return false;
        i++;
    }
    return true;
}

bool isKPeriodic(string str, int l, int k)
{
    for (int i = k; i < l; i += k) //�������� �������� �� ������������ �������� ����� k-������
 
        if (!isPrefix(str, l, i, k))
        
            return false;
   
    return true;
}


int main()
{
    setlocale(LC_ALL, "ru");

    string str = "SteveMcQueenSteveMcQueen";
    int l = str.length();
    int k = 12;

    if (isKPeriodic(str, l, k))
        cout << ("��, ������ �������� ������� �����");
    else
        cout << ("���, ������ �� �������� ������� �����");
}

// This code is contributed by
// Surendra_Gangwar