#include "System.h"
#include <iostream>
#include <windows.h>

using namespace std;

void System::Show_Menu()
{

	cout << "********  ��ӭʹ�ÿγ����ѡ��ϵͳ�� *********" << endl;
	cout << "**************  �������������  **************" << endl;
	cout << "**********************************************" << endl;
	cout << "****************  1.ѧ    ��  ****************" << endl;
	cout << "****************  2.��    ʦ  ****************" << endl;
	cout << "****************  3.�� �� Ա  ****************" << endl;
	cout << "****************  0.�˳�ϵͳ  ****************" << endl;
	cout << endl;
}

void System::Exit_System()
{
	cout << "��ӭ�´�ʹ��" << endl;
	cout << "�����˳�ϵͳ..." << endl;
	Sleep(1500);
	system("pause");
	//return 0;
}

void System::Exit_Landing()
{

}