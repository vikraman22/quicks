#include <iostream>
#include <iomanip>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class stud
{
public:
    char name[20];
    int regno;

};

int main()
{
    stud s[50], t[20];
    int ch, i, n;
    fstream fp1, fp2;
    do
    {
        std::cout << " insrtion " << endl;
        std::cout << "deletion " << endl;
        std::cout << "updation " << endl;
        std::cout << "exit " << endl;
        std::cout << "choice " << endl;
        std::cin >> ch;
        switch(ch)
        {
        case 1:
            cout << "creation " << endl;
            fp1.open("old", ios::out | ios :: in );
            cout << "enter the no of studs " << endl;
            cin >> n;
            for(i = 1; i <=n; i++)
            {
                cout << "regno:" << endl;
                cin >> s[i].regno;
                cout << "name" << endl;
                cin >> s[i].name;
                fp1.write((char*)&s[i], sizeof(s[i]));
            }
            fp1.close();
            cout << "no of recds " << endl;
            fp1.open("old", ios::in);
            for(i = 1; i <=n; i++)
            {
                fp1.read((char*)&s[i], sizeof(s[i]));
                cout << "regno. " << s[i].regno;
                cout << "name is" << s[i].name << endl;

            }
            fp1.close();
            break;

        case 2:
            int deletion;
            fp1.open("old", ios::in);
            fp2.open("new", ios::out);
            cout << "deletion of records " << endl;
            cout << "enter regno" << endl;
            cin >> deletion;
            for(i = 1; i <=n; i++)
            {
                fp1.read((char*)&s[i], sizeof(s[i]));
                if(s[i].regno != deletion)
                fp2.write((char*)&s[i], sizeof(s[i]));

            }
            n--;
            fp1.close();
            fp2.close();
            fp1.close("old", ios::out);
            fp2.open("new", ios::in);
            cout << "\nAfter deletion" << endl;
            for(i = 1; i <=n; i++)
            {
                fp2.read((char*)&s[i], sizeof(s[i]));
                cout << "\n\t" << s[i].regno << endl;
                cout << "\n\t" << s[i].name << endl;
                fp1.write((char*)&s[i], sizeof(s[i]));

            }
            fp1.close();
            fp2.close();
            break;

        case 3:
            cout << "\nmodification of record" << endl;
            fp2.open("old", ios::out | ios::app);
            cout << "\n Enter the regno " << endl;
            cin >> s[i].regno;
            cout << "enter name " << endl;
            cin >> s[i].name;
            for(i = 1; i<=n; i++)
            fp2.write((char*)&s[i],sizeof(s[i]));
            n++;
            fp2.close();
            cout << "new modification " << endl;
            fp2.open("old", ios::in);
            fp2.open("new", ios::in);
            for(i =1 ; i <= n; i++)
            {
                fp2.read((char*)&s[i],sizeof(s[i]));
                fp1.write((char*)&s[i],sizeof(s[i]));
                cout << "\n\t" << s[i].regno << "\n\t" << s[i].name;

            }
            fp1.close();
            fp2.close();
            break;



        }
    }
    while(ch < 4);
    return 0;
}
