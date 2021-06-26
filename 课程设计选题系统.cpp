﻿// 课程设计选题系统.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "System.h"

using namespace std;

int main()
{
    System sys;

    int choice = 0;

    while (true)
    {
        sys.Show_Menu();        //展示菜单
        cout << "请输入您的选择" << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:                 //退出系统
            sys.Exit_System();
            return 0;
            break;
        case 1:                 //学生
            break;
        case 2:                 //老师
            break;
        case 3:                 //管理员
            break;
        default:
            cout << "输入有误，请重新输入" << endl;
            system("pause");
            system("cls");
            break;
        }
    }

    system("pause");
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
