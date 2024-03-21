#include <iostream>
using namespace std;

bool isPrefix(string str, int l, int i, int k)
{
    if (i + k > l) // проверка начала подстроки
        return false;

    for (int j = 0; j < k; j++)
    {
        if (str[i] != str[j]) // проверка несоответстви€ символов
           
            return false;
        i++;
    }
    return true;
}

bool isKPeriodic(string str, int l, int k)
{
    for (int i = k; i < l; i += k) //проверка подстрок на соответствие префиксу длины k-строки
 
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
        cout << ("ƒа, строка €вл€етс€ кратной числу");
    else
        cout << ("Ќет, строка не €вл€етс€ кратной числу");
}

// This code is contributed by
// Surendra_Gangwar