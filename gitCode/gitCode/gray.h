#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
using namespace cv;
#define clamp(x,a,b)  (x<a?a:x)>b?255:x

int gray(Mat img);