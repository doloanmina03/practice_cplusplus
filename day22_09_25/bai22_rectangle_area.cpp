#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
protected:
    int m_width, m_height;

public:
    virtual void display()
    {
        cout << m_width << " " << m_height << endl;
    }
};

class RectangleArea : public Rectangle
{

public:
    void read_input()
    {
        cin >> m_width >> m_height;
    }
    void display() override
    {
        cout << m_width * m_height;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}