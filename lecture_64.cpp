#include <iostream>
using namespace std;
class Square
{
public:
    float lenght;
    float width;
    Square(int l, int w)
    {
        lenght = l;
        width = w;
    }
    float getLegth()
    {
        return lenght;
    }
    float getWidth()
    {
        return width;
    }
};
int main()
{
    Square s(10, 20);
    Square s1(30, 40);
    cout << "The length and width of object 1 is :" << s.getLegth() << "  " << s.getWidth() << endl;
    cout << "The length and width of object 2 is :" << s1.getLegth() << "  " << s1.getWidth() << endl;
    s = s1; // member wise assignment of objects
    cout << "After assignment...." << endl;
    cout << "The length and width of object 1 is :" << s.getLegth() << "  " << s.getWidth() << endl;
    cout << "The length and width of object 2 is :" << s1.getLegth() << "  " << s1.getWidth() << endl;

    return 0;
}