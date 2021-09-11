#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;

int first()
{
    float lenth = 1;
    cout << "lenth" << "\n";
    cin >> lenth;
    float square = pow(lenth,2);
    cout << "Square is " << square << "\n";
    return 0;
}

int second()
{
    int kbh = 97;
    while (kbh != 27)
    {
        if (_kbhit())
        {
            kbh = _getch();
        }
        if (kbh == 13)
        {
            cout << "Hello World! 你好世界！ Привет Мир! Bonjour le monde！Γεια σου Κοσμε！Selam Dünya！Hallo Welt!\n";
            kbh = 97;
        }
    }
    return 0;
}

int third()
{
    return 0;
}

int fourth()
{
    return 0;
}

int main()
{
    int no = 1;
    while (true)
    {
        cout << "which work you want to run?(1-4)";
        cin >> no;
        if (1 <= no <= 4)
        {
            if (no == 1)
            {
                first();
            }
            if (no == 2)
            {
                second();
            }
            if (no == 3)
            {
                third();
            }
            if (no == 4)
            {
                fourth();
            }
        }
        else
        {
            return 0;
        }
    }
}