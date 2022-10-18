#include<iostream>
using namespace std;

class shape{
    protected :
    double width,height;
    public:
    void set_data()
    {
        cout<<"Enter the height and width of shape  : ";
        cin>>height>>width;
    }
    virtual void area()=0;
    
};
// void shape::area(){
//     cout<<"Area of shape ";
// }

class rectangle : public shape{
    public :
    void area()
    {
        cout<<"Area of rectangle = "<<width*height<<endl;
    }
};

int main()
{
    shape *s;
    rectangle r;
    s = &r;
    s->set_data();
    s->area();
    return 0;
}