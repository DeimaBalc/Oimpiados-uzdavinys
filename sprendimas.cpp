#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream fin("duom.txt");
    ofstream fout("rez.txt");

    int gatve, auk[100], rez[100], max;
    bool grozis;

    fin >> gatve;

    for (int i = 0; i < gatve; i++)
    {

        fin >> auk[i];
    }

    for (int j = 0; j < gatve; j++)
    {

        max = 0;

        for (int n = j + 1; n < gatve; n++)
        {

            if (auk[j] > auk[n])
            {

                grozis = true;
            }
            else
            {

                grozis = false;
            }

            if (grozis == true)
            {

                continue;
            }
            else if (max < auk[n])
            {

                max = auk[n];
            }
            else
            {

                continue;
            }
        }

        if (max == 0)
        {

            rez[j] = 0;
        }
        else
        {

            rez[j] = max - auk[j] + 1;
        }

        fout << rez[j] << ' ';
        cout << rez[j] << endl;
    }

    fin.close();
    fout.close();

    return 0;
}