//
////#include <opencv2/opencv.hpp>
//#include<opencv2/core/core.hpp>  
//#include<opencv2/highgui/highgui.hpp>
//
//#include <iostream>
//#include<stdlib.h>
//
//
//using namespace std;
//
//using namespace cv;
//
//int main()
//
//{
//
//	//��ȡ���ص�һ��ͼƬ����ʾ����
//
//	Mat img = imread("Tps.png");
//
//	imshow("MM Viewer", img);
//	int a = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		a = 1 << 16 |2 << 8 | i;
//		cout << "a=:" << a << endl;
//	}
//
//
//	//�ȴ��û�����
//	system("pause");
//
//	waitKey(0);
//
//
//	return 0;
//
//}


//-----------------------------------������˵����----------------------------------------------
//  ��������:����OpenCV���Ž̳�֮����ͼ������룬��ʾ����� һվʽ��ȫ���� ��������Դ��
// VS2010��   OpenCV�汾��2.4.8
//      2014��3��5�� Create by ǳī
//  ������ ͼ������룬��ʾ����� һվʽ����   ����Դ��
//  ͼƬ�زĳ�����dota2ԭ��ʥ�ô̿� dota2 logo  ��������
//------------------------------------------------------------------------------------------------


#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include "gray.h"
#include "stdlib.h"
using namespace cv;


int main()
{

	Mat girl = imread("Tps.png");  //����ͼ��Mat
	gray(girl);//
	namedWindow("���ͼ");	//create a window
	imshow("���ͼ", girl);	//show the window

	waitKey();  //wait
	system("pause");  //pause the window
	return 0;
}