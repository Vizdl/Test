# include <iostream>

using namespace std;


class animal{
public :
    animal(){
        cout << "animal start" << endl; 
    }

    ~animal(){
        cout << "animal end" << endl; 
    }
};


class mouth{
public :
    mouth(){
        cout << "mouth start" << endl; 
    }

    ~mouth(){
        cout << "mouth end" << endl; 
    }
};

class dog : public animal{
public :
    mouth dog_mouth;
    dog(){}
    ~dog(){}
};


/*
output : 
animal start
mouth start
mouth end
animal end
结论 : 在 g++-7.4.0, wsl Ubuntu 7.4.0-1ubuntu1~18.04.1 中, 先调用继承的类的构造函数,再调用复合。
然后  释放内存的时, 先调用 复合的析构函数,再调用继承的析构函数。 
*/
int main (){
    dog d;
    return 0;
}