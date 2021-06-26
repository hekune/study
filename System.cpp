#include "System.h"
#include <iostream>
#include <windows.h>

using namespace std;

void System::Show_Menu()
{

	cout << "********  欢迎使用课程设计选题系统！ *********" << endl;
	cout << "**************  请输入您的身份  **************" << endl;
	cout << "**********************************************" << endl;
	cout << "****************  1.学    生  ****************" << endl;
	cout << "****************  2.老    师  ****************" << endl;
	cout << "****************  3.管 理 员  ****************" << endl;
	cout << "****************  0.退出系统  ****************" << endl;
	cout << endl;
}

void System::Exit_System()
{
	cout << "欢迎下次使用" << endl;
	cout << "正在退出系统..." << endl;
	Sleep(1500);
	system("pause");
	//return 0;
}

void System::Exit_Landing()
{

}