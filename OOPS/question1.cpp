#include <iostream>
#include <string.h>

using namespace std;

//* class 'cricket'.......
class cricketer
{
private:
    string name;
    int age;
    int no_of_matches;
    int avg_run;

public:
    //* setters..................
    void setAge(int age)
    {
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setMatches(int no_of_matches)
    {
        this->no_of_matches = no_of_matches;
    }
    void setAvg(int avg_run)
    {
        this->avg_run = avg_run;
    }
    //* getters..................
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
    int getMatches()
    {
        return no_of_matches;
    }
    int getAvg()
    {
        return avg_run;
    }
};

int main()
{
    cricketer v, y, d;
    //* inputing the data for object 'v'
    v.setAge(34);
    v.setAvg(200);
    v.setName("virat kholi");
    v.setMatches(200);
    //* inputing the data for object 'y'
    y.setAge(45);
    y.setAvg(2000);
    y.setName("Yuvraj");
    y.setMatches(205);
    //* inputing the data for object 'd'
    d.setAge(40);
    d.setAvg(300);
    d.setName("dhoni");
    d.setMatches(300);

    //* array of objects....
    cricketer arr[3] = {v, y, d};

    //* getting data of objects.......
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].getName() << endl;
        cout << arr[i].getAge() << endl;
        cout << arr[i].getMatches() << endl;
        cout << arr[i].getAvg() << endl;
        cout << endl;
    }

    return 0;
}