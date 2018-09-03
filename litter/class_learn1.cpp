#include <iostream>

class Box
{
    public:
        double length;   // Length of a box
        double breadth;  // Breadth of a box
        double height;   // Height of a box
        double length_fun(double x){
        	return x + 1;
		}
};

int main(int argc, char** argv) 
{
	using namespace std;
	Box Box1;
	Box Box2;
	double volume = 0.0;
	cout<<"输入Box1的高度：";
	cin>>Box1.height; 
	cout<<"输入Box1的长度：";
    cin>>Box1.length; 
    cout<<"输入Box1的宽度：";
    cin>>Box1.breadth;
    Box2.height = 10.0;
    Box2.length = 12.0;
    Box2.breadth = 13.0;
    volume = Box1.height * Box1.length * Box1.breadth;
    cout << "Box1 的体积：" << volume <<endl;
    cout << "Box1 的长度加1为："<< Box1.length_fun(Box1.length)<<endl;
    volume = Box2.height * Box2.length * Box2.breadth;
    cout << "Box2 的体积：" << volume <<endl;
	return 0;
}
