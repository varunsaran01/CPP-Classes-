/*
PRN- 22070123130
Volume of cuboid using class.
*/

#include<iostream>
using namespace std;
class VolumeCube
{
public:
    int height, length, breadth;

    int volume(){
        int volume;
        volume = length*breadth*height;
        return volume;
    } 
    void display(int volume){
        cout << volume;
    }
};

int main()
{
    
    VolumeCube cube;
    cout << "Enter the length of the cuboid: ";
    cin >> cube.length;
    cout << "Enter the breadth of the cuboid: ";
    cin >> cube.breadth;
    cout << "Enter the height of the cuboid: ";
    cin >> cube.height;
    int volume;
    volume = cube.volume();
    cube.display(volume);
    return 0;
}

/*
OUTPUT:-

Enter the length of the cuboid: 5
Enter the breadth of the cuboid: 6
Enter the height of the cuboid: 7
210
*/
