#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>

#include<stdlib.h>
using namespace std;
using namespace cv;
#define clamp(x,a,b)  (x<a?a:x)>b?255:x

int gray(Mat img)
{

	/*Mat img = imread("Tps.png");*/
	//Mat greyimg(img.size(), CV_8UC1);
	unsigned char* gray = (unsigned char*)malloc(img.rows*img.cols * sizeof(unsigned char));
	memset(gray, 0, img.rows*img.cols * sizeof(unsigned char));
	unsigned char* srcrgb = (unsigned char*)malloc(img.rows*img.cols * 3 * sizeof(unsigned char));
	memset(srcrgb, 0, img.rows*img.cols * 3 * sizeof(unsigned char));

	for (int i = 0; i < img.rows; i++)
	{
		unsigned char* graypix = gray + img.cols * i;
		unsigned char* srcpix = srcrgb + img.cols*i * 3;
		for (int j = 0; j < img.cols; j++)
		{
			graypix[0] = clamp((img.at<Vec3b>(i, j)[0] * 38 + img.at<Vec3b>(i, j)[1] * 75 + img.at<Vec3b>(i, j)[2] * 15) >> 7, 0, 255);
			img.at<Vec3b>(i, j)[0] = graypix[0];
			img.at<Vec3b>(i, j)[1] = graypix[1];
			img.at<Vec3b>(i, j)[2] = graypix[2];
			graypix++;
			
			srcpix[0] = img.at<Vec3b>(i, j)[0];
			srcpix[1] = img.at<Vec3b>(i, j)[1];
			srcpix[2] = img.at<Vec3b>(i, j)[2];
			srcpix += 3;
		}
	}
}