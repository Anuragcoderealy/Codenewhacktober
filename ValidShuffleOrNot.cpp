#include <iostream>
using namespace std;

int main()
{
    string s1, s2, res;
    cin >> s1;
    cin >> s2;
    cin >> res;
    int n1 = s1.size();
    int n2 = s2.size();
    int nr = res.size();
    int f1 = 0, f2=0;
    if (nr != n1 + n2)
    {
        cout << "No" << endl;
    }
    else
    {
        int i = 0, j = 0, k = 0;
        while (k < nr)
        {

            if (i < n1 && res[k] == s1[i])
            {
                i++;
                k++;
            }
            else if (j < n2 && res[k] == s2[j])
            {
                j++;
                k++;
            }
            else
            {
                f1 = 1;
                break;
            }
        }
    }
    
    if (f1 == 1)
    {
        int i = 0, j = 0, k = 0;
        while (k < nr){

            if (i < n2 && res[k] == s2[i])
            {
                i++;
                k++;
            }
            else if (j < n1 && res[k] == s1[j])
            {
                j++;
                k++;
            }
            else
            {
                f2 = 1;
                break;
            }
        }
    }

    if (f1==0 || f2==0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
