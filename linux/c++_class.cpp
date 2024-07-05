/***********************************************************************
Copyright 2020 GuYueHome (www.guyuehome.com).面向对象
***********************************************************************/

#include <iostream>

class A //class 定义一个类为 A，所谓的对象
{
public:
    int i;//类中定义的变量称为属性，
    void test()////类中定义的函数称为方法，
    {
        std::cout << i << std::endl;
    }
};

int main()
{
    A a;//建立一个类A的对象为a
    
    a.i = 10;//对象的属性值
    a.test();//对象的方法
    
    return 0;
}
